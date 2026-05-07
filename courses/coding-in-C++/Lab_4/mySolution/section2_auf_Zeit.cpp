#include <iostream>
#include <string>

class Shape
{
private:
public:

    // Die Funktion sollte virtuell sein, da wir für die Berechnung von Flächen je nach Form unterschiedlichen Code brauchen.
    virtual double area() const {
        return 0.0;
    }


    // Der Destruktor sollte virtuell sein, da wir eine abstrakte Klasse haben mit virtuellen Methoden.
    virtual ~Shape() {};
};

class Circle : public Shape
{
private:
    double radius;
public:
    Circle(double r) : radius(r){};

    // Override ist wichtig, um bei kleinen Fehlern eine neue Funktion zu vermeiden.
    double area() const override {
        return 3.1415 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w){};

    // Override ist wichtig, um bei kleinen Fehlern eine neue Funktion zu vermeiden.
    double area() const override {
        return length * width;
    }
};



int main(){
    Circle c(3);
    Rectangle r(4, 3);

    std::cout << "Kreisflaeche: " << c.area() << std::endl;
    std::cout << "Rechtecksflaeche: " << r.area() << std::endl;


    Shape* shapes[4];
    shapes[0] = new Circle(2);
    shapes[1] = new Circle(5);
    shapes[2] = new Rectangle(2, 3);
    shapes[3] = new Rectangle(4, 5); 

    for(int i = 0; i <=3; i++){
        std::cout << shapes[i]->area() << std::endl;
    }

    for (int i = 0; i <= 3; i++) {
        delete shapes[i];
    }
    return 0;
}