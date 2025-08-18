#ifndef TOPPINGGROUP_H
#define TOPPINGGRPOUP_H

#include "pizzacomponent.h"
#include <vector>

class ToppingGroup : public PizzaComponent{
private:
    // PizzaComponent* toppings;
    std::vector<PizzaComponent*> toppings;
public:
    ToppingGroup();
    ~ToppingGroup();
    void add(const PizzaComponent& component);
    std::string getName() override;
    double getPrice() override;
};

#endif