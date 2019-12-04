#include <iostream>
#include <map>
#include "includes/EasyMultServer.h"
#include "includes/EasyHeader.h"
#include <vector>
#include <sstream>

struct Configuracao{
    int porta;
    string arquivo;
}config;

using namespace std;
EasyMultServer *servidor;

vector<string> split(const std::string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;
    while (getline (ss, item, delim)) {
        result.push_back (item);
    }
    return result;
}

class Cpointer{
public:
    void(*Processamento)(void*);
    Cpointer(void(*Processamento)(void*)){
        this->Processamento=Processamento;
    }
};

map<string,Cpointer*> comando;

void response(void *arg){
    nsock* socket=(nsock*)arg;
    string msg = socket->getEntrada();
    if(msg.find(',')<100){
        vector<string> dados = split(msg,',');
        if(comando[dados[0]]!=NULL)
            comando[dados[0]]->Processamento((void*)new string(dados[1]));
    } else
        socket->Enviar("Comando invalido");
}

void salvarInput(void *arg){
    FILE *arquivo=fopen(config.arquivo.c_str(),"a+");
    string *msg = (string*)arg;
    fprintf(arquivo,"%s\n",msg->c_str());
    fclose(arquivo);
}

void CriarComandos(){
    comando[string("Addletra")] = new Cpointer(&salvarInput);
}

void inicializar(){
    CriarComandos();
    servidor = new EasyMultServer(config.porta);
    servidor->StartServer(&response);
}

int main() {
    config.arquivo = "Entradas.txt";
    config.porta = 25565;
    inicializar();
    string x;
    cout<<"Para encerrar digite 'sair' "<<endl;
    while (x!="sair"){
        cin>>x;
    }
    return 0;
}