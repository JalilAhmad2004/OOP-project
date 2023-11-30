/*
 * EHR.cpp
 *
 *  Created on: May 7, 2023
 *      Author: jalil
 */

#include "EHR.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

//Default Constructor
EHR::EHR() {


}

//Function to store Data in Patient1 file
void EHR::File1() {
	srand(time(0));
	this->ID = 1;
	this->age = 24;
	this->Gender = 'F';
	this->number = 9230446473826;

	strcpy(this->name,"Lisa Patel");
	strcpy(this->Visit1,"1/6/2023");
	strcpy(this->Visit2,"2/4/2023");
	strcpy(this->Visit3,"3/10/2023");

	strcpy(this->Allergies1,"Hypothyroidism");
	strcpy(this->Allergies2,"Flu");
	strcpy(this->Allergies3,"Penicilline");

	strcpy(this->Madicine1,"Levothyroxine 75mcg tablet");
	strcpy(this->Madicine2,"Ibuprofen 400mg tablet");
	strcpy(this->Madicine3,"Omeprazole 20mg capsule");

	strcpy(this->Prescription,"Levothyroxine 75mcg once daily");
	strcpy(this->Prescription2,"Ibuprofen 400mg, 2 tablets every 6 hours as needed for pain and inflammation");
	strcpy(this->Prescription3,"Omeprazole 20mg once daily for acid reflux");

	for (int i=0;i<90;i++)
	{
		this->oxygen[i] = rand() % 100;
		this->BMI[i] = ((rand()%50) + 20);
		this->pulse[i] = ((rand()%80) + 60);
		this->BP[i] = ((rand()%30) + 90);

		this->Acceleration[i] = rand()%2;
		this->Gyroscope[i] = rand()%2;
		this->Pedometer[i] = rand()%2;

		this->Optical[i] = rand()%2;
		this->Tilt[i] = rand()%2;
		this->Force[i] = rand()%2;
	}

}

//Function to store data in Patient2 file
void EHR::File2()  {
	srand(time(0));
	this->ID = 2;
		this->age = 40;
		this->Gender = 'M';
		this->number = 9230446477356;

		strcpy(this->name,"Daniel Rodriguez");
		strcpy(this->Visit1,"2/16/2023");
		strcpy(this->Visit2,"4/14/2023");
		strcpy(this->Visit3,"5/10/2023");

		strcpy(this->Allergies1,"None");
		strcpy(this->Allergies2,"None");
		strcpy(this->Allergies3,"Diabetes");

		strcpy(this->Madicine1,"Metformin 500mg tablet");
		strcpy(this->Madicine2,"Amlodipine 5mg tablet");
		strcpy(this->Madicine3,"Simvastatin 20mg tablet");

		strcpy(this->Prescription,"Metformin 500mg twice daily with meals for diabetes control");
		strcpy(this->Prescription2,"Amlodipine 5mg once daily for blood pressure control");
		strcpy(this->Prescription3,"Simvastatin 20mg once daily for cholesterol control");
		for (int i=0;i<90;i++)
		{
			this->oxygen[i] = rand() % 100;
			this->BMI[i] = ((rand()%50) + 20);
			this->pulse[i] = ((rand()%80) + 60);
			this->BP[i] = ((rand()%30) + 90);

			this->Acceleration[i] = rand()%2;
			this->Gyroscope[i] = rand()%2;
			this->Pedometer[i] = rand()%2;

			this->Optical[i] = rand()%2;
			this->Tilt[i] = rand()%2;
			this->Force[i] = rand()%2;
		}
}

//Function to store data in Patient3 file
void EHR::File3() {
	srand(time(0));
	this->ID = 3;
			this->age = 37;
			this->Gender = 'F';
			this->number = 92308456473826;

			strcpy(this->name,"Maria Hernandez");
			strcpy(this->Visit1,"2/22/2023");
			strcpy(this->Visit2,"4/25/2023");
			strcpy(this->Visit3,"5/20/2023");

			strcpy(this->Allergies1,"shellfish");
			strcpy(this->Allergies2,"Sinusitis");
			strcpy(this->Allergies3,"None");

			strcpy(this->Madicine1,"Amoxicillin 875mg tablet");
			strcpy(this->Madicine2,"Amlodipine 5mg tablet");
			strcpy(this->Madicine3,"Simvastatin 20mg tablet");

			strcpy(this->Prescription,"Amoxicillin 875mg twice daily for 10 days");
			strcpy(this->Prescription2,"Amlodipine 5mg once daily for blood pressure control");
			strcpy(this->Prescription3,"Simvastatin 20mg once daily for cholesterol control");
			for (int i=0;i<90;i++)
				{
					this->oxygen[i] = rand() % 100;
					this->BMI[i] = ((rand()%50) + 20);
					this->pulse[i] = ((rand()%80) + 60);
					this->BP[i] = ((rand()%30) + 90);

					this->Acceleration[i] = rand()%2;
					this->Gyroscope[i] = rand()%2;
					this->Pedometer[i] = rand()%2;

					this->Optical[i] = rand()%2;
					this->Tilt[i] = rand()%2;
					this->Force[i] = rand()%2;
				}
}

