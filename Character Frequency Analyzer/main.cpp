/*
 * main.cpp
 *
 *  Created on: May 3, 2013
 *      Author: Tony
 */

#include <iostream>

#include <dirent.h>

#include "FrequencyRecord.h"

using namespace std;
using namespace nnproject;

typedef map<char, unsigned int>::iterator iter;

int main(int argc, char *argv[]) {

	FrequencyRecord fr;
	fr.analyzeFile("readme-graph.lisp.txt");
	cout << fr;

	return 0;
}


