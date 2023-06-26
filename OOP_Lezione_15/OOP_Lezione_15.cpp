#include<iostream>
#include"Class.h"
#include"Client.h"
#include"Calcolatore.h"

int main() {
	setlocale(LC_ALL, "Russian");
	MyClass obj;
	MyClass::GetCount();
	MyClass::vectname;

	Client* client1 = new Client("Miron", 466666647, 24000);
	Client* client2 = new Client("Kazimir", 466232222, 77);
	Client* client3 = new Client("Anna-Maria", 234444156, 200000);
	Client* client4 = new Client("Sonya", 222746356, 500);
	Client* client5 = new Client();
	client5->Client1(*client1);

	client1->Mostra();
	client2->Mostra();
	client3->Mostra();
	client4->Mostra();
	client5->Mostra();

	std::cout << Client::GetCifr()<< '\n';

	Calcolatore* calc1 = new Calcolatore(23, 54);
	Calcolatore* calc2 = new Calcolatore(7.8, 255.7);
	Calcolatore* calc3 = new Calcolatore(10.5, 43.43);
	//calc1->operator+




	return 0;
}