#include <iostream>
#include <string>
#include <vector>
#include "seat.h"
#include "movie.h"
#include "screening.h"

using namespace std;

class Screening {

    private:
        vector<Seat> seats;
        Movie movie;
        string time;
        string date;
        bool isFull;

    public: 

        Screening (vector<Seat> newSeats, Movie newMovie, string newTime,
                    string newDate, bool new_occupancy_status) {
            seats = newSeats;
            movie = newMovie;
            time = newTime;
            date = newDate;
            isFull = new_occupancy_status;

        }

        double getOccupancyPercent() {
            return 0.0;
        }

        double getRevenue() {
            return 0.0;
        }

        int getTicketsSold() {
            return 0.0;
        }

        void asString() {
            
        }
    
};

