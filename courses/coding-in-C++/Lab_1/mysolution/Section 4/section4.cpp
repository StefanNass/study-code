#include <iostream>
#include <string>
#include <limits>
#include "studentcard.hpp"





int main(){
    std::string name;
    int score_homework;
    int score_midterm;
    int score_final_exam;

    float final_score;
    std::string final_grade;
    readStudentData(name, score_homework, score_midterm, score_final_exam);
    calculateGrade(score_homework, score_midterm, score_final_exam, final_score, final_grade);
    printReport(name, score_homework, score_midterm, score_final_exam, final_score, final_grade);

    return 0;
}