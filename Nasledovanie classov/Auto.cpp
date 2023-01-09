#include "Auto.h"
const std::string& Auto::getMark() const {
	return _mark;
}
void Auto::setMark(const std::string& mark) {
	_mark = mark;
}
const int SportCar::getMaxSpeed() const{
	return _maxSpeed;
}
void SportCar::setMaxSpeed(int maxSpeed) {
	_maxSpeed = maxSpeed;
}
const int Jeep::getWd() const {
	return _wd;
}
void Jeep::setWd(int wd) {
	_wd = wd;
}
