#include <iostream>
#include <string>

class DrinkBuilder{
private:
    std::string name;
    int sugar;
    int temperature;
    bool with_milk;
    static constexpr int DEFAULT_TEMPERATURE = 20;
    static constexpr int MAX_SUGAR_AMOUNT = 10;
public:
    DrinkBuilder(){
        name = "Unknown";
        temperature = DEFAULT_TEMPERATURE;
        sugar = 0;
        with_milk = false;
    }
    DrinkBuilder& setName(const std::string& name){
        this->name = name;
        return *this;
    }
    DrinkBuilder& setSugar(int sugar){
        if (sugar <= MAX_SUGAR_AMOUNT && sugar >= 0){
            this->sugar = sugar;
        }
        else{
            std::cout << "Invalid sugar value!\n" << std::endl;
        }
        return *this;
    }
    DrinkBuilder& setTemperature(int temperature){
        if(temperature > 0){
            this->temperature = temperature;
        }
        else{
            std::cout << "Invalid temperature value!\n" << std::endl;
        }
        return *this;
    }
    DrinkBuilder& set_with_milk(bool with_milk){
        this->with_milk = with_milk;
        return *this;
    }
    bool isValid() const{
        return sugar >= 0 && sugar <= MAX_SUGAR_AMOUNT && temperature > 0;
    }
    void print() const{
        std::cout << "Drink: " << name << std::endl;
        std::cout << "Sugar: " << sugar << std::endl;
        std::cout << "Temperature: " << temperature << std::endl;
        std::cout << "With milk: " << std::boolalpha << with_milk << std::endl;
    }
};


int main(){
    DrinkBuilder builder;
    builder .setName("Tea")
            .setSugar(12)
            .setTemperature(0)
            .set_with_milk(true);
    if (builder.isValid()){
        builder.print();
    }
    else{
        std::cout << "Invalid drink configuration!\n" << std::endl;
    }
    

    return 0;
}