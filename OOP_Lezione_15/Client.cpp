#include"Client.h"
#include<iostream>

Client::Client() :_name("name"), _conto(0), _rest(0) { }
Client::Client(std::string name, long long conto, int rest) :_name(name), _conto(conto), _rest(rest) {
	_brr = true;
	++cifr;
}
Client::~Client() { if (_brr) { --cifr; } }

int Client::GetCifr() {
	return cifr;
}

Client* Client::Client1(Client& cl) {
	_name = cl._name;
	_conto = cl._conto;
	_rest = cl._rest;
	_brr = false;
	return this;
}

void Client::Mostra() {
	std::cout << "Имя клиента : " << _name << '\n';
	std::cout << "Номер счёта : " << _conto << '\n';
	std::cout << "Остаток на счёте : " << _rest << '\n';
	if (_brr==true)std::cout << "Клиент постоянный.\n";
	if(_brr==false)std::cout << "Клиент временный.\n";
}
int Client::cifr{ 0 };