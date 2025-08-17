#ifndef PIZZA_H
#define PIZZA_H

#include "string"

class Pizza {
private:
    
public:
    Pizza();
    virtual ~Pizza();
    virtual double getPrice();
    virtual std::string getName();
    void printPizza();
};


#endif
