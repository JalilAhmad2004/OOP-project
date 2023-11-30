/*
 * Doctor.h
 *
 *  Created on: May 4, 2023
 *      Author: jalil
 */

#ifndef SRC_DOCTOR_H_
#define SRC_DOCTOR_H_
#include <iostream>
#include <cstring>
using namespace std;

class Doctor {
private:
	char name[100];
	long long int number;
	char specialization[200];
	char datetime[100];
public:
	Doctor();     //Default Constructor
	Doctor(char* name,long long int number,char* specialization,char* datetime);   //Parameterized Constructor
	Doctor(Doctor& doc);      //Copy Constructor

	const char* getDatetime() const;
	const char* getName() const;
	const char* getSpecialization() const;
	long long int getNumber() const;
	void setNumber(long long int number);
};

#endif /* SRC_DOCTOR_H_ */
