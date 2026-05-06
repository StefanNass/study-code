#include <iostream>
#include <string>
#include <cmath>

class Vector2D{
private:
    double x;
    double y;
public:
    Vector2D() : x(0), y(0){}
    Vector2D(double x, double y) : x(x), y(y) {}
    
    double get_x(){
        return x;
    }
    
    double get_y(){
        return y;
    }
    
    void print(){
        std::cout << "x: " << x << std::endl;
        std::cout << "y: " << y << std::endl;
    }
    
    double len(){
        return std::sqrt(x * x + y * y);
    }
    
    double len(int precision){
        double value = len();
        double factor = std::pow(10.0, precision);
        return std::round(value * factor) / factor;
    }

    Vector2D& operator+=(Vector2D v){
        this -> x += v.x;
        this -> y += v.y;
        return *this;
    }

};

Vector2D operator+(Vector2D v1, Vector2D v2){
    return Vector2D(v1.get_x() + v2.get_x(), v1.get_y() + v2.get_y());
}




int main(){
    int precision = 2;
    Vector2D v1(2, 4);
    Vector2D v2(1, 3);

    std::cout << "Laenge des Vektors: " << v1.len() << std::endl;
    std::cout << "Laenge des Vektors gerundet auf " << precision << " Nachkommastellen: " << v1.len(precision) << std::endl;

    Vector2D v3 = v1 + v2;

    std::cout << "Vektor 1: " << std::endl;
    v1.print();
    std::cout << "Vektor 2: " << std::endl;
    v2.print();
    std::cout << "Vektor 3: " << std::endl;
    v3.print();

    v3 += v1;
    std::cout << "Vektor 3: " << std::endl;
    v3.print();

    return 0;
}