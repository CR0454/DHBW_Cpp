#include <iostream>

enum class Nationality {de, en, it, es};

class Person {
    public:
        Person(std::string name_in, Nationality nationality_in): 
            name(name_in),
            nationality(nationality_in)
            {}

        std::string getName();

        void greet(Person greetedPerson);

    private:
        std::string name;
        Nationality nationality;

};