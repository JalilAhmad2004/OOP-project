/*
 * Prescription.h
 *
 *  Created on: May 4, 2023
 *      Author: jalil
 */

#ifndef SRC_PRESCRIPTION_H_
#define SRC_PRESCRIPTION_H_
#include <iostream>
#include <cstring>
using namespace std;

class Prescription {
private:
	char medicine[50];
	char dose[500];
	char Allergy[30];
public:
	Prescription();  //Default Constructor
	Prescription(char medicine[50],char dose[500],char Allergy[30]);  //Parameterized Constructor
	Prescription(Prescription& pres);    //Copy Constructor

	const char* getDose() const;
	const char* getMedicine() const;
	const char* getAllergy() const;
};

#endif /* SRC_PRESCRIPTION_H_ */
