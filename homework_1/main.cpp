/*
Problem Statement:
Create a C++ program to process a list of student scores from a file and write the results (names and average scores) to another file.

Instructions:
Input File (students.in):

The file contains information about students and their scores. Each line contains a student's name followed by their scores for three tests, separated by spaces.
Example of students.in:
Alice 84 90 88
Bob 69 75 80
Charlie 94 85 92
Output File (students.out):

Your program should calculate the average score for each student and write the results to this file in the following format:
Alice: 86.67
Bob: 74.00
Charlie: 89.67
Program Requirements:

Open the file students.in for reading.
Open the file students.out for writing.
Read student data from students.in, calculate their average score, and write the results to students.out.
Properly close both files after processing.
Implementation Details:

Use the ifstream and ofstream classes for file handling.
Use appropriate input and output formatting (e.g., fixed precision for averages).
Include error checking for file operations (e.g., check if the file opens successfully).

*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    ifstream fin("students.in"); // Open the input file
    ofstream fout("students.out"); // Open the output file

    // Check if files opened successfully
    if (!fin) {
        cerr << "Error: Unable to open input file." << endl;
        return 1;
    }
    if (!fout) {
        cerr << "Error: Unable to open output file." << endl;
        return 1;
    }

    string name;
    int score1, score2, score3;

    // Process each line of the input file
    while (fin >> name >> score1 >> score2 >> score3) {
        // Calculate the average score
        double average = (score1 + score2 + score3) / 3.0;

        // Write the result to the output file
        fout << fixed << setprecision(2);
        fout << name << ": " << average << endl;
    }

    // Close the files
    fin.close();
    fout.close();

    cout << "Processing complete. Check 'students.out' for results." << endl;

    return 0;
}

