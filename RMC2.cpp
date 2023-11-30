/*
 * RMC2.cpp
 *
 *  Created on: May 6, 2023
 *      Author: jalil
 */

#include "RMC2.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

//Default Constructor
RMC2::RMC2() {

}

//First function to read Patient1 file
void RMC2::EHRfunc1() {

	EHR ehr1;

	/*int ID;
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
	int Force[90];*/

	//Reading data from Patient file
	ifstream infile1("Patient1.DAT", ios::binary | ios::in);
	infile1.read(reinterpret_cast<char*>(&ehr1),sizeof(ehr1));

	/*ID = ehr1.getId();
	strcpy(name,ehr1.getName());
	number = ehr1.getNumber();
	age = ehr1.getAge();*/

	//Uploading file on Cloud
	Cloud c1;
	c1.storefile("Patient1.DAT");
	ehr1.display();                //display function
	cout<<endl;
	/*strcpy(Visit1,ehr1.getVisit1());
	strcpy(Visit2,ehr1.getVisit2());
	strcpy(Visit3,ehr1.getVisit3());
	strcpy(Allergies1,ehr1.getAllergies1());
	strcpy(Allergies2,ehr1.getAllergies2());
	strcpy(Allergies3,ehr1.getAllergies3());
	strcpy(Prescription,ehr1.getPrescription());
	strcpy(Prescription2,ehr1.getPrescription2());
	strcpy(Prescription3,ehr1.getPrescription3());
	strcpy(Madicine1,ehr1.getMadicine1());
	strcpy(Madicine2,ehr1.getMadicine2());
	strcpy(Madicine3,ehr1.getMadicine3());
	memcpy(oxygen,ehr1.getOxygen(),sizeof(ehr1.getOxygen()));
	memcpy(BMI,ehr1.getBmi(),sizeof(ehr1.getBmi()));
	memcpy(pulse,ehr1.getPulse(),sizeof(ehr1.getPulse()));
	memcpy(Acceleration,ehr1.getAcceleration(),sizeof(ehr1.getAcceleration()));
	memcpy(Gyroscope,ehr1.getGyroscope(),sizeof(ehr1.getGyroscope()));
	memcpy(Pedometer,ehr1.getPedometer(),sizeof(ehr1.getPedometer()));
	memcpy(Optical,ehr1.getOptical(),sizeof(ehr1.getOptical()));
	memcpy(Tilt,ehr1.getTilt(),sizeof(ehr1.getTilt()));
	memcpy(Force,ehr1.getForce(),sizeof(ehr1.getForce()));*/

}

//Second function to read Patient2 file
void RMC2::EHRfunc2(){
	EHR ehr1;

	//Reading data from Patient file
	ifstream infile1("Patient2.DAT", ios::binary | ios::in);
	infile1.read(reinterpret_cast<char*>(&ehr1),sizeof(ehr1));

	ehr1.display();    //display function

	//Uploading on Cloud
	Cloud c1;
	c1.storefile("Patient2.DAT");
	cout<<endl;
}

//Third function to read Data from Patient 3 file
void RMC2::EHRfunc3(){
	EHR ehr1;

	//Reading data from Patient file
	ifstream infile1("Patient3.DAT", ios::binary | ios::in);
	infile1.read(reinterpret_cast<char*>(&ehr1),sizeof(ehr1));

	ehr1.display();   //display function

	//Uploading file on Cloud
	Cloud c1;
	c1.storefile("Patient3.DAT");
	cout<<endl;
}

//Fourth function to read Data from Patient4 file
void RMC2::EHRfunc4(){
	EHR ehr1;

	//Reading Data from patient file
	ifstream infile1("Patient4.DAT", ios::binary | ios::in);
	infile1.read(reinterpret_cast<char*>(&ehr1),sizeof(ehr1));

	//Uploading file on Cloud
	Cloud c1;
	c1.storefile("Patient4.DAT");
	ehr1.display();     //display function
	cout<<endl;
}

//Fifth function to read Data from Patient5 file
void RMC2::EHRfunc5(){
	EHR ehr1;

	//Reading Data from Patient file
	ifstream infile1("Patient5.DAT", ios::binary | ios::in);
	infile1.read(reinterpret_cast<char*>(&ehr1),sizeof(ehr1));

	ehr1.display();    //display function

	//Uploading file on Cloud
	Cloud c1;
	c1.storefile("Patient5.DAT");
	cout<<endl;
}

//Sixth function to read Data from Patient6 file
void RMC2::EHRfunc6(){
	EHR ehr1;

	//Resding Data from Patient file
	ifstream infile1("Patient6.DAT", ios::binary | ios::in);
	infile1.read(reinterpret_cast<char*>(&ehr1),sizeof(ehr1));

	ehr1.display();    //display function

	//Uploading file on Cloud
	Cloud c1;
	c1.storefile("Patient6.DAT");
	cout<<endl;
}

