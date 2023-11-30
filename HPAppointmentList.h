/*
 * HPAppointmentList.h
 *
 *  Created on: May 8, 2023
 *      Author: jalil
 */

#ifndef SRC_HPAPPOINTMENTLIST_H_
#define SRC_HPAPPOINTMENTLIST_H_
#include <iostream>
using namespace std;

class HP_AppointmentList {
private:
	char Patientname[50];
	long long int number;
	int ID;
	int Age;
public:
	HP_AppointmentList();  //Default Constructor
	HP_AppointmentList(char* Patientname,long long int number,int ID,int Age);  //Parameterized Constructor
	HP_AppointmentList(HP_AppointmentList& hpa1);   //Copy Constructor
	void display();   //Function to display

	~HP_AppointmentList();
	int getAge() const;
	void setAge(int age);
	int getId() const;
	void setId(int id);
	long long int getNumber() const;
	void setNumber(long long int number);
	const char* getPatientname() const;
};

#endif /* SRC_HPAPPOINTMENTLIST_H_ */
