/*
 * main.cpp
 *
 *  Created on: May 3, 2013
 *      Author: Tony
 */

#include <iostream>

#include "FrequencyTable.h"

using namespace std;
using namespace cfanalyzer;

typedef map<char, unsigned int>::iterator iter;

int main(int argc, char *argv[]) {

	FrequencyTable ft;

	ft.analyzeFile("readme-graph.lisp.txt");

	cout << ft;

	return 0;
}


