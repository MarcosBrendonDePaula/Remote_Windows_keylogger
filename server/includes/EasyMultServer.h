#include <winsock2.h>
#include <iostream>
#include <list>
#include <vector>
#include <cstring>
#include "nsock.h"

using namespace std;
class EasyMultServer{
	private:
		int id;
		SOCKET ServeSock;
		struct sockaddr_in DadosSocket;
		WSADATA dll;
	public:
		vector<nsock*> Conexoes;
		static list<int> OrdemDeChegada;
		static void Recebimento(void *arg);
		static void removeNode(void* entrada);
		EasyMultServer(int porta);
		void StartServer(void(*Processamento)(void*));
		nsock* getConID(int i);
};