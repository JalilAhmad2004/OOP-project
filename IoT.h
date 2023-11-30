/*
 * IoT.h
 *
 *  Created on: May 3, 2023
 *      Author: jalil
 */

#ifndef IOT_H_
#define IOT_H_
#include <iostream>
#include <cstring>
using namespace std;

//Base Class
class IoT {
protected:
	int oxygen;
	int BMI;
	int pulse;
	int blood;
	int acceleration;
	int gyroscope;
	int pedometer;
	int Optical;
	int Tilt;
	int Force;
public:
	IoT();
	IoT(int oxygen,int BMI,int pulse,int blood,int acceleration,int gyroscope,int pedometer,int Optical,int Tilt,int Force); //Parameterized constructor

	void reading();      //this function is used to read the value given by user, and is used in derived class also
	void display();
	~IoT();

	int getBlood() const;
	void setBlood(int blood);
	int getBmi() const;
	void setBmi(int bmi);
	int getOxygen() const;
	void setOxygen(int oxygen);
	int getPulse() const;
	void setPulse(int pulse);
	int getAcceleration() const;
	void setAcceleration(int acceleration);
	int getForce() const;
	void setForce(int force);
	int getGyroscope() const;
	void setGyroscope(int gyroscope);
	int getOptical() const;
	void setOptical(int optical);
	int getPedometer() const;
	void setPedometer(int pedometer);
	int getTilt() const;
	void setTilt(int tilt);
};

//Derived class
class Vital : public IoT {
public:
	Vital();
	Vital(int oxygen,int BMI,int pulse,int blood);
	void display();

	void reading(int& oxy,int& bmi,int& pulse,int& bp);  //Same function used in base class
};

//General Movement Derived class
class GeneralMov : public IoT {
public:
	GeneralMov();
	GeneralMov(int acceleration,int gyroscope,int pedometer);
	void display();

	void reading(int& acceleration,int& gyroscope,int& pedometer);  //Same function used in base class
};

//Specific Movement Derived Class
//Derived class
class SpecificMov : public IoT {
public:
	SpecificMov();
	SpecificMov(int Optical,int Tilt,int Force) ;
	void display();

	 void reading(int& Optical,int& Tilt,int& Force);  //Same function used in base class
};

#endif /* IOT_H_ */
