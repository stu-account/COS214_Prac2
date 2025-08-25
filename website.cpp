#include "observer.h"
#include <iostream>

class Website : public Observer 
{
    public:
        void update (std::string message) override {
            std::cout << "Website recieved: " << message << "\n";
        }
};