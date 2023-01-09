#pragma once
#include<iostream>
#include<cstring>
class Auto
{
public:
	const std::string& getMark() const;
	void  setMark(const std::string& mark);
private:
	std::string _mark;
};

class SportCar : public Auto
{
public:
	const int getMaxSpeed() const;
	void setMaxSpeed(int maxSpeed);
private:
	int _maxSpeed = 0;
};

class Jeep : public SportCar
{
public:
	const int getWd() const;
	void setWd(int wd);
private:
	int _wd = 0;
};

