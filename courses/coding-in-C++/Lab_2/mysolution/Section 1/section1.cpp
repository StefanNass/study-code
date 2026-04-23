#include <iostream>
#include <string>

class BankAccount
{
private:
    std::string inhaber;
    double kontostand = 0.0;
public:
    void setInhaber(std::string i){
        inhaber = i;
    }
    std::string getInhaber(){
        return inhaber;
    }
    void einzahlen(double b){
        if (b>0){
            kontostand += b;
        }
        else{
            std::cout << "Fehler: Kein positiver Betrag!" << std::endl;
        }
        
    }
    void abheben(double b){
        if(b <= kontostand){
            kontostand -= b;
        }
        else{
            std::cout << "Fehler: zu Wenig Guthaben!" << std::endl;
        }
    }
    double getKontostand();
    void getAccountInfo();
};

double BankAccount::getKontostand(){
    return kontostand;
}
void BankAccount::getAccountInfo(){
    std::cout << "Inhaber: " << getInhaber() << std::endl;
    std::cout << "Kontostand: " << getKontostand() << std::endl;
}

int main(){
    BankAccount meinKonto;
    meinKonto.setInhaber("Stefan Nass");
    meinKonto.einzahlen(1000);
    meinKonto.abheben(14.3);
    meinKonto.abheben(3000);
    meinKonto.getAccountInfo();
    
    return 0;
}