//============================================================================
// Name        : Project.cpp
// Author      : I221635_M.JalilAhmad
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "RMC2.h"                         //Added Header File of Remote Management Control Center
using namespace std;

int main() {

	cout<<"\n----------------------WELCOME to ABC Hospital---------------\n";

	//<-------------------Writing Data in EHR Files--------------------->//
	EHR e1;

	e1.File1();                         //Getting Data for file 1

	ofstream outfile1("Patient1.DAT", ios::binary | ios::out);
	if(!outfile1)
		cout<<"\nError:writing in this file!";
	else
		outfile1.write((char*)&e1,sizeof(e1));
	outfile1.close();

	e1.File2();                       //Getting Data for file 2

	ofstream outfile2("Patient2.DAT", ios::binary | ios::out);
	if(!outfile2)
		cout<<"\nError:writing in this file!";
	else
		outfile2.write((char*)&e1,sizeof(e1));
	outfile2.close();

	e1.File3();                       //Getting Data for file 3

	ofstream outfile3("Patient3.DAT", ios::binary | ios::out);
	if(!outfile3)
		cout<<"\nError:writing in this file!";
	else
		outfile3.write((char*)&e1,sizeof(e1));
	outfile3.close();

	e1.File4();                       //Getting Data for file 4

	ofstream outfile4("Patient4.DAT", ios::binary | ios::out);
	if(!outfile4)
		cout<<"\nError:writing in this file!";
	else
		outfile4.write((char*)&e1,sizeof(e1));
	outfile4.close();

	e1.File5();                       //Getting Data for file 5

	ofstream outfile5("Patient5.DAT", ios::binary | ios::out);
	if(!outfile5)
		cout<<"\nError:writing in this file!";
	else
		outfile5.write((char*)&e1,sizeof(e1));
	outfile5.close();

	e1.File6();                       //Getting Data for file 6

	ofstream outfile6("Patient6.DAT", ios::binary | ios::out);
	if(!outfile6)
		cout<<"\nError:writing in this file!";
	else
		outfile6.write((char*)&e1,sizeof(e1));
	outfile6.close();

	e1.File7();                       //Getting Data for file 7

	ofstream outfile7("Patient7.DAT", ios::binary | ios::out);
	if(!outfile7)
		cout<<"\nError:writing in this file!";
	else
		outfile7.write((char*)&e1,sizeof(e1));
	outfile7.close();

	e1.File8();                       //Getting Data for file 8

	ofstream outfile8("Patient8.DAT", ios::binary | ios::out);
	if(!outfile8)
		cout<<"\nError:writing in this file!";
	else
		outfile8.write((char*)&e1,sizeof(e1));
	outfile8.close();

	e1.File9();                       //Getting Data for file 9

	ofstream outfile9("Patient9.DAT", ios::binary | ios::out);
	if(!outfile9)
		cout<<"\nError:writing in this file!";
	else
		outfile9.write((char*)&e1,sizeof(e1));
	outfile9.close();

	e1.File10();                      //Getting Data for file 10

	ofstream outfile10("Patient10.DAT", ios::binary | ios::out);
	if(!outfile10)
		cout<<"\nError:writing in this file!";
	else
		outfile10.write((char*)&e1,sizeof(e1));
	outfile10.close();

	int choose = 0;
	int so_on = 1;

	while (so_on)
	{
		//Here in the main menu of the Apps
		cout<<"\nLogin to 1 of two Apps!\n";
		cout<<"1.Patient App\n";
		cout<<"2.HealthProvider App\n";
		cin>>choose;

		int id;
		RMC2 r1;

		//Switch function to check whether user wants to login as a Patient or a Doctor
		switch(choose)
		{
		case 1:
			cout<<"\nEnter Patient ID:";
			cin>>id;

			switch(id)
			{
				case 1:
					r1.Patients(1);             //Calling RMC2 Patient 1
					break;
				case 2:
					r1.Patients(2);             //Calling RMC2 Patient 2
					break;
				case 3:
					r1.Patients(3);             //Calling RMC2 Patient 3
					break;
				case 4:
					r1.Patients(4);             //Calling RMC2 Patient 4
					break;
				case 5:
					r1.Patients(5);             //Calling RMC2 Patient 5
					break;
				case 6:
					r1.Patients(6);             //Calling RMC2 Patient 6
					break;
				case 7:
					r1.Patients(7);             //Calling RMC2 Patient 7
					break;
				case 8:
					r1.Patients(8);             //Calling RMC2 Patient 8
					break;
				case 9:
					r1.Patients(9);             //Calling RMC2 Patient 9
					break;
				case 10:
					r1.Patients(10);            //Calling RMC2 Patient 10
					break;
				default:
					cout<<"\nYou Entered a Wrong ID\n";
					break;
			}
			break;
		case 2:
			int id;
			cout<<"\nEnter number of Health Provider\n";
			cin>>id;
			if( id == 1)
				r1.Healthprovider(1);             //Calling RMC2 Health Provider 1
			else if (id == 2)
				r1.Healthprovider(2);             //Calling RMC2 Health Provider 2
			else if (id == 3)
				r1.Healthprovider(3);             //Calling RMC2 Health Provider 3
			else if (id == 4)
				r1.Healthprovider(4);             //Calling RMC2 Health Provider 4
			else if (id == 6)
				r1.Healthprovider(6);             //Calling RMC2 Health Provider 5
			else
				cout<<"\nInvalid Number:(\n";

			break;
		default:
			cout<<"\nYou Entered Wrong number of APP\n";
			break;

		}

		cout<<"\nEnter 1 to again move to login pennal.";
		cout<<"\nEnter 0 to Exit:";
		cin>>so_on;
	}

	//<-------------------------------AND THAT"S ALL------------------------------------>//
	//<-------------------------------THANK YOU:)------------------------------------>//

	return 0;
}

//<-------------------------------THANK YOU:)------------------------------------>//
