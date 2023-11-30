/*
 * Appointment.h
 *
 *  Created on: May 4, 2023
 *      Author: jalil
 */

#ifndef SRC_APPOINTMENT_H_
#define SRC_APPOINTMENT_H_
#include"Doctor.h"          //Added Header File of Doctor
#include <iostream>
#include <cstring>
using namespace std;

class Appointment {
private:
	Doctor d1;
	Doctor d2;
	Doctor d3;
	Doctor d4;
	Doctor d5;

	int choice;
public:
	Appointment();  //Default Constructor
	Appointment(int choice,Doctor& d1,Doctor& d2,Doctor& d3,Doctor& d4,Doctor& d5);  //Parameterized Constructor
	void show();  //Show Function

	const Doctor& getD1() const;
	void setD1(const Doctor &d1);
	const Doctor& getD2() const;
	void setD2(const Doctor &d2);
	const Doctor& getD3() const;
	void setD3(const Doctor &d3);
	const Doctor& getD4() const;
	void setD4(const Doctor &d4);
	const Doctor& getD5() const;
	void setD5(const Doctor &d5);
	int getChoice() const;
	void setChoice(int choice);
};

void Billing (Doctor& doc);   //Function used for Billing

#endif /* SRC_APPOINTMENT_H_ */
