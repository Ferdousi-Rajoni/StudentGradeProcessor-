// File: main.cpp
// Author: Jannatul Ferdousi Rajoni
// Date: 30 September 2024
// Purpose: Implements functions to process student exam scores, calculate
//          grades, and output the results to a file and the console.


#include "GradeProcessor.h"                 // Include the header file for function declarations
#include <iostream>                         // Include for standard input/output stream
#include <fstream>                          // Include for file stream operations
#include <string>                           // Include for string operations

int main() {
    std::ifstream inputFile("input.txt"); // Create an input file stream to read from "input.txt"
    std::ofstream outputFile("output.txt"); // Create an output file stream to write to "output.txt"

    // Check if the files were opened successfully
    if (!inputFile || !outputFile) {       // If either file stream failed to open
        std::cerr << "Error opening file." << std::endl; // Print an error message
        return 1;                          // Return a non-zero value to indicate failure
    }

    // Write the headers to the output file
    write_output_headers(outputFile);      // Call function to write the headers for the output file

    std::string line;                      // Variable to hold each line of student data from input
    // Read each line from the input file until EOF
    while (std::getline(inputFile, line)) { // While there are lines to read
        process_student_data(line, outputFile); // Process the line and write the results to the output file
    }

    // Close the input and output files
    inputFile.close();                     // Close the input file stream
    outputFile.close();                    // Close the output file stream

    // Indicate that processing is complete
    std::cout << "Processing complete. Results written to output.txt." << std::endl; // Print completion message

    return 0;                              // Return 0 to indicate successful execution
}

