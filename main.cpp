#include <iostream>
#include "RoboticArm.h"

int main() {
	RoboticArm robot(0,0,0);

	std::cout << "Position inicial: ("
		<< robot.getX() << ","
	       	<< robot.getY() << ", "
	<< robot.getZ() << ")" << std::endl;
	robot.move(10, 20, 30);

	std::cout << "Posicion despues de mover: ("
		<< robot.getX() << ", "
		<< robot.getY() << ", "
		<< robot.getZ() << ")" << std::endl;
	robot.grab();

	std::cout << "El robot esta sujetando un objeto: "
		<< (robot.isHolding() ? "si" : "no")
		<< std::endl;

	robot.release();

	std::cout << "El robot esta sujetando un objeto: "
		<< (robot.isHolding() ? "si" : "no")
		<< std::endl;
return 0;

}
