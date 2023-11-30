/*
 * PatientApp.cpp
 *
 *  Created on: May 3, 2023
 *      Author: jalil
 */

#include "PatientApp.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

//Default Constructor
Patient::Patient() {
	this->ID = 0;
	this->number = 0;
	this->age = 0;
}

//Parameterized Constructor
Patient::Patient(int ID,char name[50],long long int number,int age) {
	this->ID = ID;
	strcpy(this->name,name);
	this->number = number;
	this->age = age;
}

//Copy Constructors
Patient::Patient(Patient& p) {
	this->ID = p.ID;
	strcpy(this->name,p.name);
	this->number = p.number;
	this->age = p.age;
}

//Function to Add Appointment
void Patient::addAppointment() {
	int choice;
	/*char do1[100];
	long long int num1;
	char spec1[100];
	char time1[50];

	char do2[100];
	long long int num2;
	char spec2[100];
	char time2[20];

	char do3[100];
	long long int num3;
	char spec3[100];
	char time3[20];

	char do4[100];
	long long int num4;
	char spec4[100];
	char time4[20];

	char do5[100];
	long long int num5;
	char spec5[100];
	char time5[20];

	static int flag = 1;

	strcpy(do1,"Dr. John Smith");
	num1 = 9231736482635;
	strcpy(spec1,"Cardiology");
	strcpy(time1,"1am-12pm");

	strcpy(do2,"Dr. Sarah Lee");
	num2 = 9231736482645;
	strcpy(spec2,"Pediatrics");
	strcpy(time2,"1pm-4pm");

	strcpy(do3,"Dr. Michael Chen");
	num3 = 9231736488573;
	strcpy(spec3,"Dermatology");
	strcpy(time3,"7am-2pm");

	strcpy(do4,"Dr. Emily Davis");
	num4 = 9231736488859;
	strcpy(spec4,"Obstetrics and Gynecology");
	strcpy(time4,"12pm-9pm");

	strcpy(do5,"Dr. David Kim");
	num5 = 9231736474534;
	strcpy(spec5,"Neurologyy");
	strcpy(time5,"2pm-5pm");

		(do5,num5,spec5,time5)
		(do4,num4,spec4,time4)
		(do3,num3,spec3,time3)
		(do2,num2,spec2,time2)
		(do1,num1,spec1,time1)
	}*/

	//Objects of Doctors to read and Write Data from file
	Doctor doc1;
	Doctor doc2;
	Doctor doc3;
	Doctor doc4;
	Doctor doc5;

	/*ofstream outfile("Doctors.DAT", ios::binary);
	if(outfile)
	{
		outfile.write((char*)&doc1, sizeof(doc1));
		outfile.write((char*)&doc2, sizeof(doc2));
		outfile.write((char*)&doc3, sizeof(doc3));
		outfile.write((char*)&doc4, sizeof(doc4));
		outfile.write((char*)&doc5, sizeof(doc5));
	}

	outfile.close();*/

	//Reading Data from Doctors file
	ifstream infile("Doctors.DAT", ios::binary | ios::in);
	if(infile)
	{
		infile.read((char*)&doc1, sizeof(doc1));
		infile.read((char*)&doc2, sizeof(doc2));
		infile.read((char*)&doc3, sizeof(doc3));
		infile.read((char*)&doc4, sizeof(doc4));
		infile.read((char*)&doc5, sizeof(doc5));
	}

	int check = 1;

	while (check)
	{
		//Here Patient can Book Appointment with any of the given Doctor
		cout<<"\n--------------------Welcome to Appointment Panel-------------\n";

		char doc[100];
		char spec[100];

		//Using string function to copy data in char array
		strcpy(doc,doc1.getName());
		strcpy(spec,doc1.getSpecialization());

		cout<<"\nDoctor 1";
		cout<<"\nName:";
		for (int i=0; (doc[i] !='\0') ;i++)
			cout<<doc[i];
		cout<<"\nSpecialization:";
		for (int i=0; (spec[i] != '\0') ;i++)
			cout<<spec[i];
		cout<<endl;

		strcpy(doc,"\0");
		strcpy(spec,"\0");
		strcpy(doc,doc2.getName());
		strcpy(spec,doc2.getSpecialization());
		cout<<"\nDoctor 2:";
		cout<<"\nName:";
		for (int i=0; (doc[i] !='\0') ;i++)
			cout<<doc[i];
		cout<<"\nSpecialization:";
		for (int i=0; (spec[i] != '\0') ;i++)
			cout<<spec[i];
		cout<<endl;

		strcpy(doc,"\0");
		strcpy(spec,"\0");
		strcpy(doc,doc3.getName());
		strcpy(spec,doc3.getSpecialization());

		cout<<"\nDoctor 3:";
		cout<<"\nName:";
		for (int i=0; (doc[i] !='\0') ;i++)
			cout<<doc[i];
		cout<<"\nSpecialization:";
		for (int i=0; (spec[i] != '\0') ;i++)
			cout<<spec[i];
		cout<<endl;

		strcpy(doc,"\0");
		strcpy(spec,"\0");
		strcpy(doc,doc4.getName());
		strcpy(spec,doc4.getSpecialization());
		cout<<"\nDoctor 4:";
		cout<<"\nName:";
		for (int i=0; (doc[i] !='\0') ;i++)
			cout<<doc[i];
		cout<<"\nSpecialization:";
		for (int i=0; (spec[i] != '\0') ;i++)
			cout<<spec[i];
		cout<<endl;

		strcpy(doc,"\0");
		strcpy(spec,"\0");
		strcpy(doc,doc5.getName());
		strcpy(spec,doc5.getSpecialization());

		cout<<"\nDoctor 5:";
		cout<<"\nName:";
		for (int i=0; (doc[i] !='\0') ;i++)
			cout<<doc[i];
		cout<<"\nSpecialization:";
		for (int i=0; (spec[i] != '\0') ;i++)
			cout<<spec[i];
		cout<<endl;

		cout<<"\nEnter your choice:";
		cin>>choice;

		//Object of Appointment class
		Appointment ap1(choice,doc1,doc2,doc3,doc4,doc5);
		ap1.show();
		cout<<endl;

		cout<<"\nEnter 1 to continue Appointment Pennal.";
		cout<<"\nEnter 0 to Exit.";
		cin>>check;
	}
}

