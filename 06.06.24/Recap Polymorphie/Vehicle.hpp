#include <iostream>

#ifndef VEHICLE
#define VEHICLE

class Vehicle {

    public:
        Vehicle(int power, std::string brand):
            m_power(power),
            m_brand(brand)
            {} 

        virtual void displayInfo();

        virtual void accelerate();

        virtual ~Vehicle(){}

    protected:
        int m_power;
        std::string m_brand;
};

class Car: public Vehicle {
    public:
        Car(int power, std::string brand, int numberOfDoors): 
            Vehicle(power, brand),
            m_numberOfDoors(numberOfDoors)
            {
            }
        
        void accelerate() override;

        void displayInfo() override;

    private:
        int m_numberOfDoors;
};

class Motorbike: public Vehicle {

    public:
        Motorbike(int power, std::string brand, std::string engineType):
            Vehicle(power, brand),
            m_engineType(engineType)
            {}

        void displayInfo() override;

        void accelerate() override;

    private:
        std::string m_engineType;
};

#endif