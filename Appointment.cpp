/*
 * Appointment.cpp
 *
 *  Created on: May 4, 2023
 *      Author: jalil
 */

#include "Appointment.h"
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

//Default Constructor
Appointment::Appointment() {

}

const Doctor& Appointment::getD1() const {
	return d1;
}

void Appointment::setD1(const Doctor &d1) {
	this->d1 = d1;
}

const Doctor& Appointment::getD2() const {
	return d2;
}

void Appointment::setD2(const Doctor &d2) {
	this->d2 = d2;
}

const Doctor& Appointment::getD3() const {
	return d3;
}

void Appointment::setD3(const Doctor &d3) {
	this->d3 = d3;
}

const Doctor& Appointment::getD4() const {
	return d4;
}

void Appointment::setD4(const Doctor &d4) {
	this->d4 = d4;
}

const Doctor& Appointment::getD5() const {
	return d5;
}

int Appointment::getChoice() const {
	return choice;
}

void Appointment::setChoice(int choice) {
	this->choice = choice;
}

void Appointment::setD5(const Doctor &d5) {
	this->d5 = d5;
}

//Parameterized Constructor
Appointment::Appointment(int choice,Doctor& d1,Doctor& d2,Doctor& d3,Doctor& d4,Doctor& d5) {
	this->choice = choice;
	this->d1 = d1;
	this->d2 = d2;
	this->d3 = d3;
	this->d4 = d4;
	this->d5 = d5;
}

//Display output
void Appointment::show() {
	char doc[100];
	long long int num;
	char spec[100];
	char time[50];

	int check;

	//User will choose one of the given Doctors
	switch(choice)
	{
	case 1:
		strcpy(doc,"\0");
		strcpy(spec,"\0");
		strcpy(doc,d1.getName());
		num = d1.getNumber();
		strcpy(spec,d1.getSpecialization());
		strcpy(time,d1.getDatetime());
		cout<<"\nDoctor 1:";
		cout<<"\nName:";
		for (int i=0; doc[i]!='\0' ;i++)
			cout<<doc[i];
		cout<<"\nNumber:"<<num;
		cout<<"\nSpecialization:";
		for (int i=0; spec[i]!='\0' ;i++)
			cout<<spec[i];
		cout<<"\nFree Slots:";
		for (int i=0; time[i]!='\0' ;i++)
			cout<<time[i];
		cout<<endl;

		cout<<"\n(1/0):";
		cin>>check;
		switch (check)
		{
		case 0:
			break;
		case 1:
			Billing(d1);           //Function foe Billing
			break;
		default:
			cout<<"\nTnvalid Input!\n";
			break;
		}
		break;
	case 2:
		strcpy(doc,"\0");
		strcpy(spec,"\0");
		strcpy(doc,d2.getName());
		num = d2.getNumber();
		strcpy(spec,d2.getSpecialization());
		strcpy(time,d2.getDatetime());
		cout<<"\nDoctor 2:";
		cout<<"\nName:";
		for (int i=0; doc[i]!='\0' ;i++)
			cout<<doc[i];
		cout<<"\nNumber:"<<num;
		cout<<"\nSpecialization:";
		for (int i=0; spec[i]!='\0' ;i++)
			cout<<spec[i];
		cout<<"\nFree Slots:";
		for (int i=0; time[i]!='\0' ;i++)
			cout<<time[i];
		cout<<endl;

		cout<<"\n(1/0):";
		cin>>check;
		switch (check)
		{
		case 0:
			break;
		case 1:
			Billing(d2);           //Function for Billing
			break;
		default:
			cout<<"\nTnvalid Input!\n";
			break;
		}
		break;
	case 3:
		strcpy(doc,"\0");
		strcpy(spec,"\0");
		strcpy(doc,d3.getName());
		num = d3.getNumber();
		strcpy(spec,d3.getSpecialization());
		strcpy(time,d3.getDatetime());
		cout<<"\nDoctor 3:";
		cout<<"\nName:";
		for (int i=0; doc[i]!='\0' ;i++)
			cout<<doc[i];
		cout<<"\nNumber:"<<num;
		cout<<"\nSpecialization:";
		for (int i=0; spec[i]!='\0' ;i++)
			cout<<spec[i];
		cout<<"\nFree Slots:";
		for (int i=0; time[i]!='\0' ;i++)
			cout<<time[i];
		cout<<endl;

		cout<<"\n(1/0):";
		cin>>check;
		switch (check)
		{
		case 0:
			break;
		case 1:
			Billing(d3);      //Function for Billing
			break;
		default:
			cout<<"\nTnvalid Input!\n";
			break;
		}
		break;
	case 4:
		strcpy(doc,"\0");
		strcpy(spec,"\0");
		strcpy(doc,d4.getName());
		num = d4.getNumber();
		strcpy(spec,d4.getSpecialization());
		strcpy(time,d4.getDatetime());
		cout<<"\nDoctor 4:";
		cout<<"\nName:";
		for (int i=0; (doc[i] != '\0') ;i++)
			cout<<doc[i];
		cout<<"\nNumber:"<<num;
		cout<<"\nSpecialization:";
		for (int i=0; (spec[i] != '\0') ;i++)
			cout<<spec[i];
		cout<<"\nFree Slots:";
		for (int i=0;(time[i] != '\0');i++)
			cout<<time[i];
		cout<<endl;

		cout<<"\n(1/0):";
		cin>>check;
		switch (check)
		{
		case 0:
			break;
		case 1:
			Billing(d4);                    //Function for Billing
			break;
		default:
			cout<<"\nTnvalid Input!\n";
			break;
		}
		break;
	case 5:
		strcpy(doc,"\0");
		strcpy(spec,"\0");
		strcpy(doc,d5.getName());
		num = d5.getNumber();
		strcpy(spec,d5.getSpecialization());
		strcpy(time,d5.getDatetime());
		cout<<"\nDoctor 1:";
		cout<<"\nName:";
		for (int i=0; (doc[i] != '\0') ;i++)
			cout<<doc[i];
		cout<<"\nNumber:"<<num;
		cout<<"\nSpecialization:";
		for (int i=0; (spec[i] !='\0') ;i++)
			cout<<spec[i];
		cout<<"\nFree Slots:";
		for (int i=0; (time[i] != '\0') ;i++)
			cout<<time[i];
		cout<<endl;

		cout<<"\n(1/0):";
		cin>>check;
		switch (check)
		{
		case 0:
			break;
		case 1:
			Billing(d5);                //Function for Billing
			break;
		default:
			cout<<"\nTnvalid Input!\n";
			break;
		}
		break;
	default:
		cout<<"\nInvalid input!";
		break;
	}

}

//Copy Constructor
void Billing(Doctor& doc)
{
	int amount = 0;
	cout<<"The fee of Doctor is 1500\n";
	cout<<"\nEnter amount:";
	cin>>amount;

	while (amount < 1500)
	{
		cout<<"\nNot enough amount\nEnter again:";
		cin>>amount;
	}

	cout<<"\nBilling Successful!\n";
}

