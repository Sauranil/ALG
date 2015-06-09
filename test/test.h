#ifndef _ALG_TEST_TEST_H_
#define _ALG_TEST_TEST_H_

#include <string>
#include <vector>

using std::string;
using std::vector;

#define OUTPUT_FILE "output_test.txt"

int get_files(const string &_path, vector<string> *_in_files, vector<string> *_out_files);

int compare_file(const string &_left_file, const string &_right_file);


#endif