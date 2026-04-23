#include <iostream>
#include <string>

class Note
{
private:
    std::string* text;
public:
    Note(std::string note);
    Note(const Note& n);
    ~Note();
    void display();
};

Note::Note(std::string note){
    text = new std::string(note);
}

Note::Note(const Note& n){
    text = new std::string(*n.text);
}

Note::~Note(){
    delete text;
    std::cout << "Memory cleared" << std::endl;
}

void Note::display(){
    std::cout << *text << std::endl;
}

int main(){
    std::string input;
    std::cout << "Geben Sie Ihre Notiz ein:" << std::endl;
    std::getline(std::cin, input);

    Note myNote1(input);
    Note myNote2(myNote1);

    std::cout << "Notiz 1:" << std::endl;
    myNote1.display();

    std::cout << "Notiz 2:" << std::endl;
    myNote2.display();

    return 0;
}