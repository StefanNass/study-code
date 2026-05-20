#include <iostream>
#include <string>


template <typename T, typename U>



class Pair
{
private:
    T a;
    U b;
public:
    Pair (T a, U b) : a(a), b(b){}

    T get_a() const{
        return this->a;
    }

    U get_b()const {
        return this->b;
    }

    void set_a(T a){
        this->a = a;
    }

    void set_b(U b){
        this->b = b;
    }
};


int main(){

    return 0;
}