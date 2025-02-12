Problem Statement:
Create a C++ program to process a list of student scores from a file and write the results (names and average scores) to another file.

Instructions:
Input File (students.in):

The file contains information about students and their scores. Each line contains a student's name followed by their scores for three tests, separated by spaces.
Example of students.in:
Alice 85 90 88
Bob 70 75 80
Charlie 95 85 92
Output File (students.out):

Your program should calculate the average score for each student and write the results to this file in the following format:
Alice: 87.67
Bob: 75.00
Charlie: 90.67
Program Requirements:

Open the file students.in for reading.
Open the file students.out for writing.
Read student data from students.in, calculate their average score, and write the results to students.out.
Properly close both files after processing.
Implementation Details:

Use the ifstream and ofstream classes for file handling.
Use appropriate input and output formatting (e.g., fixed precision for averages).
Include error checking for file operations (e.g., check if the file opens successfully).
