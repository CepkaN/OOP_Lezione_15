#pragma once

class Calcolatore {
private:
	double _n;
	double _b;
public:
	Calcolatore(double n, double b);
	~Calcolatore();
	double operator+();
	double operator-();
	double operator*();
	double operator/(Calcolatore&calc);
	double operator%(Calcolatore& calc);
	double Procent();

};