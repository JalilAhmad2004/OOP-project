/*
 * HPAppointmentList.cpp
 *
 *  Created on: May 8, 2023
 *      Author: jalil
 */

#include "HPAppointmentList.h"
#include <cstring>

//Default Constructor
HP_AppointmentList::HP_AppointmentList() {
	// TODO Auto-generated constructor stub

}

//Parameterized Constructor
HP_AppointmentList::HP_AppointmentList(char* Patientname,long long int number,int ID,int Age) {
	strcpy(this->Patientname,Patientname);
	this->number = number;
	this->ID = ID;
	this->Age = Age;
}

//Copy constructor
HP_AppointmentList::HP_AppointmentList(HP_AppointmentList& hpa1) {
	strcpy(this->Patientname,hpa1.Patientname);
	this->number = hpa1.number;
	this->ID = hpa1.ID;
	this->Age = hpa1.Age;
}

//Display Function
void HP_AppointmentList::display()
{
	cout<<"\nID:"<<ID;
	cout<<"\nPatient:";
	for (int i=0; (Patientname[i]!= '\0') ;i++)
		cout<<Patientname[i];
	cout<<"\nNumber:+"<<number;
	cout<<"\nAge:"<<Age<<" years\n";
}

int HP_AppointmentList::getAge() const {
	return Age;
}

void HP_AppointmentList::setAge(int age) {
	Age = age;
}

int HP_AppointmentList::getId() const {
	return ID;
}

void HP_AppointmentList::setId(int id) {
	ID = id;
}

long long int HP_AppointmentList::getNumber() const {
	return number;
}

void HP_AppointmentList::setNumber(long long int number) {
	this->number = number;
}

const char* HP_AppointmentList::getPatientname() const {
	return Patientname;
}

HP_AppointmentList::~HP_AppointmentList() {
	// TODO Auto-generated destructor stub
}

