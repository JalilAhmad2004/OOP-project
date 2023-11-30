/*
 * EHR.h
 *
 *  Created on: May 7, 2023
 *      Author: jalil
 */

#ifndef SRC_EHR_H_
#define SRC_EHR_H_

class EHR {
private:
	int ID;
	char name[100];
	long long int number;
	char Gender;
	int age;

	char Visit1[50];
	char Visit2[50];
	char Visit3[50];

	char Allergies1[200];
	char Allergies2[200];
	char Allergies3[200];

	char Prescription[500];
	char Prescription2[500];
	char Prescription3[500];

	char Madicine1[200];
	char Madicine2[200];
	char Madicine3[200];

	int oxygen[90];
	int BMI[90];
	int pulse[90];
	int BP[90];

	int Acceleration[90];
	int Gyroscope[90];
	int Pedometer[90];

	int Optical[90];
	int Tilt[90];
	int Force[90];

public:
	EHR();                //Default constructor

	void File1();         //Function to store data in Patient1 file
	void File2();         //Function to store data in Patient2 file
	void File3();         //Function to store data in Patient3 file
	void File4();         //Function to store data in Patient4 file
	void File5();         //Function to store data in Patient5 file
	void File6();         //Function to store data in Patient6 file
	void File7();         //Function to store data in Patient7 file
	void File8();         //Function to store data in Patient8 file
	void File9();         //Function to store data in Patient9 file
	void File10();        //Function to store data in Patient10 file

	void display();       //Display Function

	~EHR();
	int getAge() const;
	void setAge(int age);
	const char* getAllergies1() const;
	const char* getAllergies2() const;
	const char* getAllergies3() const;
	char getGender() const;
	void setGender(char gender);
	int getId() const;
	void setId(int id);
	const char* getMadicine1() const;
	const char* getMadicine2() const;
	const char* getMadicine3() const;
	const char* getName() const;
	long long int getNumber() const;
	void setNumber(long long int number);
	const char* getPrescription() const;
	const char* getPrescription2() const;
	const char* getPrescription3() const;
	const char* getVisit1() const;
	const char* getVisit2() const;
	const char* getVisit3() const;
	const int* getAcceleration() const;
	const int* getBmi() const;
	const int* getBp() const;
	const int* getForce() const;
	const int* getGyroscope() const;
	const int* getOptical() const;
	const int* getOxygen() const;
	const int* getPedometer() const;
	const int* getPulse() const;
	const int* getTilt() const;
};

#endif /* SRC_EHR_H_ */
