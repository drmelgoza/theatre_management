#include <iostream>
#include <string>
#include "seat.h"

    Seat::Seat (std::string newId, std::string newType, bool occupationStatus, double newPrice) {
        id = newId;
        type = newType;
        isOccupied = occupationStatus;
        price = newPrice;
    }

    std::string Seat::getId() {
        return id;
    }

    std::string Seat::getType() {
        return type;
    }

    bool Seat::getOccupationStatus() {
        return isOccupied;
    }

    double Seat::getPrice() {
        return price;
    }
    
