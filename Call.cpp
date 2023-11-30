/*
 * Call.cpp
 *
 *  Created on: May 4, 2023
 *      Author: jalil
 */

#include "Call.h"
#include <cstring>

//Default Constructor
Call::Call() {

}

//Function to get time when call starts
void Call::startcalls() {
	start = time(0);
	cout<<"\nYour call had started at time:"<<ctime(&start);
	cout<<endl;
}

//Function to get time when call ends
void Call::endcalls() {
	end = time(0);
	cout<<"\nCall Ended at:"<<ctime(&end);
	cout<<endl;
}

//Function to take notes in b/w the class
void Call::takenotes() {
	cout<<"\nNotes!\n";
	cin.ignore();
	cin.getline(notes,500,'\n');
}

//Print function
void Call::print() {
	cout<<"\nDeuration of call:"<<end-start<<" sec\n";
	cout<<"\nNotes:";
	for (int i=0; notes[i]!='\0' ;i++)
		cout<<notes[i];
	cout<<endl;
}

time_t Call::getEnd() const {
	return end;
}

void Call::setEnd(time_t end) {
	this->end = end;
}

time_t Call::getStart() const {
	return start;
}

void Call::setStart(time_t start) {
	this->start = start;
}

const char* Call::getNotes() const {
	return notes;
}
