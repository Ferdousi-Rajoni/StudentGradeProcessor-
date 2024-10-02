**GradeProcessor*
**Author:Jannatul Ferdousi Rajoni**
**Student ID: 200530077**

**Description**
This program reads a list of students' exam scores from an input file, processes their scores to determine statistics such as the minimum score, maximum score, average score, and assigns a letter grade based on a predefined grading scale. It then outputs this information in a well-formatted way to both the console and an output file.

**Files **
GradeProcessor.h: Header file containing function declarations and required library inclusions.
GradeProcessor.cpp: Implementation of the functions that handle score processing, including calculations and grade assignment.
main.cpp: Main file containing the program's entry point, handling file input and output operations.
input.txt: Example input file that contains student data (ID, number of scores, followed by the scores).
output.txt: Output file where the processed student data, including scores and grades, is saved.


**How to Compile**
Use a C++ compiler to compile the program.


**How to Run**
Once compiled, run the program by executing the main function

**Input File Format**
The program expects an input file (e.g., input.txt) formatted as follows:

Each line contains a student ID (integer), followed by the number of exam scores, and then the list of exam scores.

Example of a line in the input file:

584827925 11 100 88 95 94 98 100 90 71 100 92 98
In this case:

584827925 is the student ID.
11 is the number of exam scores.
100 88 95 94 98 100 90 71 100 92 98 are the actual exam scores.

**Output**
The program will generate two outputs:

Console Output: The student's ID, scores, minimum score, maximum score, average score, and letter grade will be displayed on the console.

Example console output:

Student ID     Min     Max     Avg   Grade
---------------------------------------------
 584827925       71      100    93.27       A- 
 952344495       68      100    84.64       B- 
 781293120       72      100    90.14       B+ 
 324483372       79      100    90.12       B+ 
 583873526       70      100    88.60       B+ 
 892594421       65      100    86.09        B 

Output File (output.txt): The same information will be written to the output file in a similar format.
Student ID     Min     Max     Avg   Grade          Num Scores    Scores
------------------------------------------------------------------------------------------
 584827925       71      100    93.27       A-         11 100  88  95  94  98 100  90  71 100  92  98 
 952344495       68      100    84.64       B-         11  78  83  92  76  83  88  93 100  68 100  70 
 781293120       72      100    90.14       B+          7  86 100 100 100  74  99  72 
 324483372       79      100    90.12       B+          8 100  87 100  85  86 100  79  84 

**Grading Scale**
The program assigns letter grades based on the following scale:

A: 95%–100%
A-: 91.67%–95%
B+: 88.3%–91.67%
B: 85%–88.3%
B-: 81.67%–85%
C+: 78.33%–81.67%
C: 75%–78.33%
C-: 71.67%–75%
D+: 68.33%–71.67%
D: 65%–68.33%
D-: 61.67%–65%
F: Below 61.67%


**Program Structure**
main.cpp:
Handles file input/output operations.
Calls process_student_data() to read and process the student data.

GradeProcessor.cpp:
Contains the logic for calculating minimum, maximum, and average scores.
Assigns letter grades based on the computed average.

GradeProcessor.h:
Function declarations and library inclusions.

**Limitations**
The program assumes that the input file is correctly formatted.
There is no error handling for invalid input formats (e.g., missing exam scores or incorrect number of scores).


**Make sure that the input file (input.txt) exists in the same directory as the executable. The program will generate an output.txt file in the same directory with the calculated grades.

**References**
Additional information on Grade Processor was obtained from
1. Classnotes by Aymen bin Said
2. W3 schools(https://www.w3schools.com/cpp/)
3. Stackoverflow (https://stackoverflow.com/)


Email: ferdousi.rajoniii@gmail.com
GitHub: https://github.com/Ferdousi-Rajoni/StudentGradeProcessor-
