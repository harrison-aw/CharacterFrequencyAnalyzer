/*
 * FrequencyTable.h
 *
 *  Created on: May 3, 2013
 *      Author: Tony
 */

#ifndef FREQUENCYTABLE_H_
#define FREQUENCYTABLE_H_

#include <istream>
#include <map>
#include <string>

namespace cfanalyzer {

class FrequencyTable {
public:
	FrequencyTable();
	virtual ~FrequencyTable();

	friend std::ostream &operator<<(std::ostream &os, const FrequencyTable &ft);

	void analyzeFile(const std::string &filename);

	unsigned int countOf(char c);
	double frequencyOf(char c);

private:
	unsigned int char_count;
	std::map<char, unsigned int> table;
};

} /* namespace cfanalyzer */
#endif /* FREQUENCYTABLE_H_ */
