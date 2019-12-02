#include <iostream>
#include <cmath>
#include <utility>

using namespace std;
class Money {
    float value, currency, valueInDollars;
    string symbol;
public:

    void setParametrs(float value, float currency, string symbol){
        this->value = value;
        this->currency = currency;
        this->symbol = move(symbol);
        valueInDollars = value * currency;
        valueInDollars = round(valueInDollars * 100) / 100;
    }
    void add(Money m){
        valueInDollars += m.valueInDollars;
        valueInDollars = round(valueInDollars * 100) / 100;
        value = valueInDollars / currency;
        value = round(value * 100) / 100;
    }
    void print(){
        cout << value << " " << symbol << endl;
    }
    void printInDollars() {
        cout << valueInDollars << " $" << endl;
    }
    void operator +(Money m){
        add(m);
    }
    void operator -(Money m){
        valueInDollars -= m.valueInDollars;
        valueInDollars = round(valueInDollars * 100) / 100;
        value = valueInDollars / currency;
        value = round(value * 100) / 100;
    }
};

int main() {
    Money rubble = Money();
    rubble.setParametrs(50, 0.016, "rub");
    Money rupee = Money();
    rupee.setParametrs(40, 0.014, "rup");

    rubble.print();
    rupee.print();
    cout<<endl;

    rubble.printInDollars();
    rupee.printInDollars();
    cout<<endl;

    rubble + rupee;
    rubble.printInDollars();
    rubble.print();
    cout<<endl;

    rubble - rupee;
    rubble.printInDollars();
    rubble.print();
    cout<<endl;

    rupee.add(rubble);
    rupee.printInDollars();
    rupee.print();

    return 0;
}