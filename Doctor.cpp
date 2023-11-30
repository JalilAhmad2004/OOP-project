/*
 * Doctor.cpp
 *
 *  Created on: May 4, 2023
 *      Author: jalil
 */

#include "Doctor.h"
#include <iostream>
#include <cstring>
using namespace std;

//Default Constructor
Doctor::Doctor() {
	strcpy(this->name,"\0");
	this->number = 0;
	strcpy(this->specialization,"\0");
	strcpy(this->datetime,"\0");
}

//Parameterized Constructor
Doctor::Doctor(char* name,long long int number,char* specialization,char* datetime) {
	strcpy(this->name,name);
	this->number = number;
	strcpy(this->specialization,specialization);
	strcpy(this->datetime,datetime);
}

//Copy constructor
Doctor::Doctor(Doctor& doc) {
	strcpy(this->name,doc.name);
	this->number = doc.number;
	strcpy(this->specialization,doc.specialization);
	strcpy(this->datetime,doc.datetime);
}

const char* Doctor::getDatetime() const {
	return datetime;
}

const char* Doctor::getName() const {
	return name;
}

const char* Doctor::getSpecialization() const {
	return specialization;
}

long long int Doctor::getNumber() const {
	return number;
}

void Doctor::setNumber(long long int number) {
	this->number = number;
}
