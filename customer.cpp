#include "observer.h"
#include <iostream>

class Customer : public Observer 
{
    public:
        void update (std::string message) override {
            std::cout << "Customer recieved: " << message << "\n";
        }
};