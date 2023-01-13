//
// Created by Alex on 1/8/2023.
//

#include "Piese.h"
#include <iostream>

Piese::Piese(const std::string &_producator, int _id) : producator(_producator), id(_id) {}

Piese::Piese() {
    producator = "invalid";
    id=0;
}

Piese::~Piese() {

}

Piese::Piese(const Piese &rhs) {
    producator=rhs.producator;
    id=rhs.id;

}

const std::string &Piese::getProducator() const {
    return producator;
}

int Piese::getId() const {
    return id;
}

void Piese::setProducator(const std::string &_producator) {
    Piese::producator = _producator;
}

void Piese::setId(int _id) {
    Piese::id = _id;
}

std::ostream &operator<<(std::ostream &os, const Piese &piese) {
    os << "Producatorul piesei este: " << piese.producator <<std::endl;
    os << " ID-ul piesei este: " << piese.id<<std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, Piese &piese) {
    std::cout<<"Producatorul piesei este: ";
    is>>piese.producator;
    std::cout<<"ID-ul piesei este: ";
    is>>piese.id;
    return is;
}

Piese &Piese::operator=(const Piese &rhs) = default;
