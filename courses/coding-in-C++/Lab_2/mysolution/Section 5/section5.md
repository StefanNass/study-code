# Fehlersuche

## Fehler 1
class Article {
public:
    string name;
    double price;
    int stock;
    string* category;
    int id;

Variablen in public geschrieben anstatt in private mit public set- und get-Methoden

## Fehler 2
Article(string name, double price, int stock, string category, int id) {
        name = name;
        price = price;
        stock = stock;
        this->id = id;
        this->category = new string;
        *this->category = category;
    }

this-Pointer bei name, price und stock weggelassen

## Fehler 3
string* category;

Unnötiger string-Pointer

## Fehler 4
void setPrice(double price) {
        price = price;
    }

this-Pointer weggelassen

## Fehler 5
void restock(int amount) {
        this->stock += amount;
    }

this-Pointer unnötig

## Fehler 6
using namespace std;

Namespace-using soll nicht verwendet werden

## Fehler 7
kein Destruktor

## Fehler 8
this->id = id;

keine Prüfung ob ID bereits belegt ist

## Fehler 9
stock = stock - amount;

keine Prüfung ob überhaupt genug Bestand da ist

## Fehler 10
double getPrice() {
        return price;
    }

konstante Funktion markieren