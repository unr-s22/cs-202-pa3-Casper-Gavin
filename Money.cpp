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

bool operator == (const Money &lhs, const Money &rhs){
        return (lhs.dollars==rhs.dollars&&lhs.cents==rhs.cents);
    }

bool operator < (const Money &lhs, const Money &rhs){
        return (lhs.dollars<rhs.dollars&&lhs.cents<rhs.cents);
    }

bool operator > (const Money &lhs, const Money &rhs){
        return (lhs.dollars>rhs.dollars&&lhs.cents>rhs.cents);
    }

bool operator >= (const Money &lhs, const Money &rhs){
        return (lhs.dollars>=rhs.dollars&&lhs.cents>=rhs.cents);
    }

bool operator <= (const Money &lhs, const Money &rhs){
        return (lhs.dollars<=rhs.dollars&&lhs.cents<=rhs.cents);
    }

bool operator != (const Money &lhs, const Money &rhs){
        return (lhs.dollars!=rhs.dollars&&lhs.cents!=rhs.cents);
    }


std::ostream& operator<<(std::ostream &os, const Money &m){
        os << '$' << m.dollars << '.' << m.cents;
        return os;
    }