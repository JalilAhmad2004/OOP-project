/*
 * IoT.cpp
 *
 *  Created on: May 3, 2023
 *      Author: jalil
 */

#include "IoT.h"
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Default Constructor
IoT::IoT() {
	this->oxygen = 0;
	this->BMI = 0;
	this->pulse = 0;
	this->blood = 0;
	this->acceleration = 0;
	this->gyroscope = 0;
	this->pedometer =0 ;
	this->Optical = 0;
	this->Tilt = 0;
	this->Force = 0;
}

//Parameterized Constructor
IoT::IoT(int oxygen,int BMI,int pulse,int blood,int acceleration,int gyroscope,int pedometer,int Optical,int Tilt,int Force) {
	this->oxygen = oxygen;
	this->BMI = BMI;
	this->pulse = pulse;
	this->blood = blood;
	this->acceleration = acceleration;
	this->gyroscope = gyroscope;
	this->pedometer = pedometer;
	this->Optical = Optical;
	this->Tilt = Tilt;
	this->Force = Force;
}

//Parameterized constructor of Vital class
Vital::Vital(int oxygen,int BMI,int pulse,int blood) : IoT(oxygen,BMI,pulse,blood,acceleration,gyroscope,pedometer,Optical,Tilt,Force) {

}

//Parameterized constructor of General class
GeneralMov::GeneralMov(int acceleration,int gyroscope,int pedometer ) : IoT(oxygen,BMI,pulse,blood,acceleration,gyroscope,pedometer,Optical,Tilt,Force) {

}

//Parameterized constructor of Specific class
SpecificMov::SpecificMov(int Optical,int Tilt,int Force) : IoT(oxygen,BMI,pulse,blood,acceleration,gyroscope,pedometer,Optical,Tilt,Force) {

}

//Reading function of Vital class inherited from base class
void Vital::reading(int& oxy,int& bmi,int& pulse,int& bp) {
	srand(time(0));

	oxygen = rand()%100;

	BMI = ((rand()%50) + 20);

	this->pulse = ((rand()%80) + 60);

	blood = ((rand()%30) + 90);

	oxy = oxygen;
	bmi = BMI;
	pulse = this->pulse;
	bp = blood;
}

//Reading function of General Movement class inherited from base class
void GeneralMov::reading(int& acceleration,int& gyroscope,int& pedometer ) {
	srand(time(0));
	this->acceleration = rand()%2;
	this->gyroscope = rand()%2;
	this->pedometer = rand()%2;

	acceleration = this->acceleration ;
	gyroscope = this->gyroscope;
	pedometer = this->pedometer;
}

//Reading function of Specific Movement class inherited from base class
void SpecificMov::reading(int& Optical,int& Tilt,int& Force) {
	srand(time(0));
	this->Optical = rand()%2;
	this->Tilt = rand()%2;
	this->Force = rand()%2;

	Optical = this->Optical;
	Tilt = this->Tilt;
	Force = this->Force;
}

//Vital sensors display
void Vital::display() {
	cout<<"\n\n--------Vital Sensors--------\n";
	cout<<"Oxygen Saturation:"<<this->oxygen;
	cout<<"\nBMI:"<<this->BMI;
	cout<<"\nPulse Rate:"<<this->pulse;
	cout<<"\nBP:"<<this->blood;

	cout<<endl;
}

///General Movement Senors Display
void GeneralMov::display() {
	cout<<"\n\n--------General Movement Sensors--------\n";
	cout<<"Acceleration:"<<this->acceleration;
	cout<<"\nGyroscope:"<<this->gyroscope;
	cout<<"\nPedometer:"<<this->pedometer;

	cout<<endl;
}

//Specific Movement Sensors display
void SpecificMov::display() {
	cout<<"\n\n--------Specific Movement Sensors--------\n";
	cout<<"Optical sensor:"<<this->Optical;
	cout<<"\nTilt sensor:"<<this->Tilt;
	cout<<"\nForce sensor:"<<this->Force;

	cout<<endl;
}

int IoT::getBlood() const {
	return blood;
}

void IoT::setBlood(int blood) {
	this->blood = blood;
}

int IoT::getBmi() const {
	return BMI;
}

void IoT::setBmi(int bmi) {
	BMI = bmi;
}

int IoT::getOxygen() const {
	return oxygen;
}

void IoT::setOxygen(int oxygen) {
	this->oxygen = oxygen;
}

int IoT::getPulse() const {
	return pulse;
}

int IoT::getAcceleration() const {
	return acceleration;
}

void IoT::setAcceleration(int acceleration) {
	this->acceleration = acceleration;
}

int IoT::getForce() const {
	return Force;
}

void IoT::setForce(int force) {
	Force = force;
}

int IoT::getGyroscope() const {
	return gyroscope;
}

void IoT::setGyroscope(int gyroscope) {
	this->gyroscope = gyroscope;
}

int IoT::getOptical() const {
	return Optical;
}

void IoT::setOptical(int optical) {
	Optical = optical;
}

int IoT::getPedometer() const {
	return pedometer;
}

void IoT::setPedometer(int pedometer) {
	this->pedometer = pedometer;
}

int IoT::getTilt() const {
	return Tilt;
}

void IoT::setTilt(int tilt) {
	Tilt = tilt;
}

void IoT::setPulse(int pulse) {
	this->pulse = pulse;
}


IoT::~IoT() {
	// TODO Auto-generated destructor stub
}

