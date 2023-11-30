/*
 * HealthProvider.cpp
 *
 *  Created on: May 6, 2023
 *      Author: jalil
 */

#include "HealthProvider.h"
#include <cstring>

//Default Constructor
HealthProvider::HealthProvider() {
	// TODO Auto-generated constructor stub

}

//Parameterized Constructor
HealthProvider::HealthProvider(char* name,long long int number,char* specialization,char* datetime) {
	strcpy(this->name,name);
	this->number = number;
	strcpy(this->specialization,specialization);
	strcpy(this->datetime,datetime);
}

//Function to login the App
bool HealthProvider::login() {
	bool check = false;
	char Username[100];
	int password;

	cout<<"\n------------Welcome to Health Provider Portal-----------\n";
	cin.ignore();
	cout<<"Username:";
	cin.getline(Username,100,'\n');
	cout<<"Password:";
	cin>>password;

	switch(password)
	{
	case 2000:
		check = true;
		break;
	case 2001:
		check = true;
		break;
	case 2002:
		check = true;
		break;
	case 2003:
		check = true;
		break;
	case 2004:
		check = true;
		break;
	case 2005:
		check = true;
		break;
	default:
		check = false;
		break;
	}

	return check;
}

const char* HealthProvider::getName() const {
	return name;
}

const char* HealthProvider::getDatetime() const {
	return datetime;
}

long long int HealthProvider::getNumber() const {
	return number;
}

void HealthProvider::setNumber(long long int number) {
	this->number = number;
}

const char* HealthProvider::getSpecialization() const {
	return specialization;
}

HealthProvider::~HealthProvider() {
	// TODO Auto-generated destructor stub
}

