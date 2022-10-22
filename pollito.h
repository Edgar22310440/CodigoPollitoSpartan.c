#pragma once
#include <iostream>
class pollito
{
public:
	int vida = 100;
	float plumas;
	pollito(int v) {
		vida = v;
		plumas = 0;
	}
	pollito(double v) {
		plumas = v;
		vida = 100;
	}
	void polliPio() {
		std::cout << "pio";
	}
};