//Function to store data in Patient4 file
void EHR::File4() {
	srand(time(0));
	this->ID = 4;
	this->age = 42;
	this->Gender = 'M';
	this->number = 92308473633826;

	strcpy(this->name,"James Johnson");
	strcpy(this->Visit1,"2/22/2023");
	strcpy(this->Visit2,"4/25/2023");
	strcpy(this->Visit3,"5/20/2023");

	strcpy(this->Allergies1,"shellfish");
	strcpy(this->Allergies2,"Sinusitis");
	strcpy(this->Allergies3,"None");

	strcpy(this->Madicine1,"Amlodipine 5mg");
	strcpy(this->Madicine2,"Amlodipine 5mg tablet");
	strcpy(this->Madicine3,"Ciprofloxacin 500mg");

	strcpy(this->Prescription,"Amlodipine 5mg: Take 1 tablet once daily in the morning for hypertension, 90 days.");
	strcpy(this->Prescription2,"Amlodipine 5mg once daily for blood pressure control");
	strcpy(this->Prescription3,"Ciprofloxacin 500mg: Take 1 tablet twice daily for 7 days for urinary tract infection.");
	for (int i=0;i<90;i++)
		{
			this->oxygen[i] = rand() % 100;
			this->BMI[i] = ((rand()%50) + 20);
			this->pulse[i] = ((rand()%80) + 60);
			this->BP[i] = ((rand()%30) + 90);

			this->Acceleration[i] = rand()%2;
			this->Gyroscope[i] = rand()%2;
			this->Pedometer[i] = rand()%2;

			this->Optical[i] = rand()%2;
			this->Tilt[i] = rand()%2;
			this->Force[i] = rand()%2;
		}
}

//Function to store data in Patient5 file
void EHR::File5() {
	srand(time(0));
	this->ID = 5;
		this->age = 26;
		this->Gender = 'M';
		this->number = 92308473633826;

		strcpy(this->name,"Karen Wilson");
		strcpy(this->Visit1,"2/22/2023");
		strcpy(this->Visit2,"4/25/2023");
		strcpy(this->Visit3,"5/20/2023");

		strcpy(this->Allergies1,"shellfish");
		strcpy(this->Allergies2,"Sinusitis");
		strcpy(this->Allergies3,"None");

		strcpy(this->Madicine1,"Clindamycin 300mg");
		strcpy(this->Madicine2,"Amlodipine 5mg tablet");
		strcpy(this->Madicine3,"Hydrochlorothiazide 25mg");

		strcpy(this->Prescription,"Clindamycin 300mg: Take 1 capsule every 6 hours for 10 days for bacterial infection.");
		strcpy(this->Prescription2,"Amlodipine 5mg once daily for blood pressure control");
		strcpy(this->Prescription3,"Hydrochlorothiazide 25mg: Take 1 tablet once daily for hypertension, 90 days.");
		for (int i=0;i<90;i++)
			{
				this->oxygen[i] = rand() % 100;
				this->BMI[i] = ((rand()%50) + 20);
				this->pulse[i] = ((rand()%80) + 60);
				this->BP[i] = ((rand()%30) + 90);

				this->Acceleration[i] = rand()%2;
				this->Gyroscope[i] = rand()%2;
				this->Pedometer[i] = rand()%2;

				this->Optical[i] = rand()%2;
				this->Tilt[i] = rand()%2;
				this->Force[i] = rand()%2;
			}
}

