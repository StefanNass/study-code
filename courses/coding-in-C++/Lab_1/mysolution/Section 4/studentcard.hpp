#include <iostream>
#include <string>
#ifndef STUDENTCARD_HPP
#define STUDENTCARD_HPP

void readStudentData(std::string &name, int &homework, int &midterm, int &final_exam);
void calculateGrade(int &homework, int &midterm, int &final_exam, float &final_grade, std::string &letter_grade);
void printReport(std::string name, int homework, int midterm, int final_exam, float final_grade, std::string letter_grade);

#endif