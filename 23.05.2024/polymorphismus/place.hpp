#include <iostream>

#ifndef PLACE
#define PLACE


class Place {
    public:
        Place(std::string name_in, int x_in, int y_in): 
            name(name_in),
            x(x_in),
            y(y_in)
            {}

        virtual void visit();

    protected:
        std::string name;
        int x, y;

};


#endif