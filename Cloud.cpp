/*
 * Cloud.cpp
 *
 *  Created on: May 8, 2023
 *      Author: jalil
 */

#include "Cloud.h"

//Default constructor
Cloud::Cloud() {
	// TODO Auto-generated constructor stub

}

//FUnction to Store all Files
void Cloud::storefile(string file) {
	static int count = 0;

	filename[count] = file;
}

Cloud::~Cloud() {
	// TODO Auto-generated destructor stub
}