//Function to store data in Patient6 file
void EHR::File6() {
	srand(time(0));
	this->ID = 6;
	this->age = 36;
	this->Gender = 'M';
	this->number = 92308476353826;

	strcpy(this->name,"Ahmed Khan");
	strcpy(this->Visit1,"2/22/2023");
	strcpy(this->Visit2,"4/25/2023");
	strcpy(this->Visit3,"5/20/2023");

	strcpy(this->Allergies1,"shellfish");
	strcpy(this->Allergies2,"Sinusitis");
	strcpy(this->Allergies3,"None");

	strcpy(this->Madicine1,"Amoxicillin 875mg tablet");
	strcpy(this->Madicine2,"Gabapentin 300mg");
	strcpy(this->Madicine3,"Escitalopram 10mg");

	strcpy(this->Prescription,"Amoxicillin 875mg twice daily for 10 days");
	strcpy(this->Prescription2,"Gabapentin 300mg: Take 1 capsule three times daily for nerve pain, 90 days.");
	strcpy(this->Prescription3,"Escitalopram 10mg: Take 1 tablet once daily for depression and anxiety, 90 days");
	for (int i=0;i<90;i++)
		{
			this->oxygen[i] = rand() % 100;
			this->BMI[i] = ((rand()%50) + 20);
			this->pulse[i] = ((rand()%80) + 60);
			this->BP[i] = ((rand()%30) + 90);

			this->Acceleration[i] = rand()%2;
			this->Gyroscope[i] = rand()%2;
			this->Pedometer[i] = rand()%2;

			this->Optical[i] = rand()%2;
			this->Tilt[i] = rand()%2;
			this->Force[i] = rand()%2;
		}
}

//Function to store data in Patient7 file
void EHR::File7() {
	srand(time(0));
	this->ID = 7;
	this->age = 56;
	this->Gender = 'F';
	this->number = 92318273633826;

	strcpy(this->name,"Jennifer Lee");
	strcpy(this->Visit1,"2/22/2023");
	strcpy(this->Visit2,"4/25/2023");
	strcpy(this->Visit3,"5/20/2023");

	strcpy(this->Allergies1,"shellfish");
	strcpy(this->Allergies2,"Sinusitis");
	strcpy(this->Allergies3,"None");

	strcpy(this->Madicine1,"Amoxicillin 875mg tablet");
	strcpy(this->Madicine2,"Amlodipine 5mg tablet");
	strcpy(this->Madicine3,"Simvastatin 20mg tablet");

	strcpy(this->Prescription,"Amoxicillin 875mg twice daily for 10 days");
	strcpy(this->Prescription2,"Amlodipine 5mg once daily for blood pressure control");
	strcpy(this->Prescription3,"Simvastatin 20mg once daily for cholesterol control");
	for (int i=0;i<90;i++)
		{
			this->oxygen[i] = rand() % 100;
			this->BMI[i] = ((rand()%50) + 20);
			this->pulse[i] = ((rand()%80) + 60);
			this->BP[i] = ((rand()%30) + 90);

			this->Acceleration[i] = rand()%2;
			this->Gyroscope[i] = rand()%2;
			this->Pedometer[i] = rand()%2;

			this->Optical[i] = rand()%2;
			this->Tilt[i] = rand()%2;
			this->Force[i] = rand()%2;
		}
}

//Function to store data in Patient8 file
void EHR::File8() {
	srand(time(0));
	this->ID = 8;
	this->age = 24;
	this->Gender = 'M';
	this->number = 92318987633826;

	strcpy(this->name,"Robert Green");
	strcpy(this->Visit1,"2/22/2023");
	strcpy(this->Visit2,"4/25/2023");
	strcpy(this->Visit3,"5/20/2023");

	strcpy(this->Allergies1,"shellfish");
	strcpy(this->Allergies2,"Sinusitis");
	strcpy(this->Allergies3,"None");

	strcpy(this->Madicine1,"Amoxicillin 875mg tablet");
	strcpy(this->Madicine2,"Amlodipine 5mg tablet");
	strcpy(this->Madicine3,"Simvastatin 20mg tablet");

	strcpy(this->Prescription,"Amoxicillin 875mg twice daily for 10 days");
	strcpy(this->Prescription2,"Amlodipine 5mg once daily for blood pressure control");
	strcpy(this->Prescription3,"Simvastatin 20mg once daily for cholesterol control");
	for (int i=0;i<90;i++)
		{
			this->oxygen[i] = rand() % 100;
			this->BMI[i] = ((rand()%50) + 20);
			this->pulse[i] = ((rand()%80) + 60);
			this->BP[i] = ((rand()%30) + 90);

			this->Acceleration[i] = rand()%2;
			this->Gyroscope[i] = rand()%2;
			this->Pedometer[i] = rand()%2;

			this->Optical[i] = rand()%2;
			this->Tilt[i] = rand()%2;
			this->Force[i] = rand()%2;
		}
}

