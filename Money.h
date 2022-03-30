#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <ostream>

class Money{
private:
    int dollars, cents;
public:
    friend class Account; 
//getters
    int getDollars() const;
    int getCents() const;

//setters
    void setDollars(int d);
    void setCents(int c);

//'this' is to be used for the math overloaders
    Money();
    Money(int dollars, int cents);
    
//overloads of all the relational operators
    friend bool operator == (const Money &lhs, const Money &rhs){
        return (lhs.dollars==rhs.dollars&&lhs.cents==rhs.cents);
    }

    friend bool operator < (const Money &lhs, const Money &rhs){
        return (lhs.dollars<rhs.dollars&&lhs.cents<rhs.cents);
    }

    friend bool operator > (const Money &lhs, const Money &rhs){
        return (lhs.dollars>rhs.dollars&&lhs.cents>rhs.cents);
    }

    friend bool operator >= (const Money &lhs, const Money &rhs){
        return (lhs.dollars>=rhs.dollars&&lhs.cents>=rhs.cents);
    }

    friend bool operator <= (const Money &lhs, const Money &rhs){
        return (lhs.dollars<=rhs.dollars&&lhs.cents<=rhs.cents);
    }

    friend bool operator != (const Money &lhs, const Money &rhs){
        return (lhs.dollars!=rhs.dollars&&lhs.cents!=rhs.cents);
    }
//overloads of math operators
    Money operator+(const Money &all){
        Money add;
        add.dollars = this->dollars + all.dollars;
        add.cents = this->cents + all.cents;
        return add;
    }

    Money operator-(const Money &all){
        Money sub;
        sub.dollars = this->dollars - all.dollars;
        sub.cents = this->cents - all.cents;
        return sub;
    }
/*overload of stream operators to allow proper formatting in main, print using:
Money m(xxx,xx);
std::cout << m << std::endl;*/
    friend std::ostream& operator<<(std::ostream &os, const Money &m){
        os << '$' << m.dollars << '.' << m.cents;
        return os;
    }


};

#endif
