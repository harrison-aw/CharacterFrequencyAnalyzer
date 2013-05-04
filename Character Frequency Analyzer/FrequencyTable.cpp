/*
 * FrequencyTable.cpp
 *
 *  Created on: May 3, 2013
 *      Author: Tony
 */

#include <fstream>

#include "FrequencyTable.h"

namespace cfanalyzer {

FrequencyTable::FrequencyTable():
	char_count(0) {
}

FrequencyTable::~FrequencyTable() {
}

std::ostream &operator<<(std::ostream &os, const FrequencyTable &ft) {
	for (std::map<char, unsigned int>::const_iterator it = ft.table.begin(); it != ft.table.end(); ++it) {
		os << it->first << ": " << it->second << std::endl;
	}
	return os;
}

void FrequencyTable::analyzeFile(const std::string &filename) {
	std::ifstream file(filename.c_str());
	while (file) {
		char c = file.get();
		if (file.good()) {
			++char_count;
			++table[c];
		}
	}
	file.close();
}

unsigned int FrequencyTable::countOf(char c) {
	return table[c];
}

double FrequencyTable::frequencyOf(char c) {
	return static_cast<double>(table[c]) / char_count;
}

} /* namespace cfanalyzer */
