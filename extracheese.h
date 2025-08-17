#include "pizzadecorator.h"

class ExtraCheese : public PizzaDecorator
{
private:
    
public:
    ExtraCheese(const Pizza& pizza);
    ~ExtraCheese();
    double getPrice() override;
    std::string getName() override;
};


