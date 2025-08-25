#ifndef MENUS_H
#define MENUS_H

#include "pizza.h"
#include "observer.h"

#include <vector>

class Menus
{   
    private:
        std::vector<Pizza*> pizzas;
    protected:
        std::vector<Observer*> observers;
    public:
        void addObserver(Observer* observer);
        void removeObserver(Observer* observer);
        void addPizza(Pizza* pizza);
        void removePizza(Pizza* pizza);
        virtual void notifyObservers(std::string message);

};


#endif