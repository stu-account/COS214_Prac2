#include "menus.h"

class PizzaMenu : public Menus 
{
    public:
        void notifyObservers(std::string message) override {
            for (Observer* observer: observers) {
                observer->update(message);
            }
        }
};