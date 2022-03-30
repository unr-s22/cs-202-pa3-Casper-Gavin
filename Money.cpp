#include "Money.h"

int Money::getDollars() const{
    return dollars;
}
int Money::getCents() const{
    return cents;
}

void Money::setDollars(int d){
        if(d >= 0){
            dollars = d;
        }
    }
void Money::setCents(int c){
    if(c >= 0 && c <= 99){
        cents = c;
    }
}

Money::Money(){
    this -> dollars = 0;
    this -> cents = 0;
}
Money::Money(int dollars, int cents){
    this -> dollars = dollars;
    this -> cents = cents;
}
