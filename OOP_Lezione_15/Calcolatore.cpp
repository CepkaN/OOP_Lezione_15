#include"Calcolatore.h"

Calcolatore::Calcolatore(double n,double b):_n(n),_b(b){}
Calcolatore::~Calcolatore(){}
double Calcolatore::operator+() {
	return _n + _b;
}
double Calcolatore::operator-() {
	return _n + _b;
}
double Calcolatore::operator*() {
	return _n * _b;
}
double Calcolatore::operator/(Calcolatore& calc) {
	return _n / _b;
}
double Calcolatore::operator%(Calcolatore& calc) {
	return (int)_n % (int)_b;
}
double Calcolatore::Procent() {
	return ((_n / _b) * 100);
}