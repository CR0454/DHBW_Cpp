#include <iostream>
#include <random>



#ifndef KONTO
#define KONTO

class Konto {

    public:
        Konto(std::string typ, double guthaben, double zinssatz):
            m_typ(typ),
            m_guthaben(guthaben),
            m_zinssatz(zinssatz)
            {
                
                std::random_device device;
                std::mt19937 generator(device());
                std::uniform_int_distribution<int> distribution(100000, 999999);
                m_number = distribution(generator);         //verschiedene Kontotypen besser über Kindsklassen
                if(typ == "Girokonto") {
                    giroCounter += 1;
                }
                else if(typ == "Tagesgeldkonto") {
                    tagesCounter += 1;
                }
                else if(typ == "Bausparvertrag") {
                    bausCounter += 1;
                }
            }

        void info();
        
        void einzahlen(double input);
        void auszahlen(double output);


        static int giroCounter;
        static int tagesCounter;
        static int bausCounter;

    private:
        int m_number;
        const std::string m_typ;
        const int m_BLZ = 1234567;
        double m_guthaben;
        double m_zinssatz;


};

#endif