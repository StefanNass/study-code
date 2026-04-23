#include <iostream>
#include <string>
#include <iomanip>

class Article {
private:
    std::string name;
    double price;
    int stock;
    std::string category;
    int id;
public:
    Article(std::string name, double price, int stock, std::string category, int id) {
        this->name = name;
        this->price = price;
        this->stock = stock;
        this->id = id;
        this->category = category;
    }
    ~Article(){}

    void setPrice(double price) {
        if(price > 0){
            this->price = price;
        }
    }

    void sell(int amount) {
        if(stock >= amount){
            stock = stock - amount;
        }
    }

    void restock(int amount) {
        if(amount > 0){
            stock = stock + amount;
        }
    }

    double applyDiscount(double percent) {
        if(percent <= 100 && percent >= 0){
            price = price - price * percent / 100;
        }
        return price;
    }

    double getPrice() const{
        return price;
    }

    bool isAvailable() const{
        return stock > 0;
    }

    void printInfo() const{
        std::cout << "Article: " << name << std::endl;
        std::cout << "Category: " << category << std::endl;
        std::cout << "Price: " << price << std::endl;
        std::cout << "Stock: " << stock << std::endl;
        std::cout << "ID: " << id << std::endl;
    }
};

int main() {
    Article a("Laptop", 999.99, 10, "Electronics", 101);

    a.sell(15);
    a.restock(-5);
    a.setPrice(-100);
    a.applyDiscount(150);

    if (a.isAvailable()) std::cout << "Article available" << std::endl;

    a.printInfo();
}