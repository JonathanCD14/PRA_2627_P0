#include "RoboticArm.h"

RoboticArm::ROboticArm(double x,double y,double z) : x(x),y(y),z(z),holding(false){
}
double RoboticArm::getX() const {
	return x;
}
double Robotic Arm::getY() const {
	return y;
}
double RoboticArm::getZ() const { 
	return z;
}
bool RoboticArm::isHolding() const {
	return holding;
}
void RoboticArm::grab() {
	holding = true;
}
void RoboticArm = release() {
	holding = false;
}

void RoboticArm::move(double x,double y,double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}
