/*
 * Call.h
 *
 *  Created on: May 4, 2023
 *      Author: jalil
 */

#ifndef SRC_CALL_H_
#define SRC_CALL_H_
#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

class Call {
private:
	time_t start;
	time_t end;
	char notes[500];
public:
	Call();   //Default Constructor
	Call(Call& cal);    //Copy Constructor

	void startcalls();   //Function to get time when call starts
	void endcalls();     //Function to get time when call ends
	void takenotes();    //Function to take notes in b/w call
	void print();        //Print Function

	time_t getEnd() const;
	void setEnd(time_t end);
	time_t getStart() const;
	void setStart(time_t start);
	const char* getNotes() const;
};

#endif /* SRC_CALL_H_ */