//Seventh function to read Data from Patient7 file
void RMC2::EHRfunc7(){
	EHR ehr1;

	//Reading Data from Patient file
	ifstream infile1("Patient7.DAT", ios::binary | ios::in);
	infile1.read(reinterpret_cast<char*>(&ehr1),sizeof(ehr1));

	ehr1.display();   //display function

	//Uploading file on Cloud
	Cloud c1;
	c1.storefile("Patient7.DAT");
	cout<<endl;
}

//Eight function to read Data from Patient8 file
void RMC2::EHRfunc8(){
	EHR ehr1;

	//Reading data from Patient file
	ifstream infile1("Patient8.DAT", ios::binary | ios::in);
	infile1.read(reinterpret_cast<char*>(&ehr1),sizeof(ehr1));

	ehr1.display();    //display function

	//Uploading file on Cloud
	Cloud c1;
	c1.storefile("Patient8.DAT");
	cout<<endl;
}

//Ninth function to read Data from Patient9 file
void RMC2::EHRfunc9(){
	EHR ehr1;

	//Reading data from Patient file
	ifstream infile1("Patient9.DAT", ios::binary | ios::in);
	infile1.read(reinterpret_cast<char*>(&ehr1),sizeof(ehr1));

	ehr1.display();  //display function

	//Uploading file on Cloud
	Cloud c1;
	c1.storefile("Patient9.DAT");
	cout<<endl;
}

//Tenth function to read Data from Patient10 file
void RMC2::EHRfunc10(){
	EHR ehr1;

	//Reading data from Patient file
	ifstream infile1("Patient10.DAT", ios::binary | ios::in);
	infile1.read(reinterpret_cast<char*>(&ehr1),sizeof(ehr1));

	ehr1.display();     //display function

	//Uploading file on Cloud
	Cloud c1;
	c1.storefile("Patient10.DAT");
	cout<<endl;
}

