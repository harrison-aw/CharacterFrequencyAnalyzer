/*
 * FrequencyTable.cpp
 *
 *  Created on: May 3, 2013
 *      Author: Tony
 */

#include <fstream>

#include "FrequencyRecord.h"

namespace nnproject {

FrequencyRecord::FrequencyRecord():
	char_count(0) {
}

FrequencyRecord::~FrequencyRecord() {
}

std::ostream &operator<<(std::ostream &os, FrequencyRecord &fr) {
	for (std::map<char, unsigned int>::const_iterator it = fr.table.begin(); it != fr.table.end(); ++it)
		os << it->first << ": " << fr.frequencyOf(it->first) << std::endl;
	return os;
}

void FrequencyRecord::analyzeFile(const std::string &filename) {
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

unsigned int FrequencyRecord::countOf(char c) {
	return table[c];
}

double FrequencyRecord::frequencyOf(char c) {
	return static_cast<double>(table[c]) / char_count;
}

} /* namespace cfanalyzer */
