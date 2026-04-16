#include <iostream>
#include <string>
#include <limits>
#include "studentcard.hpp"

void readStudentData(std::string &name, int &homework, int &midterm, int &final_exam){
    std::cout << "Please enter your name:" << std::endl;
    std::getline(std::cin, name);

    bool isValid = false;
    std::cout << "Homework score:" << std::endl;
    while(!isValid){
        if (!(std::cin >> homework)){
            std::cout << "No valid score, please enter again:" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if(homework >= 0 && homework <= 100){
            isValid = true;
        }
        else{
            std::cout << "No valid score, please enter again:" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    isValid = false;
    
    std::cout << "Midterm score:" << std::endl;
    while(!isValid){
        if (!(std::cin >> midterm)){
            std::cout << "No valid score, please enter again:" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if(midterm >= 0 && midterm <= 100){
            isValid = true;
        }
        else{
            std::cout << "No valid score, please enter again:" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    isValid = false;

    std::cout << "Final exam score:" << std::endl;
    while(!isValid){
        if (!(std::cin >> final_exam)){
            std::cout << "No valid score, please enter again:" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        if(final_exam >= 0 && final_exam <= 100){
            isValid = true;
        }
        else{
            std::cout << "No valid score, please enter again:" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    isValid = false;
}

void calculateGrade(int &homework, int &midterm, int &final_exam, float &final_grade, std::string &letter_grade){
    final_grade = 0.4 * homework + 0.25 * midterm + 0.35 * final_exam;
    
    if (final_grade < 50){
        letter_grade = "F";
    }
    else if (final_grade >= 50 && final_grade < 60){
        letter_grade = "E";
    }
    else if (60 <= final_grade && final_grade < 70){
        letter_grade = "D";
    }
    else if (70 <= final_grade && final_grade < 80){
        letter_grade = "C";
    }
    else if (80 <= final_grade && final_grade < 90){
        letter_grade = "B";
    }
    else{
        letter_grade = "A";
    }
}

void printReport(std::string name, int homework, int midterm, int final_exam, float final_grade, std::string letter_grade){
    std::cout << "Student Report" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;

    std::cout << "Name: " << name << std::endl << std::endl;

    std::cout << "Scores:" << std::endl;
    std::cout << "-------------------------------------------" << std::endl << std::endl;

    std::cout << "Homework: " << homework << std::endl;
    std::cout << "Midterm: " << midterm << std::endl;
    std::cout << "Final Exam: " << final_exam << std::endl <<std::endl;
    std::cout << "Final Grade: " << final_grade << std::endl;
    std::cout << "Letter Grade: " << letter_grade << std::endl;
    
    std::string status;
    if(letter_grade == "A" || letter_grade == "B" || letter_grade == "C"){
        status = "Pass";
    }
    else if (letter_grade == "D" || letter_grade == "E")
    {
        status = "Contitional Pass";
    }
    else{
        status = "Fail";
    }
    
    std::cout << "Status: " << status << std::endl;
}

