#include <iostream>


class Person {

    public:
        Person(std::string name_in, std::string address_in, std::string email_in):
            name(name_in),
            address(address_in),
            email(email_in)
            {
            }

        std::string getName();

        std::string getaddress();

        std::string getEmail();

    protected:
        std::string name;
        std::string address;
        std::string email;
};

class Professor: public Person {
    public:
        Professor(std::string name_in, std::string address_in, std::string email_in, std::string iban_in): 
            Person(name_in, address_in, email_in), 
            iban(iban_in)
            {
            }

        std::string getIban();
        
    private:
        std::string iban;
};

class Student: public Person {
    public:
        Student(std::string name_in, std::string address_in, std::string email_in, double averageGrade_in): 
            Person(name_in, address_in, email_in), 
            averageGrade(averageGrade_in)
            {
            }

        double getAverageGrade();
        
    private:
        double averageGrade;
};

class MailHandler {
    public:
        MailHandler();

        void writeMail(Person receiver, std::string txt);
};