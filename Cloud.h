/*
 * Cloud.h
 *
 *  Created on: May 8, 2023
 *      Author: jalil
 */

#ifndef SRC_CLOUD_H_
#define SRC_CLOUD_H_
#include <iostream>
#include <cstring>
using namespace std;

class Cloud {
private:
	string filename[11];

public:
	Cloud();  //Default Constructor
	void storefile(string file);   //Function to store Files

	~Cloud();
};

#endif /* SRC_CLOUD_H_ */
