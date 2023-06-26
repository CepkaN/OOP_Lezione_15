#pragma once
#include<iostream>


class Client {
private:
	std::string _name;
	long long _conto;
	int _rest;
	static int cifr;
	bool _brr;
public:
	Client();
	Client(std::string name, long long conto, int rest);
	~Client();
	Client* Client1(Client& cl);
	static int GetCifr();
	void Mostra();
};
//int Client::cifr{ 0 };