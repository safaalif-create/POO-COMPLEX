#include "Complex.h"
#include<iostream>
using namespace std;

Complex::Complex(double a, double b)
{
	this->re = a;
	this->img = b;
}

Complex::Complex(const Complex& C)
{
	this->re = C.re;
	this->img = C.img;
}

void Complex::afficher()
{
	if (this->img >= 0) {
		cout << this->re << "+i" << this->img << endl;
	}
	else{
		this->img = this->img * (-1);
	cout << this->re << "-i" << this->img << endl;
	}
	
}

Complex::~Complex()
{
}

Complex Complex::operator+(Complex C)const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + C.re;
	res->img = this->img + C.img;
	return *res;
}

Complex Complex::operator+(double x) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + x;
	res->img = this->img + 0.0;

	return *res;
}

Complex Complex::operator-(Complex C) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - C.re;
	res->img = this->img - C.img;
	return *res;
}

Complex Complex::operator-(double y) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - y;
	res->img = this->img + 0.0;

	return *res;
}

Complex Complex::operator*(Complex C) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = (C.re * this->re) - (C.img * this->img);
	res->img = (C.img * this->re) + (C.re * this->img);
	
	return *res;
}

Complex Complex::operator*(double z) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re * z;
	res->img = this->img *z;
	return *res;
}

Complex Complex::operator/(Complex C) const
{
	double denominateur = C.re * C.re + C.img * C.img;
	if (denominateur == 0) { cout << "erreur division" << endl; }
	Complex* res = new Complex(0.0, 0.0);
	res->re = (this->re * C.re + img * C.img)/denominateur;
	res->img = (this->img * C.re - re * C.img)/denominateur;
	return *res;
}

Complex Complex::operator/(double t) const
{    
	if (t == 0) { cout << "division impossible" << endl; }
	else {
		Complex* res = new Complex(0.0, 0.0);
		res->re = this->re / t;
		res->img = this->img / t;
		return *res;
	}
}

bool Complex::operator==(Complex C) const
{
	if (this->re == C.re && this->img == C.img)
		return true;
	else  return false;
}

bool Complex::operator>(Complex C) const
{
	if (this->re > C.re && this->img > C.img)
		return true;
	else return false;
}
