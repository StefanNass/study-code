#include <iostream>
#include <string>

class Shape{
private:
public:
    virtual double area() = 0;

    virtual ~Shape() = default;
};

class Circle : public Shape{
private:
    double radius;
public:
    Circle(double r) : radius(r){}
    double area() override{
        return 3.1415 * radius * radius;
    }
    ~Circle() = default;
};

class Rectangle : public Shape{
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w){}
    ~Rectangle() = default;
    double area() override{
        return length * width;
    }
};



int main(){
    Circle c1(5);
    Rectangle r1(2, 3);

    std::cout << "Kreisflaeche: " << c1.area() << std::endl;
    std::cout << "Rechtecksflaeche: " << r1.area() << std::endl;




    Shape* shapes[4];

    shapes[0] = new Circle(2);
    shapes[1] = new Circle(3.5);
    shapes[2] = new Rectangle(2, 3);
    shapes[3] = new Rectangle(4.5, 2.3);

    for(int i = 0; i < 4; i++){
        std::cout << "Flaeche der Form " << i << ": " << shapes[i]->area() << std::endl;
    }

    for (int i = 0; i < 4; i++) {
        delete shapes[i];
    }

    return 0;
}