//Function to get readings of sensors
void Patient::sensors(int choice) {
	int oxygen = 0 ,BMI = 0 ,pulse = 0 ,BP = 0;
	int acc = 0 ,gyro = 0 ,pedo = 0 ;
	int Opt = 0 ,tilt = 0 ,force = 0;

	//Creating Objects of Vital, General and Specific sensors class
	Vital v1(oxygen,BMI,pulse,BP);
	GeneralMov g1(acc,gyro,pedo);
	SpecificMov s1(Opt,tilt,force);

	//Writing Data in new Patient file
	ofstream newoutfile("NewPatient", ios::binary | ios::app);
	if(newoutfile)
	{
		newoutfile.write((char*)&v1, sizeof(v1));
		newoutfile.write((char*)&g1, sizeof(g1));
		newoutfile.write((char*)&s1, sizeof(s1));
	}
}

//Function to Call the Doctors
void Patient::addCall() {
	Call cc1;      //Object of Call class

	int check;
	bool choice = false;

	cc1.startcalls();     //Function to get the time when call starts

	while(!choice)
	{
		//Taking user's choice, whether to end the call or take notes
		cout<<"\nPress 1 to END the call and 2 to take notes\n";
		cin>>check;
		if(check == 1)
		{
			cc1.endcalls();     //Function to get the time when call ends
			choice = true;
		}
		else if(check == 2)
			cc1.takenotes();    //Function to take notes
		else
			cout<<"\nInvalid Input!\n";
	}

	cc1.print();

	//Writing all Data in New Patient file
	ofstream newoutfile("NewPatient", ios::binary | ios::app);
	if(newoutfile)
		newoutfile.write((char*)&cc1, sizeof(cc1));
}

void Patient::addPrescription() {
	char Allergy[30];
	char tablet[50];
	char inst[500];

	strcpy(tablet,"Panadol");
	strcpy(inst,"Take tablet 3 times a day.");
	strcpy(Allergy,"Cancer");

	//Creating an Object of Prescription
	Prescription pr1(tablet,inst,Allergy);

	//Writing Data in New file of Patient
	ofstream newoutfile("NewPatient", ios::binary | ios::app);
	if(newoutfile)
		newoutfile.write((char*)&pr1, sizeof(pr1));
}

//Function to encrypt the file
void Patient::encryption(string filename) {
	 /*ifstream infile(file, ios::binary | ios::in);
	if(infile)
	{
		ofstream outfile(file, ios::binary | ios::out);
		if(outfile)
		{

		}
	}
	for (int i=0;name[i]!='\0';i++)
		name[i]-= 32;

	ID -= 32;
	age -= 32;
	number -= 32;*/
	char key ='X';                   //key to encrypt Data
	char ch;
	ifstream infile;

	infile.open(filename, ios::binary);  //Reading Patient file
	if(infile)
	{
		ofstream outfile;

		outfile.open("encrypt.DAT", ios::binary);      //Writing in Patient file
		if(outfile)
		{
			while(infile.get(ch))
			{
				ch ^= key;                  //Using XOR operator to encrypt data
				outfile.put(ch);
			}
		}
		outfile.close();
	}
	infile.close();
}

//Function to decrypt the file
void Patient::decryption(string filename) {
	/*for (int i=0;name[i]!='\0';i++)
			name[i]+= 32;

	ID += 32;
	age += 32;
	number += 32;*/
	char key ='X';                          //key used to decrypt data //key of encryption file
	char ch;

	ifstream infile(filename, ios::binary);      //Reading data from encrypted file
	if(infile)
	{
		ofstream outfile("decrypt.DAT", ios::binary);   //Writing data in file
		if(outfile)
		{
			while(infile.get(ch))
			{
				ch ^= key;                          //Using XOR operator to decrypt data
				outfile.put(ch);
			}
		}
		outfile.close();
	}
	infile.close();
}

//Function to access the doctor to check the history
int Patient::accessrequest() {
	srand(time(0));
	int access = rand() % 2;     //if 0(Doctor can't check history) and if 1(Doctor can check history)

	return access;
}

const char* Patient::getName() const {
	return name;
}

long long int Patient::getNumber() const {
	return number;
}

void Patient::setNumber(long long int number) {
	this->number = number;
}

int Patient::getId() const {
	return ID;
}

void Patient::setId(int id) {
	ID = id;
}

int Patient::getAge() const {
	return age;
}

void Patient::setAge(int age) {
	this->age = age;
}
