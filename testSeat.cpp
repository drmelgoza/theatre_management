#include "seat.h"
#include <string>
#include <vector>
#include <iostream>

void testSeats() {
    Seat TestSeat1{std::string ("A1"), std::string ("Regular"), false, 10.99};
    Seat TestSeat2{std::string ("A2"), std::string ("Regular"), false, 10.99};
    Seat TestSeat3{std::string ("A3"), std::string ("Premium"), false, 15.99};
    Seat TestSeat4{std::string ("A4"), std::string ("Regular"), false, 10.99};
    Seat TestSeat5{std::string ("A5"), std::string ("Regular"), false, 10.99};

    std::vector<Seat> seats = {TestSeat1, TestSeat2, TestSeat3, TestSeat4, TestSeat5};


    for (Seat st : seats) {
        std::cout << "Seat " << st.getId() << ":\n";
        std::cout << st.getType() << " seat priced at " << st.getPrice() << "";
        std::cout << "Seat occupied: " << st.getOccupationStatus();
    }
}


