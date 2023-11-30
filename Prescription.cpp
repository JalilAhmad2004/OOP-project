/*
 * Prescription.cpp
 *
 *  Created on: May 4, 2023
 *      Author: jalil
 */

#include "Prescription.h"
#include <cstring>

//Default Constructor
Prescription::Prescription() {

}

//Parameterized Constructor
Prescription::Prescription(char medicine[50],char dose[500],char Allergy[30]) {
	strcpy(this->medicine,medicine);
	strcpy(this->dose,dose);
	strcpy(this->Allergy,Allergy);
}

//Copy Constructor
Prescription::Prescription(Prescription& pres) {
	strcpy(this->medicine,pres.medicine);
	strcpy(this->dose,pres.dose);
	strcpy(this->Allergy,pres.Allergy);
}

const char* Prescription::getDose() const {
	return dose;
}

const char* Prescription::getMedicine() const {
	return medicine;
}

const char* Prescription::getAllergy() const {
	return Allergy;
}
