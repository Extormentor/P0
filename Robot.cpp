#include "Robot.h"
#include <iostream>
#include <stdexcept>

using namespace std;

RoboticArm::RoboticArm() {
	x = 0.0;
	y = 0.0;
	z = 0.0;
	sujeto = false;
}

void RoboticArm::get_x() {
	cout << "Valor de x: " << x << endl;
}

void RoboticArm::get_y() {
        cout << "Valor de y: " << y << endl;
}

void RoboticArm::get_z() {
        cout << "Valor de z: " << z << endl;
}

bool RoboticArm::sujetado() {
	return sujeto;
}

void RoboticArm::grab() {
	if(sujeto == true)
		throw runtime_error("Error, la pinza ya está cerrada");
	sujeto = true;
}

void RoboticArm::release() {
        if(sujeto == false)
                throw runtime_error("Error, la pinza ya está abierta");
        sujeto = false;
}

void RoboticArm::move(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}
