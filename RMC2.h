/*
 * RMC2.h
 *
 *  Created on: May 6, 2023
 *      Author: jalil
 */

#ifndef SRC_RMC2_H_
#define SRC_RMC2_H_
#include "PatientApp.h"             //Adding Header file of PatientApp
#include "EHR.h"                    //Adding Header file of Electronic Health Record
#include "HealthProvider.h"         //Adding Header file of Health Provider
#include "Cloud.h"                  //Adding Header file of Cloud
#include <iostream>
using namespace std;

class RMC2 {
public:
	RMC2();                //Default Constructor

	//<-----------------------Functions to read Files from EHR------------------------------->//
	void EHRfunc1();
	void EHRfunc2();
	void EHRfunc3();
	void EHRfunc4();
	void EHRfunc5();
	void EHRfunc6();
	void EHRfunc7();
	void EHRfunc8();
	void EHRfunc9();
	void EHRfunc10();

	void Healthprovider(int choice);   //Health Provider function
	void Patients(int choice);         //Patient Function

	string key = "le_bhikari_le";      //Key to access Patient file

	~RMC2();
};

#endif /* SRC_RMC2_H_ */
