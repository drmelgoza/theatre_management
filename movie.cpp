#include <iostream>
#include <string>
#include <vector>
#include "movie.h"

class Movie {

    private:
        std::string name;
        std::string director;
        std::vector<std::string> cast;
        int year;

    public:
        Movie(std::string newName, std::string newDirector, std::vector<std::string> newCast) {
            name = newName;
            director = newDirector;
            cast = newCast;
        }

        std::string getName() {
            return name;
        }

        std::string getDirector() {
            return director;
        }

        std::vector<std::string> getCast() {
            return cast;
        }

        int getYear() {
            return year;
        }
};