//Function to store data in Patient9 file
void EHR::File9() {
	srand(time(0));
	this->ID = 9;
	this->age = 26;
	this->Gender = 'F';
	this->number = 92318987746826;

	strcpy(this->name,"Laura Davis");
	strcpy(this->Visit1,"2/22/2023");
	strcpy(this->Visit2,"4/25/2023");
	strcpy(this->Visit3,"5/20/2023");

	strcpy(this->Allergies1,"shellfish");
	strcpy(this->Allergies2,"Sinusitis");
	strcpy(this->Allergies3,"None");

	strcpy(this->Madicine1,"Amoxicillin 875mg tablet");
	strcpy(this->Madicine2,"Amlodipine 5mg tablet");
	strcpy(this->Madicine3,"Simvastatin 20mg tablet");

	strcpy(this->Prescription,"Amoxicillin 875mg twice daily for 10 days");
	strcpy(this->Prescription2,"Amlodipine 5mg once daily for blood pressure control");
	strcpy(this->Prescription3,"Simvastatin 20mg once daily for cholesterol control");
	for (int i=0;i<90;i++)
		{
			this->oxygen[i] = rand() % 100;
			this->BMI[i] = ((rand()%50) + 20);
			this->pulse[i] = ((rand()%80) + 60);
			this->BP[i] = ((rand()%30) + 90);

			this->Acceleration[i] = rand()%2;
			this->Gyroscope[i] = rand()%2;
			this->Pedometer[i] = rand()%2;

			this->Optical[i] = rand()%2;
			this->Tilt[i] = rand()%2;
			this->Force[i] = rand()%2;
		}
}

//Function to store data in Patient10 file
void EHR::File10() {
	srand(time(0));
	this->ID = 10;
	this->age = 49;
	this->Gender = 'M';
	this->number = 92318987746534;

	strcpy(this->name,"Tom Williams");
	strcpy(this->Visit1,"2/22/2023");
	strcpy(this->Visit2,"4/25/2023");
	strcpy(this->Visit3,"5/20/2023");

	strcpy(this->Allergies1,"shellfish");
	strcpy(this->Allergies2,"Sinusitis");
	strcpy(this->Allergies3,"None");

	strcpy(this->Madicine1,"Amoxicillin 875mg tablet");
	strcpy(this->Madicine2,"Amlodipine 5mg tablet");
	strcpy(this->Madicine3,"Simvastatin 20mg tablet");

	strcpy(this->Prescription,"Amoxicillin 875mg twice daily for 10 days");
	strcpy(this->Prescription2,"Amlodipine 5mg once daily for blood pressure control");
	strcpy(this->Prescription3,"Simvastatin 20mg once daily for cholesterol control");
	for (int i=0;i<90;i++)
		{
			this->oxygen[i] = rand() % 100;
			this->BMI[i] = ((rand()%50) + 20);
			this->pulse[i] = ((rand()%80) + 60);
			this->BP[i] = ((rand()%30) + 90);

			this->Acceleration[i] = rand()%2;
			this->Gyroscope[i] = rand()%2;
			this->Pedometer[i] = rand()%2;

			this->Optical[i] = rand()%2;
			this->Tilt[i] = rand()%2;
			this->Force[i] = rand()%2;
		}
}

