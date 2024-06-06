#include "person.hpp"

void MailHandler::writeMail(Person receiver, std::string txt) {

    }

std::string Person::getName() {
    return name;
}

std::string Person::getaddress() {
    return address;
}

std::string Person::getEmail() {
    return email;
}

std::string Professor::getIban() {
    return iban;
}

double Student::getAverageGrade() {
        return averageGrade;
    }