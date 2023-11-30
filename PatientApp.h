/*
 * PatientApp.h
 *
 *  Created on: May 3, 2023
 *      Author: jalil
 */

#ifndef SRC_PATIENTAPP_H_
#define SRC_PATIENTAPP_H_
#include"IoT.h"                      //Added Header of IOT Sensors
#include "Appointment.h"             //Added Header of Appointment
#include "Call.h"                    //Added Header of Calls
#include "Prescription.h"            //Added Header of Prescription
#include <iostream>
#include <cstring>
using namespace std;

class Patient {
public:
	Patient();    //Default Constructor
	Patient(int ID,char name[50],long long int number,int age);     //Parameterized Constructor
	Patient (Patient& p);             //Copy constructor
	void addAppointment();            //Function to Book Appointments
	void addCall();                   //Function to Call the Doctor
	void addPrescription();           //Function to Read Prescription of Doctor
	void sensors(int choice);         //Function to get readings of Sensors
	void encryption(string filename);                //Function to encrypt file
	void decryption(string filename);                //Function to decrypt file
	int accessrequest();              //Function to give access to Doctors requests

	const char* getName() const;
	long long int getNumber() const;
	void setNumber(long long int number);
	int getId() const;
	void setId(int id);
	int getAge() const;
	void setAge(int age);

private:
	char name[100];
	long long	int number;
	int age;
	int ID;

	string key = "le_bhikari_le";        //Password to access the request
};

#endif /* SRC_PATIENTAPP_H_ */
