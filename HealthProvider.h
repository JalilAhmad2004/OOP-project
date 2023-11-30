/*
 * HealthProvider.h
 *
 *  Created on: May 6, 2023
 *      Author: jalil
 */

#ifndef SRC_HEALTHPROVIDER_H_
#define SRC_HEALTHPROVIDER_H_
#include <iostream>
#include "HPAppointmentList.h"    //Added header file of Appointments
using namespace std;

class HealthProvider {
private:
	char name[100];
	long long int number;
	char specialization[200];
	char datetime[100];
public:
	HealthProvider();   //Default constructor
	HealthProvider(char* name,long long int number,char* specialization,char* datetime);  //Parameterized Constructor
	bool login();   //Login function

	~HealthProvider();
	const char* getName() const;
	const char* getSpecialization() const;
	const char* getDatetime() const;
	long long int getNumber() const;
	void setNumber(long long int number);
};

#endif /* SRC_HEALTHPROVIDER_H_ */
