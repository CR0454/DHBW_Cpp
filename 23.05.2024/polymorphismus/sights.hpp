#include "place.hpp"

class Sight: public Place {
    public:
        Sight(std::string name_in, int x_in, int y_in, std::string attraction_in): 
            Place(
                name_in, 
                x_in,
                y_in),
            attraction(attraction_in)
            {}
        
        void visit() override;

    private:
        std::string attraction;
};