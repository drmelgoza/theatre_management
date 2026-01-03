#include <string>
#define SEAT_H


class Seat{

        private:
                std::string id;
                std::string type;
                bool isOccupied;
                double price;
        
        public:
                Seat(std::string newId, std::string newType, bool occupationStatus, double newPrice);
                std::string getId();
                std::string getType();
                bool getOccupationStatus();
                double getPrice();
};
