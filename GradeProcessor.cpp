// File: GradeProcessor.cpp
// Author: Jannatul Ferdousi Rajoni
// Date: 30 September 2024
// Purpose: Implements functions to process student exam scores, calculate
//          grades, and output the results to a file and the console.


#include "GradeProcessor.h" // Include the header file for function declarations
#include <iostream>     // Include for std::cout
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm> // Include for min_element and max_element

// Function: calculate_average_score
// Purpose: Calculates the average of a vector of exam scores.
// Parameters:
//   - scores: A vector of integers representing the exam scores for a student.
// Returns: The average of the scores as a double.

// Function to calculate the average of a vector of scores
double calculate_average_score(const std::vector<int>& scores) {
    double sum = 0; // Variable to hold the sum of scores
    for (int score : scores) { // Iterate through each score
        sum += score; // Add each score to the sum
    }
    return sum / scores.size(); // Return the average score
}


// Function: calculate_letter_grade
// Purpose: Determines the letter grade based on the student's average score.
// Parameters:
//   - average: The average exam score as a double.
// Returns: A string representing the letter grade.

std::string calculate_letter_grade(double average) {
    // Determine the letter grade based on the average score
    if (average >= 95) return "A";
    else if (average >= 91.67) return "A-";
    else if (average >= 88.3) return "B+";
    else if (average >= 85) return "B";
    else if (average >= 81.67) return "B-";
    else if (average >= 78.33) return "C+";
    else if (average >= 75) return "C";
    else if (average >= 71.67) return "C-";
    else if (average >= 68.33) return "D+";
    else if (average >= 65) return "D";
    else if (average >= 61.67) return "D-";
    else return "F"; // Return "F" for failing grades
}


// Function: process_student_data
// Purpose: Processes a student's data from a line of input, calculates the min, max, and
//          average scores, assigns a letter grade, and writes the results to an output file
//          and the console.
// Parameters:
//   - line: A string representing a line of student data (ID and scores).
//   - outputFile: The output file stream where the results will be written.
// Returns: Void (writes results to the output file and prints to the console)

void process_student_data(const std::string& line, std::ofstream& outputFile) {
    std::stringstream ss(line); // Create a stringstream for the line of data
    int studentID, numScores; // Variables to hold the student ID and number of scores

    // Read student ID and number of exam scores from the line
    ss >> studentID >> numScores;

    // Read the scores into a vector
    std::vector<int> studentScores;
    for (int i = 0; i < numScores; ++i) {
        int score; // Variable to hold each score
        ss >> score; // Read the score from the stringstream
        studentScores.push_back(score); // Add the score to the vector
    }

    // Calculate min, max, and average scores
    int minScore = *std::min_element(studentScores.begin(), studentScores.end()); // Find minimum score
    int maxScore = *std::max_element(studentScores.begin(), studentScores.end()); // Find maximum score
    double averageScore = calculate_average_score(studentScores); // Calculate average score

    // Calculate the letter grade based on the average score
    std::string grade = calculate_letter_grade(averageScore);

    // Write the output with formatted columns to the file
    outputFile << std::setw(10) << studentID << " "
               << std::setw(8) << minScore << " "
               << std::setw(8) << maxScore << " "
               << std::setw(8) << std::fixed << std::setprecision(2) << averageScore << " "
               << std::setw(8) << grade << " "
               << std::setw(10) << numScores << " " ; // Add number of exam scores

    // Write each score to the output file
    for (int score : studentScores) {
        outputFile << std::setw(3) << score << " ";
    }
    outputFile << std::endl; // End the line in the output file

    //  Display the same information on the console
    std::cout << std::setw(10) << studentID << " "
              << std::setw(8) << minScore << " "
              << std::setw(8) << maxScore << " "
              << std::setw(8) << std::fixed << std::setprecision(2) << averageScore << " "
              << std::setw(8) << grade << " ";
             

    std::cout << std::endl; // End the line in the console
}


// Function: write_output_headers
// Purpose: Writes the headers for the output file and the console.
// Parameters:
//   - outputFile: The output file stream where the headers will be written.
// Returns: Void (writes headers to the file and prints them to the console).

void write_output_headers(std::ofstream& outputFile) {
    // Write the header row to the output file
    outputFile << std::setw(10) << "Student ID" << std::setw(8) << "Min" 
               << std::setw(8) << "Max" << std::setw(8) << "Avg"
               << std::setw(8) << "Grade" << std::setw(20) << "Num Scores" <<std::setw(10) << "Scores" << std::endl;
    outputFile << "------------------------------------------------------------------------------------------" << std::endl;

    // Write the same headers to the console
    std::cout << std::setw(10) << "Student ID" << std::setw(8) << "Min" 
              << std::setw(8) << "Max" << std::setw(8) << "Avg"
              << std::setw(8) << "Grade" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}
