/*
 * main.cpp
 *
 *  Created on: May 3, 2013
 *      Author: Tony
 */

#include <iostream>

#include <dirent.h>

#include "FrequencyTable.h"

using namespace std;
using namespace nnproject;

int main(int argc, char *argv[]) {
	FrequencyTable ft("Debug/files/");

	cout << ft;

	return 0;
}


