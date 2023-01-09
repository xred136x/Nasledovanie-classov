#include"Auto.h"
#include<iostream>
#include<cstring>

int main() {
	Auto A;
	A.setMark("Lada");
	std::cout << A.getMark() << '\n';
	
	SportCar c;
	c.setMark("BMW");
	c.setMaxSpeed(200);
	std::cout << c.getMark() << ' ' << c.getMaxSpeed() << '\n';

	Jeep b;
	b.setMark("Porshe");
	b.setWd(4);
	b.setMaxSpeed(150);
	std::cout << b.getMark() << ' ' << b.getMaxSpeed() << ' ' << b.getWd();
	return 0;
}