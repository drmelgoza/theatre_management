#include <iostream>
#include <string>
#include "seat.h"

class Seat {

    private:
        std::string id;
        std::string type;
        bool isOccupied;

    public:

        Seat (std::string newId, std::string newType, bool occupationStatus) {
            id = newId;
            type = newType;
            isOccupied = occupationStatus;
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
    
};