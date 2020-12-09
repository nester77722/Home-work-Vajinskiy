#pragma once

#include <iostream>

class Rational
{
private:

	int chisl;
	int znam;

public:

	Rational(); //Конструктор по умолчанию

	Rational(int chisl, int znam); // Конструктор с параметрами

	Rational Multiplication(const Rational& other); // Метод умножения

	Rational operator* (const Rational& other); // Переопределение оператора *

	void Show(); // Метод вывода на экран
};