//Display function
void EHR::display() {
	cout<<"\n----------------------Patient Info--------------------------\n";

		cout<<"\nPatient ID:"<<ID<<endl;

		cout<<"Name:";
		for (int i=0; (name[i] !='\0');i++)
			cout<<name[i];
		cout<<endl;

		cout<<"Number:"<<number<<endl;
		cout<<"Age:"<<age<<" years"<<endl;

		cout<<"\n-----------------------Allergies-------------------------\n";

		cout<<"Allergies1:";
		for (int i=0; (Allergies1[i] !='\0');i++)
			cout<<Allergies1[i];
		cout<<endl;
		cout<<"Allergies2:";
		for (int i=0; (Allergies2[i] !='\0');i++)
			cout<<Allergies2[i];
		cout<<endl;
		cout<<"Allergies3:";
		for (int i=0; (Allergies3[i] !='\0');i++)
			cout<<Allergies3[i];
		cout<<endl;

		cout<<"\n-----------------------Visits-------------------------\n";

		cout<<"Visit1:";
		for (int i=0; (Visit1[i] !='\0');i++)
			cout<<Visit1[i];
		cout<<endl;

		cout<<"Visit2:";
		for (int i=0; (Visit2[i] !='\0');i++)
			cout<<Visit2[i];
		cout<<endl;
		cout<<"Visit3:";
		for (int i=0; (Visit3[i] !='\0');i++)
			cout<<Visit3[i];
		cout<<endl;

		cout<<"\n-----------------------Medicines-------------------------\n";

		cout<<"Medicine 1:";
		for (int i=0; (Madicine1[i] !='\0');i++)
			cout<<Madicine1[i];
		cout<<endl;
		cout<<"Medicine 2:";
		for (int i=0; (Madicine2[i] !='\0');i++)
			cout<<Madicine2[i];
		cout<<endl;
		cout<<"Medicine 3:";
		for (int i=0; (Madicine3[i] !='\0');i++)
			cout<<Madicine3[i];
		cout<<endl;

		cout<<"\n-----------------------Prescriptions-------------------------\n";

		cout<<"Prescription 1:";
		for (int i=0; (Prescription[i] !='\0');i++)
			cout<<Prescription[i];
		cout<<endl;
		cout<<"Prescription 2:";
		for (int i=0; (Prescription2[i] !='\0');i++)
			cout<<Prescription2[i];
		cout<<endl;
		cout<<"Prescription 3:";
		for (int i=0; (Prescription3[i] !='\0');i++)
			cout<<Prescription3[i];
		cout<<endl;

		cout<<"\n-----------------------Vital sensors-------------------------\n";

		for(int i=0;i<90;i++)
		{
			cout<<oxygen[i]<<"     "<<BMI[i]<<"     "<<pulse[i]<<"     "<<BP[i];
			cout<<endl;
		}

		cout<<"\n-----------------------General Movement sensors-------------------------\n";

		for (int i=0;i<90;i++)
		{
			cout<<Acceleration[i]<<"     "<<Gyroscope[i]<<"     "<<Pedometer[i];
			cout<<endl;
		}

		cout<<"\n-----------------------Specific Movement sensors-------------------------\n";

		for (int i=0;i<90;i++)
		{
			cout<<Optical[i]<<"     "<<Tilt[i]<<"     "<<Force[i];
			cout<<endl;
		}
}

int EHR::getAge() const {
	return age;
}

void EHR::setAge(int age) {
	this->age = age;
}

const char* EHR::getAllergies1() const {
	return Allergies1;
}

const char* EHR::getAllergies2() const {
	return Allergies2;
}

const char* EHR::getAllergies3() const {
	return Allergies3;
}

char EHR::getGender() const {
	return Gender;
}

void EHR::setGender(char gender) {
	Gender = gender;
}

int EHR::getId() const {
	return ID;
}

void EHR::setId(int id) {
	ID = id;
}

const char* EHR::getMadicine1() const {
	return Madicine1;
}

const char* EHR::getMadicine2() const {
	return Madicine2;
}

const char* EHR::getMadicine3() const {
	return Madicine3;
}

const char* EHR::getName() const {
	return name;
}

long long int EHR::getNumber() const {
	return number;
}

void EHR::setNumber(long long int number) {
	this->number = number;
}

const char* EHR::getPrescription() const {
	return Prescription;
}

const char* EHR::getPrescription2() const {
	return Prescription2;
}

const char* EHR::getPrescription3() const {
	return Prescription3;
}

const char* EHR::getVisit1() const {
	return Visit1;
}

const char* EHR::getVisit2() const {
	return Visit2;
}

const int* EHR::getAcceleration() const {
	return Acceleration;
}

const int* EHR::getBmi() const {
	return BMI;
}

const int* EHR::getBp() const {
	return BP;
}

const int* EHR::getForce() const {
	return Force;
}

const int* EHR::getGyroscope() const {
	return Gyroscope;
}

const int* EHR::getOptical() const {
	return Optical;
}

const int* EHR::getOxygen() const {
	return oxygen;
}

const int* EHR::getPedometer() const {
	return Pedometer;
}

const int* EHR::getPulse() const {
	return pulse;
}

const int* EHR::getTilt() const {
	return Tilt;
}

const char* EHR::getVisit3() const {
	return Visit3;
}

EHR::~EHR() {
	// TODO Auto-generated destructor stub
}

