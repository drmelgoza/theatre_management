#include <iostream>
#include <string>
#include "seat.h"

class Seat {

    private:
        std::string id;
        std::string type;
        bool isOccupied;
        double price;

    public:

        Seat (std::string newId, std::string newType, bool occupationStatus, double newPrice) {
            id = newId;
            type = newType;
            isOccupied = occupationStatus;
            price = newPrice;
        }

        std::string getId() {
            return id;
        }

        std::string getType() {
            return type;
        }

        bool getOccupationStatus() {
            return isOccupied;
        }

        double getPrice() {
            return price;
        }
    
};