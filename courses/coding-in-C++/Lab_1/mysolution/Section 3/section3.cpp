#include <iostream>
#include <cstdint>
#include <limits>

namespace validation{
    
    bool isAdult (uint8_t age){
        if (age >= 18){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isSenior (uint8_t age){
        if (age >= 65){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int tempAge;
    bool isValid = false;

    while(!isValid){
        std::cout << "Please enter your age:" << std::endl;
        if (!(std::cin >> tempAge)){
            std::cout << "You did not enter a valid number. Please try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        else if (tempAge > 120 || tempAge < 0){
            std::cout << "You did not enter a valid number. Please try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        else{
            isValid = true;
            uint8_t age = static_cast<uint8_t>(tempAge);
            if (validation::isAdult(age) && validation::isSenior(age)){
                std::cout << "You are " << static_cast<int>(age) << " years old." << std::endl;
                std::cout << "That means you are a Senior." << std::endl;
            }
            else if (validation::isAdult(age) && !validation::isSenior(age)){
                std::cout << "You are " << static_cast<int>(age) << " years old." << std::endl;
                std::cout << "That means you are an adult." << std::endl;
            }
            else{
                std::cout << "You are " << static_cast<int>(age) << " years old." << std::endl;
                std::cout << "That means you are still a kid or teenager" << std::endl;
            }
        }
    }
    

    return 0;
}
