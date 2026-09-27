#include "Robot.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    try{
	RoboticArm r1;
	r1.move(2.4, 3.3, 6.7);
	r1.grab();
	
	r1.get_x(); 
	r1.get_y();
	r1.get_z();
	
	if(r1.sujetado())
		cout << "Estado del gripper: Abierto" << endl;
	else
		cout << "Estado del gripper: Cerrado" << endl;
    }catch(const runtime_error& e) {
	    cout << e.what() << endl;
    }
}

