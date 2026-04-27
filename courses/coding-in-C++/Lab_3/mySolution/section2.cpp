#include <iostream>
#include <string>

class User{
protected:
    std::string name;
    int id;
public:
    User(std::string name, int id){
        this->name = name;
        this->id = id;
    }
    void printInfo(){
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: "<< id << std::endl;
    }
};

class Student : public User{
public:
    int semester;
    Student(std::string name, int id, int semester)
        : User(name, id){
        this->semester = semester;
    }
    void printRole(){
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: "<< id << std::endl;
        std::cout << "Semester: " << semester << std::endl;
    }
};

class Instructor : public User{
public:
    std::string kurs;
    Instructor(std::string name, int id, std::string kurs) : User(name, id){
        this->kurs = kurs;
    }
    void printRole(){
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: "<< id << std::endl;
        std::cout << "Kurs: " << kurs << std::endl;
    }
};



int main(){
    User user1("Stefan", 123);
    Student student("Stefan", 123, 2);
    student.printRole();

    User user2("Mustermann", 456);
    Instructor instructor("Mustermann", 456, "Programmieren");
    instructor.printRole();
    return 0;
}