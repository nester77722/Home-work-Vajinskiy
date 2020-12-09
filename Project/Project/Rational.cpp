#include "Rational.h"

Rational::Rational()
{
	this->chisl = 0;
	this->znam = 1;
}

Rational::Rational(int chisl, int znam)
{
	this->chisl = chisl;

	if (znam == 0)
	{
		std::cout << "Знаменатель не может быть 0! Установлено значение по умолчанию - 1\n";
		this->znam = 1;
	}
	else
	{
		this->znam = znam;
	}
}

Rational Rational::Multiplication(const Rational& other)
{
	Rational result = Rational(this->chisl * other.chisl, this->znam * other.znam);
	return result;
}

Rational Rational::operator*(const Rational& other)
{
	Rational result = this->Multiplication(other);

	return result;
}

void Rational::Show()
{
	std::cout << chisl << "|" << znam << std::endl;
}
