//
// Created by Alex on 1/8/2023.
//

#include "Anvelope.h"
#include <iostream>

Anvelope::Anvelope(const std::string &producator, int id, int diametru, int latime, int talon,
                   const std::string &anotimp) : Piese(producator, id), diametru(diametru), latime(latime),
                                                 talon(talon), anotimp(anotimp) {}

Anvelope::Anvelope() : Piese() {
    diametru=0;
    latime=0;
    talon=0;
    anotimp="invalid";
}

Anvelope::~Anvelope() {

}

Anvelope::Anvelope(const Anvelope &rhs) : Piese(rhs) {
    diametru=rhs.diametru;
    latime=rhs.latime;
    talon=rhs.talon;
    anotimp=rhs.anotimp;
}

int Anvelope::getDiametru() const {
    return diametru;
}

int Anvelope::getLatime() const {
    return latime;
}

int Anvelope::getTalon() const {
    return talon;
}

const std::string &Anvelope::getAnotimp() const {
    return anotimp;
}

void Anvelope::setDiametru(int _diametru) {
    Anvelope::diametru = _diametru;
}

void Anvelope::setLatime(int _latime) {
    Anvelope::latime = _latime;
}

void Anvelope::setTalon(int _talon) {
    Anvelope::talon = _talon;
}

void Anvelope::setAnotimp(const std::string &_anotimp) {
    Anvelope::anotimp = _anotimp;
}

void Anvelope::afisare() {
    std::cout<<"Diametrul anvelopei este: "<<diametru<<std::endl;
    std::cout<<"Latimea anvelopei este: "<<latime<<std::endl;
    std::cout<<"Talonul anvelopei este: "<<talon<<std::endl;
    std::cout<<"Sezonul anvelopei este: "<<anotimp<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const Anvelope &anvelope) {
    os << static_cast<const Piese &>(anvelope) << " diametru: " << anvelope.diametru << std:: endl;
    os << " latime: " << anvelope.latime << std:: endl;
    os << " talon: " << anvelope.talon << std:: endl;
    os << " anotimp: " << anvelope.anotimp << std:: endl;
    return os;
}

std::istream &operator>>(std::istream &is, Anvelope &anvelope) {
    std::cout<<"Diametrul anvelopei este: ";
    is>>anvelope.diametru;
    std::cout<<"Latimea anvelopei este: ";
    is>>anvelope.latime;
    std::cout<<"Talonul anvelopei este: ";
    is>>anvelope.talon;
    std::cout<<"Sezonul anvelopei este: ";
    is>>anvelope.anotimp;
    return is;


}

Anvelope &Anvelope::operator = (const Anvelope &rhs) {
    diametru=rhs.diametru;
    latime=rhs.latime;
    talon=rhs.talon;
    anotimp=rhs.anotimp;
    return *this;
}