//Patient Function
void RMC2::Patients(int choice) {

	/*int ID1;
	char name1[100];
	long long int number1;
	int age1;

	int ID2;
	char name2[100];
	long long int number2;
	int age2;

	int ID3;
	char name3[100];
	long long int number3;
	int age3;

	int ID4;
	char name4[100];
	long long int number4;
	int age4;

	int ID5;
	char name5[100];
	long long int number5;
	int age5;

	int ID6;
	char name6[100];
	long long int number6;
	int age6;

	int ID7;
	char name7[100];
	long long int number7;
	int age7;

	int ID8;
	char name8[100];
	long long int number8;
	int age8;

	int ID9;
	char name9[100];
	long long int number9;
	int age9;

	int ID10;
	char name10[100];
	long long int number10;
	int age10;

	ID1 = 1;
	strcpy(name1,"Lisa Patel");
	number1 = 9230446473826;
	age1 = 24;

	ID2 = 2;
	strcpy(name2,"Daniel Rodriguez");
	number2 = 9230446477356;
	age2 = 40;

	ID3 = 3;
	strcpy(name3,"Maria Hernandez");
	number3 = 92308456473826;
	age3 = 37;

	ID4 = 4;
	strcpy(name4,"James Johnson");
	number4 = 92308473633826;
	age4 = 42;

	ID5 = 5;
	strcpy(name5,"Karen Wilson");
	number5 = 92308473633826;
	age5 = 26;

	ID6 = 6;
	strcpy(name6,"Ahmed Khan");
	number6 = 92308476353826;
	age6 = 36;

	ID7 = 7;
	strcpy(name7,"Jennifer Lee");
	number7 = 92318273633826;
	age7 = 56;

	ID8 = 8;
	strcpy(name8,"Robert Green");
	number8 = 92318987633826;
	age8 = 24;

	ID9 = 9;
	strcpy(name9,"Laura Davis");
	number9 = 92318987746826;
	age9 = 29;

	ID10 = 10;
	strcpy(name10,"Tom Williams");
	number10 = 92318987746534;
	age10 = 49;

	(ID1,name1,number1,age1)
	(ID2,name2,number2,age2)
	(ID3,name3,number3,age3)
	(ID4,name4,number4,age4)
	(ID5,name5,number5,age5)
	(ID6,name6,number6,age6)
	(ID7,name7,number7,age7)
	(ID8,name8,number8,age8)
	(ID9,name9,number9,age9)
	(ID10,name10,number10,age10)
	*/

	//<----------------Patient varieables used to read Data from file------------------------>//
	Patient p1;
	Patient p2;
	Patient p3;
	Patient p4;
	Patient p5;
	Patient p6;
	Patient p7;
	Patient p8;
	Patient p9;
	Patient p10;



	/*ofstream outfile("AllPatients.DAT",ios::binary  | ios::out);
	if(outfile)
	{
		outfile.write(reinterpret_cast<char*>(&p1),sizeof(p1));
		outfile.write(reinterpret_cast<char*>(&p2),sizeof(p2));
		outfile.write(reinterpret_cast<char*>(&p3),sizeof(p3));
		outfile.write(reinterpret_cast<char*>(&p4),sizeof(p4));
		outfile.write(reinterpret_cast<char*>(&p5),sizeof(p5));
		outfile.write(reinterpret_cast<char*>(&p6),sizeof(p1));
		outfile.write(reinterpret_cast<char*>(&p7),sizeof(p7));
		outfile.write(reinterpret_cast<char*>(&p8),sizeof(p8));
		outfile.write(reinterpret_cast<char*>(&p9),sizeof(p9));
		outfile.write(reinterpret_cast<char*>(&p10),sizeof(p10));
	}

	outfile.close();*/

	//<--------------------------Reading Data from AllPatients file---------------------------->//

	ifstream infile("AllPatients.DAT",ios::binary | ios::in);
	if(infile)
	{

		infile.read(reinterpret_cast<char*>(&p1),sizeof(p1));
		infile.read(reinterpret_cast<char*>(&p2),sizeof(p2));
		infile.read(reinterpret_cast<char*>(&p3),sizeof(p3));
		infile.read(reinterpret_cast<char*>(&p4),sizeof(p4));
		infile.read(reinterpret_cast<char*>(&p5),sizeof(p5));
		infile.read(reinterpret_cast<char*>(&p6),sizeof(p6));
		infile.read(reinterpret_cast<char*>(&p7),sizeof(p7));
		infile.read(reinterpret_cast<char*>(&p8),sizeof(p8));
		infile.read(reinterpret_cast<char*>(&p9),sizeof(p9));
		infile.read(reinterpret_cast<char*>(&p10),sizeof(p10));
	}

	infile.close();

	//ofstream outfile2("NewPatient", ios::binary | ios::out);


	/*int ID;
	char name[100];
	int number;
	int age;

	ID = p1.getId();
	strcpy(name,p1.getName());
	number = p1.getNumber();
	age = p1.getAge();

	cout<<"\nPatient 1!\n";
	cout<<"ID"<<ID<<endl;
	cout<<"Name:";
	for (int i=0;(name[i] != '\0');i++)
		cout<<name[i];
	cout<<endl;
	cout<<"Age:"<<age<<" years"<<endl;

	ID = p2.getId();
	strcpy(name,p2.getName());
	number = p2.getNumber();
	age = p2.getAge();

	cout<<"\nPatient 2!\n";
	cout<<"ID"<<ID<<endl;
	cout<<"Name:";
	for (int i=0;(name[i] != '\0');i++)
		cout<<name[i];
	cout<<endl;
	cout<<"Age:"<<age<<" years"<<endl;

	ID = p3.getId();
	strcpy(name,p3.getName());
	number = p3.getNumber();
	age = p3.getAge();

	cout<<"\nPatient 3!\n";
	cout<<"ID"<<ID<<endl;
	cout<<"Name:";
	for (int i=0;(name[i] != '\0');i++)
		cout<<name[i];
	cout<<endl;
	cout<<"Age:"<<age<<" years"<<endl;

	ID = p4.getId();
	strcpy(name,p4.getName());
	number = p4.getNumber();
	age = p4.getAge();

	cout<<"\nPatient 4!\n";
	cout<<"ID"<<ID<<endl;
	cout<<"Name:";
	for (int i=0;(name[i] != '\0');i++)
		cout<<name[i];
	cout<<endl;
	cout<<"Age:"<<age<<" years"<<endl;

	ID = p5.getId();
	strcpy(name,p5.getName());
	number = p5.getNumber();
	age = p5.getAge();

	cout<<"\nPatient 5!\n";
	cout<<"ID"<<ID<<endl;
	cout<<"Name:";
	for (int i=0;(name[i] != '\0');i++)
		cout<<name[i];
	cout<<endl;
	cout<<"Age:"<<age<<" years"<<endl;

	ID = p6.getId();
	strcpy(name,p6.getName());
	number = p6.getNumber();
	age = p6.getAge();

	cout<<"\nPatient 6!\n";
	cout<<"ID"<<ID<<endl;
	cout<<"Name:";
	for (int i=0;(name[i] != '\0');i++)
		cout<<name[i];
	cout<<endl;
	cout<<"Age:"<<age<<" years"<<endl;

	ID = p7.getId();
	strcpy(name,p7.getName());
	number = p7.getNumber();
	age = p7.getAge();

	cout<<"\nPatient 7!\n";
	cout<<"ID"<<ID<<endl;
	cout<<"Name:";
	for (int i=0;(name[i] != '\0');i++)
		cout<<name[i];
	cout<<endl;
	cout<<"Age:"<<age<<" years"<<endl;

	ID = p8.getId();
	strcpy(name,p8.getName());
	number = p8.getNumber();
	age = p8.getAge();

	cout<<"\nPatient 8!\n";
	cout<<"ID"<<ID<<endl;
	cout<<"Name:";
	for (int i=0;(name[i] != '\0');i++)
		cout<<name[i];
	cout<<endl;
	cout<<"Age:"<<age<<" years"<<endl;

	ID = p9.getId();
	strcpy(name,p9.getName());
	number = p9.getNumber();
	age = p9.getAge();

	cout<<"\nPatient 9!\n";
	cout<<"ID"<<ID<<endl;
	cout<<"Name:";
	for (int i=0;(name[i] != '\0');i++)
		cout<<name[i];
	cout<<endl;
	cout<<"Age:"<<age<<" years"<<endl;

	ID = p10.getId();
	strcpy(name,p10.getName());
	number = p10.getNumber();
	age = p10.getAge();

	cout<<"\nPatient 10!\n";
	cout<<"ID"<<ID<<endl;
	cout<<"Name:";
	for (int i=0;(name[i] != '\0');i++)
		cout<<name[i];
	cout<<endl;
	cout<<"Age:"<<age<<" years"<<endl;*/

	RMC2 remote1;          //RMC2 variale
	int check;
	int check3 = 1;
	string getkey;

	//Writing Data in file
	ofstream newoutfile("NewPatient.DAT", ios::binary);

	switch(choice)
	{
	case 1:
		//Adding new Patient in file
		newoutfile.write((char*)&p1, sizeof(p1));
		newoutfile.close();

		while(check3 == 1)
		{
			//<----------------------Main Menu of Patient App----------------->//
			cout<<"\nNow!\n";
			cout<<"1.Add Appointment\n";
			cout<<"2.Make a call\n";
			cout<<"3.Check History\n";
			cin>>check;

			if (check == 1)
				p1.addAppointment();          //Booking an Appointment
			else if (check == 2) {
				p1.addCall();                 //Call Doctor
			}

			else if (check == 3)
				remote1.EHRfunc1();           //Check History

			cout<<"\nEnter 1 to continue\n";
			cout<<"Enter 0 to Exit:";
			cin>>check3;
		}
		break;
	case 2:
		//Adding New Patient in file
		newoutfile.write((char*)&p2, sizeof(p2));
		newoutfile.close();

		while (check3 == 1)
		{
			//<----------------------Main Menu of Patient App----------------->//
			cout<<"\nNow!\n";
			cout<<"1.Add Appointment\n";
			cout<<"2.Make a call\n";
			cout<<"3.Check History\n";
			cin>>check;

			if (check == 1)
				p2.addAppointment();      //Booking an Appointment
			else if (check == 2) {
				p2.addCall();              //Call Doctor
			}

			else if (check == 3)
				remote1.EHRfunc2();       //Check History

			cout<<"\nEnter 1 to continue\n";
			cout<<"Enter 0 to Exit:";
			cin>>check3;
		}
		break;
	case 3:
		//Adding new Patient in file
		newoutfile.write((char*)&p3, sizeof(p3));
		newoutfile.close();

		while (check3 == 1)
		{
			//<----------------------Main Menu of Patient App----------------->//
			cout<<"\nNow!\n";
			cout<<"1.Add Appointment\n";
			cout<<"2.Make a call\n";
			cout<<"3.Check History\n";
			cin>>check;

			if (check == 1)
				p3.addAppointment();     //Booking an Appointment
			else if (check == 2) {
				p3.addCall();            //Call Doctor
			}

			else if (check == 3)
				remote1.EHRfunc3();      //Check History

			cout<<"\nEnter 1 to continue\n";
			cout<<"Enter 0 to Exit:";
			cin>>check3;
		}
		break;
	case 4:
		//Adding new Patient in file
		newoutfile.write((char*)&p4, sizeof(p4));
		newoutfile.close();

		while (check3 == 1)
		{//<----------------------Main Menu of Patient App----------------->//
			cout<<"\nNow!\n";
			cout<<"1.Add Appointment\n";
			cout<<"2.Make a call\n";
			cout<<"3.Check History\n";
			cin>>check;

			if (check == 1)
			p4.addAppointment();         //Booking an Appointment
			else if (check == 2) {
				p4.addCall();            //Call Doctor
			}

			else if (check == 3)
				remote1.EHRfunc4();      //Check History

			cout<<"\nEnter 1 to continue\n";
			cout<<"Enter 0 to Exit:";
			cin>>check3;
		}
		break;
	case 5:
		//Adding new Patient in file
		newoutfile.write((char*)&p5, sizeof(p5));
		newoutfile.close();

		while (check3 == 1)
		{
			//<----------------------Main Menu of Patient App----------------->//
			cout<<"\nNow!\n";
			cout<<"1.Add Appointment\n";
			cout<<"2.Make a call\n";
			cout<<"3.Check History\n";
			cin>>check;

			if (check == 1)
				p5.addAppointment();     //Booking an Appointment
			else if (check == 2) {
				p5.addCall();            //Call Doctor
			}

			else if (check == 3)
				remote1.EHRfunc5();      //Check History

			cout<<"\nEnter 1 to continue\n";
			cout<<"Enter 0 to Exit:";
			cin>>check3;
		}
		break;
	case 6:
		//Adding new Patient in file
		newoutfile.write((char*)&p6, sizeof(p6));
		newoutfile.close();

		while (check3 == 1)
		{
			//<----------------------Main Menu of Patient App----------------->//
			cout<<"\nNow!\n";
			cout<<"1.Add Appointment\n";
			cout<<"2.Make a call\n";
			cout<<"3.Check History\n";
			cin>>check;

			if (check == 1)
				p6.addAppointment();      //Booking an Appointment
			else if (check == 2) {
				p6.addCall();             //Call Doctor
			}

			else if (check == 3)
				remote1.EHRfunc6();       //Check History

			cout<<"\nEnter 1 to continue\n";
			cout<<"Enter 0 to Exit:";
			cin>>check3;
		}
		break;
	case 7:
		//Adding new Patient in file
		newoutfile.write((char*)&p7, sizeof(p7));
		newoutfile.close();

		while (check3 == 1)
		{
			//<----------------------Main Menu of Patient App----------------->//
			cout<<"\nNow!\n";
			cout<<"1.Add Appointment\n";
			cout<<"2.Make a call\n";
			cout<<"3.Check History\n";
			cin>>check;

			if (check == 1)
				p7.addAppointment();    //Booking an Appointment
			else if (check == 2) {
				p7.addCall();           //Call Doctor
			}

			else if (check == 3)
				remote1.EHRfunc7();     //Check history

			cout<<"\nEnter 1 to continue\n";
			cout<<"Enter 0 to Exit:";
			cin>>check3;
		}
		break;
	case 8:
		//Adding new Patient in file
		newoutfile.write((char*)&p8, sizeof(p8));
		newoutfile.close();

		while (check3 == 1)
		{
			//<----------------------Main Menu of Patient App----------------->//
			cout<<"\nNow!\n";
			cout<<"1.Add Appointment\n";
			cout<<"2.Make a call\n";
			cout<<"3.Check History\n";
			cin>>check;

			if (check == 1)
				p8.addAppointment();     //Booking an Appointment
			else if (check == 2) {
				p8.addCall();            //Call Doctor
			}

			else if (check == 3)
				remote1.EHRfunc8();      //Check History

			cout<<"\nEnter 1 to continue\n";
			cout<<"Enter 0 to Exit:";
			cin>>check3;
		}
		break;
	case 9:
		//Adding new Patient in file
		newoutfile.write((char*)&p9, sizeof(p9));
		newoutfile.close();

		while (check3 == 1)
		{
			//<----------------------Main Menu of Patient App----------------->//
			cout<<"\nNow!\n";
			cout<<"1.Add Appointment\n";
			cout<<"2.Make a call\n";
			cout<<"3.Check History\n";
			cin>>check;

			if (check == 1)
				p9.addAppointment();    //Booking an Appointment
			else if (check == 2) {
				p9.addCall();           //Call Doctor
			}

			else if (check == 3)
				remote1.EHRfunc9();     //Check History

			cout<<"\nEnter 1 to continue\n";
			cout<<"Enter 0 to Exit:";
			cin>>check3;
		}
		break;
	case 10:
		//Adding new patient in file
		newoutfile.write((char*)&p10, sizeof(p10));
		newoutfile.close();

		while (check3 == 1)
		{
			//<----------------------Main Menu of Patient App----------------->//
			cout<<"\nNow!\n";
			cout<<"1.Add Appointment\n";
			cout<<"2.Make a call\n";
			cout<<"3.Check History\n";
			cin>>check;

			if (check == 1)
				p10.addAppointment();      //Booking an Appointment
			else if (check == 2) {
				p10.addCall();             //Call Doctor
			}

			else if (check == 3)
				remote1.EHRfunc10();       //Clear History

			cout<<"\nEnter 1 to continue\n";
			cout<<"Enter 0 to Exit:";
			cin>>check3;
		}
		break;
	default:
		cout<<"\nDONE\n";
		break;
	}

	//Uploading file on Cloud
	Cloud c1;
	c1.storefile("NewPatient.DAT");
	cout<<endl;
}

