#pragma once
#include <winsock2.h>
#include <windows.h>
#include <iostream>
#include <process.h>
#include <list>
#include "Events.h"
#include <cstring>
using namespace std;
class EasySocket
{
private:
	SOCKET conection;
	sockaddr_in InformacoesConection;
	list<string> Entradas;
	Events Eventos;
	bool closed;
public:
	static int bffSiz;
	static void ReceiverDefault(void *arg);
	EasySocket(std::string ip, int porta,void(*funcao)(void *arg));
	string getEntrada();
	int qtEntradas();
	int conectar();
	int Enviar(std::string msg);
	bool isClosed();
	void Desconectar();
	~EasySocket();
};

