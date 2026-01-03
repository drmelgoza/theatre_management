#include <string>
#include <vector>

#define MOVIE_H


class Movie{

    public:
        std::string getName();
        std::string getDirector();
        std::vector<std::string> getCast();
        int getYear();
};
