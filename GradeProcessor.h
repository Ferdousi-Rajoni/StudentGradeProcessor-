// File: GradeProcessor.h
// Author: Jannatul Ferdousi Rajoni
// Date: 30 September 2024
// Purpose: Defines functions to process student exam scores, calculate their
//          letter grades, and output the results to a file and console


// If GRADEPROCESSOR_H is not defined, define it to prevent multiple inclusions of the header file
#ifndef GRADEPROCESSOR_H

//Define GRADEPROCESSOR_H to avoid future inclusion of this file in the same compilation unit
#define GRADEPROCESSOR_H

//Include necessary standard library headers for vectors,and formatting
#include <vector>
#include <string>
#include <fstream>

// Function to calculate the average of a vector of scores
double calculate_average_score(const std::vector<int>& scores);

// Function to determine the letter grade based on the average score
std::string calculate_letter_grade(double average);

// Function to process a line of student data
void process_student_data(const std::string& line, std::ofstream& outputFile);

// Function to write headers to the output file
void write_output_headers(std::ofstream& outputFile);

#endif // GRADEPROCESSOR_H //End of the include guard to prevent multiple inclusions of the header file

