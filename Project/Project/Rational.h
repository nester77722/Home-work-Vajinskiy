#pragma once

#include <iostream>

class Rational
{
private:

	int chisl;
	int znam;

public:

	Rational(); //����������� �� ���������

	Rational(int chisl, int znam); // ����������� � �����������

	Rational Multiplication(const Rational& other); // ����� ���������

	Rational operator* (const Rational& other); // ��������������� ��������� *

	void Show(); // ����� ������ �� �����
};

