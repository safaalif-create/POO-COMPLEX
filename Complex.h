#pragma once
class Complex
{
private:
	double re;
	double img;
public:
	Complex(double, double);
	Complex(const Complex& C);
	void afficher();
	~Complex();
	Complex operator+(Complex C)const;
	Complex operator+(double)const;
	Complex operator-(Complex C)const;
	Complex operator-(double)const;
	Complex operator*(Complex C)const;
	Complex operator*(double)const;
	Complex operator/(Complex C)const;
	Complex operator/(double)const;
	bool operator==(Complex C)const;
	bool operator>(Complex C)const;
};