void RMC2::Healthprovider(int choice) {

//<-------------------------Variables used to read Data from file-------------------->//
	char name1[50];
		long long int number1;
		int ID1;
		int Age1;

		char name2[50];
		long long int number2;
		int ID2;
		int Age2;

		char name3[50];
		long long int number3;
		int ID3;
		int Age3;

		char name4[50];
		long long int number4;
		int ID4;
		int Age4;

		char name5[50];
		long long int number5;
		int ID5;
		int Age5;

		//<-----------------------------Reading Data from File-------------------->//
		strcpy(name1,"Lisa Patel");
		ID1 = 1;
		number1 = 9230446473826;
		Age1 = 24;

		strcpy(name2,"Daniel Rodriguez");
		ID2 = 2;
		number2 = 9230446473826;
		Age2 = 40;

		strcpy(name3,"Maria Hernandez");
		ID3 = 3;
		number3 = 9230446473826;
		Age3 = 37;

		strcpy(name4,"James Johnson");
		ID4 = 4;
		number4 = 9230446473826;
		Age4 = 40;

		strcpy(name5,"Karen Wilson");
		ID5 = 5;
		number5 = 9230446473826;
		Age5 = 26;

		//Appointment Class variables used to creat a new file to add Appointments for doctors
		HP_AppointmentList ha1(name1,number1,ID1,Age1);
		HP_AppointmentList ha2(name2,number2,ID2,Age2);
		HP_AppointmentList ha3(name3,number3,ID3,Age3);
		HP_AppointmentList ha4(name4,number4,ID4,Age4);
		HP_AppointmentList ha5(name5,number5,ID5,Age5);

		//Writing Appointments in file
		ofstream outfile("AllAppointmentsList", ios::binary);
		if(outfile)
		{
			outfile.write((char*)&ha1, sizeof(ha1));
			outfile.write((char*)&ha2, sizeof(ha2));
			outfile.write((char*)&ha3, sizeof(ha2));
			outfile.write((char*)&ha4, sizeof(ha3));
			outfile.write((char*)&ha5, sizeof(ha5));
		}

		outfile.close();

	/*HP_AppointmentList ha1;
	HP_AppointmentList ha2;
	HP_AppointmentList ha3;
	HP_AppointmentList ha4;
	HP_AppointmentList ha5;*/

	Patient p1;

	string Approve;
	string Disapprove;

	//Reading data from Appointment file
	ifstream infile("AllAppointmentList", ios::binary);
	if(infile)
	{
		infile.read((char*)&ha1, sizeof(ha1));
		infile.read((char*)&ha2, sizeof(ha2));
		infile.read((char*)&ha3, sizeof(ha3));
		infile.read((char*)&ha4, sizeof(ha4));
		infile.read((char*)&ha5, sizeof(ha5));
	}

	RMC2 remote1;
	Patient p2;

	bool passwordcheck = false;
	int check;
	int check2;
	int check3;
	int access;
	string keyinput;

	if (choice == 1)
	{
		HealthProvider h1;
		passwordcheck = h1.login(); //Checking Password
		switch (passwordcheck)
		{
		case 1:
			//<----------------------Main Menu of Health Provider App----------------->//
			cout<<"\nNow!";
			cout<<"\n1.Check Appointment Requests";
			cout<<"\n2.Check Patient Data\n";
			cin>>check;
			if(check == 1)
			{
				//<----------------Checking all the Appointment requests---------------->//
				cout<<"\nAppointment 1!";
				ha1.display();
				cout<<"\nTime: 11am\n";

				cout<<"\nAppointment 2!";
				ha2.display();
				cout<<"\nTime: 3pm";

				cout<<"\nEnter Number of Appointments to approve or disapprove";

				//It would be doctor's choice, whether to Approve or Disapprove the requests
				cout<<"\nApproved:";
				cin>>Approve;
				cout<<"\nDisapproved:";
				cin>>Disapprove;
			}
			else if (check == 2)
			{
				//<------------------Checking the history of the Patient----------------->//
				cout<<"\nEnter ID of Patient whose Data you want to check:";
				cin>>check2;
				if (check2 == 1)
				{
					p2.encryption("Patient1.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p1.decryption("encrypt.DAT");
						remote1.EHRfunc1();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							access = p1.accessrequest();
							//if patient allows then doctor can access his/her History
							if(access == 1)
							{
								p1.decryption("encrypt.DAT");
								remote1.EHRfunc1();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 2)
				{
					p1.encryption("Patient2.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc2();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc2();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 3)
				{
					p2.encryption("Patient3.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc3();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc3();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 4)
				{
					p2.encryption("Patient4.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc4();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc4();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
							}
					}
				}
				else if (check2 == 5)
				{
					p2.encryption("Patient5.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc5();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc5();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 6)
				{
					p2.encryption("Patient6.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc6();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc6();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 7)
				{
					p2.encryption("Patient7.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc7();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc7();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 8)
				{
					p2.encryption("Patient8.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc8();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc8();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 9)
				{
					p2.encryption("Patient9.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc9();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc8();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 10)
				{
					p2.encryption("Patient10.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc10();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc10();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
			}
			break;
		case 0:
			cout<<"\nPassword is Incorrect\n";
			break;
		default:
			break;
		}
	}
	else if (choice == 2)
	{
		HealthProvider h2;
		passwordcheck = h2.login();
		switch (passwordcheck)
		{
		case 1:
			//<---------------Main Menu of Health Provider App----------------------->//
			cout<<"\nNow!";
			cout<<"\n1.Check Appointment Requests";
			cout<<"\n2.Check Patient Data\n";
			cin>>check;
			if(check == 1)
			{
				//<--------------Ckecking all the Appointments Requests------------->//
				cout<<"\nAppointment 1!";
				ha1.display();
				cout<<"\nTime: 9am\n";

				cout<<"\nAppointment 2!";
				ha2.display();
				cout<<"\nTime: 12am";

				cout<<"\nAppointment 3!";
				ha4.display();
				cout<<"\nTime: 10pm";

				//It would be doctor's choice, whether to Approve or disapprove the Request
				cout<<"\nEnter Number of Appointments to approve or disapprove";
				cout<<"\nApproved:";
				cin>>Approve;
				cout<<"\nDisapproved:";
				cin>>Disapprove;
			}
			else if (check == 2)
			{
				//Doctor must have to Enter access key to see the history of the Patient
				cout<<"\nEnter ID of Patient whose Data you want to check:";
				cin>>check2;
				if (check2 == 1)
				{
					p2.encryption("Patient1.DAT");
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc1();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc1();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 2)
				{
					p2.encryption("Patient2.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc2();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc2();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 3)
				{
					p2.encryption("Patient3.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc3();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc3();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 4)
				{
					p2.encryption("Patient4.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc4();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc4();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 5)
				{
					p2.encryption("Patient5.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc5();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc5();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 6)
				{
					p2.encryption("Patient6.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc6();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc6();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 7)
				{
					p2.encryption("Patient7.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc7();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc7();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 8)
				{
					p2.encryption("Patient8.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc8();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc8();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 9)
				{
					p2.encryption("Patient9.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc9();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc9();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 10)
				{
					p2.encryption("Patient10.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc10();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc10();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
			}

			break;
		case 0:
			cout<<"\nPassword is Incorrect\n";
			break;
		default:
			break;
		}
	}
	else if (choice == 3)
	{
		HealthProvider h3;
		passwordcheck = h3.login();
		switch(passwordcheck)
		{
		case 1:
			//<---------------------Main Menu of Health Provider App----------------->//
			cout<<"\nNow!";
			cout<<"\n1.Check Appointment Requests";
			cout<<"\n2.Check Patient Data\n";
			cin>>check;
			if(check == 1)
			{
				//<-----------------Checking the Appointments Requests
				cout<<"\nAppointment 1!";
				ha1.display();
				cout<<"\nTime: 7pm\n";

				//It's doctor's choice, whethet to approve or disappreove the request
				cout<<"\nEnter Number of Appointments to approve or disapprove";
				cout<<"\nApproved:";
				cin>>Approve;
				cout<<"\nDisapproved:";
				cin>>Disapprove;
			}
			else if (check == 2)
			{
				cout<<"\nEnter ID of Patient whose Data you want to check:";
				cin>>check2;
				if (check2 == 1)
				{
					p2.encryption("Patient1.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc1();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc1();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 2)
				{
					p2.decryption("Patient2.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc2();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc2();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 3)
				{
					p2.encryption("Patient3.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc3();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc3();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 4)
				{
					p2.encryption("Patient5.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc4();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc4();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 5)
				{
					p2.encryption("Patient5.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc5();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc5();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 6)
				{
					p2.encryption("Patient6.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc6();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc6();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 7)
				{
					p2.encryption("Patient7.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc7();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc7();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 8)
				{
					p2.encryption("Patient8.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc8();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc8();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 9)
				{
					p2.encryption("Patient9.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc9();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc9();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 10)
				{
					p2.encryption("Patient10.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc10();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc10();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
			}

			break;
		case 0:
			cout<<"\nPassword is Incorrect\n";
			break;
		default:
			break;
		}
	}
	else if (choice == 4)
	{
		HealthProvider h4;
		passwordcheck = h4.login();
		switch(passwordcheck)
		{
		case 1:
			//<---------------------------------Main Menu of HealthProvider App---------------->//
			cout<<"\nNow!";
			cout<<"\n1.Check Appointment Requests";
			cout<<"\n2.Check Patient Data\n";
			cin>>check;
			if(check == 1)
			{
				//<--------------------Checking the Appointments request----------------------.//
				cout<<"\nAppointment 1!";
				ha1.display();
				cout<<"\nTime: 9am\n";

				cout<<"\nAppointment 2!";
				ha2.display();
				cout<<"\nTime: 12am";

				cout<<"\nAppointment 3!";
				ha4.display();
				cout<<"\nTime: 12am";

				cout<<"\nAppointment 4!";
				ha5.display();
				cout<<"Time: 2pm";

				//It's Doctor's choice, whether to approve or disapprove the request
				cout<<"\nEnter Number of Appointments to approve or disapprove";
				cout<<"\nApproved:";
				cin>>Approve;
				cout<<"\nDisapproved:";
				cin>>Disapprove;
			}
			else if (check == 2)
			{
				p2.encryption("Patient1.DAT");
				//Doctor must have to Enter access key to see the history of the Patient
				cout<<"\nEnter ID of Patient whose Data you want to check:";
				cin>>check2;
				if (check2 == 1)
				{
					//If Doctor don't have key then he will request for the key from the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc1();
					}
					else
					{
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc1();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 2)
				{
					p2.encryption("Patient2.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc2();
					}
					else
					{
						//If Doctor don't have key then he will request for the key from the Patient
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc2();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 3)
				{
					p2.encryption("Patient3.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc3();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc3();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 4)
				{
					p2.encryption("Patient4.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc4();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc4();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 5)
				{
					p2.encryption("Patient5.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc5();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc5();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 6)
				{
					p2.encryption("Patiemt6.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc6();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc6();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 7)
				{
					p2.encryption("Patient7.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc7();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc7();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 8)
				{
					p2.encryption("Patient8.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc8();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc8();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 9)
				{
					p2.encryption("Patient9.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc9();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc9();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 10)
				{
					p2.encryption("Patient10.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc10();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc10();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
			}

			break;
		case 0:
			cout<<"\nPassword is Incorrect\n";
			break;
		default:
			break;
		}
	}
	else if (choice == 5)
	{
		HealthProvider h5;
		passwordcheck = h5.login();
		switch(passwordcheck)
		{
		case 1:
			//<-----------------------Main Menu of Health Provider App-------------------->//
			cout<<"\nNow!";
			cout<<"\n1.Check Appointment Requests";
			cout<<"\n2.Check Patient Data\n";
			cin>>check;
			if(check == 1)
			{
				//<----------------Checking Appointment Requests---------------->//
				cout<<"\nAppointment 1!";
				ha3.display();
				cout<<"\nTime: 4pm\n";

				//It's Doctor'e choice, whether to Approve or disapprove the request
				cout<<"\nEnter Number of Appointments to approve or disapprove";
				cout<<"\nApproved:";
				cin>>Approve;
				cout<<"\nDisapproved:";
				cin>>Disapprove;
			}
			else if (check == 2)
			{
				//Doctor must have to Enter access key to see the history of the Patient
				cout<<"\nEnter ID of Patient whose Data you want to check:";
				cin>>check2;
				if (check2 == 1)
				{
					p2.encryption("Patient1.DAT");
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc1();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc1();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 2)
				{
					p2.encryption("Patient2.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc2();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc2();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 3)
				{
					p2.encryption("Patient3.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc3();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc3();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 4)
				{
					p2.encryption("Patient5.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc4();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc4();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 5)
				{
					p2.encryption("Patient5.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc5();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc5();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 6)
				{
					p2.encryption("Patient6.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc6();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc6();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 7)
				{
					p2.encryption("Patient7.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc7();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc7();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 8)
				{
					p2.encryption("Patient8.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc8();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc8();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 9)
				{
					p2.encryption("Patient9.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc9();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc9();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
				else if (check2 == 10)
				{
					p2.encryption("Patient10.DAT");
					//Doctor must have to Enter access key to see the history of the Patient
					cout<<"\nEnter Access key:";
					cin>>keyinput;
					if(keyinput == key)
					{
						p2.decryption("encrypt.DAT");
						remote1.EHRfunc10();
					}
					else
					{
						//if patient allows then doctor can access his/her History
						cout<<"\nYou are not allowed to open this file\n";
						cout<<"\nEnter 1 to get access from user, and 0 to Exit:";
						cin>>check3;
						if(check3 == 1)
						{
							//if patient allows then doctor can access his/her History
							access = p1.accessrequest();
							if(access == 1)
							{
								p2.decryption("encrypt.DAT");
								remote1.EHRfunc10();
							}
							else
								cout<<"\nSORRY! Patient haven't allowed you to see the records\n";
						}
					}
				}
			}

			break;
		case 0:
			cout<<"\nPassword is Incorrect\n";
			break;
		default:
			break;
		}
	}
	else
		cout<<"\nDONE\n";
}

RMC2::~RMC2() {
	// TODO Auto-generated destructor stub
}

