#include <iostream>
#include <ostream>

class Money{
private:
    int dollars, cents;
public:
//getters
    int getDollars() const{
        return dollars;
    }
    int getCents() const{
        return cents;
    }
//setters
    void setDollars(int d){
            if(d >= 0){
                dollars = d;
            }
        }
        
    void setCents(int c){
        if(c >= 0 && c <= 99){
            cents = c;
        }
    }
    Money(){
        this -> dollars = 0;
        this -> cents = 0;
    }

    Money(int dollars, int cents){
        this -> dollars = dollars;
        this -> cents = cents;
    }

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

    friend std::ostream& operator<<(std::ostream &os, const Money &m){
        os << '$' << m.dollars << '.' << m.cents;
        return os;
    }

};