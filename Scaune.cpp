//
// Created by Alex on 1/8/2023.
//

#include "Scaune.h"
#include <iostream>
#include <utility>

Scaune::Scaune(const std::string &producator, int id, std::string material, const std::string &tipScaun) : Piese(
        producator, id), material(std::move(material)), tip_scaun(tipScaun) {}

Scaune::Scaune() : Piese() {
    material = "invalid";
    tip_scaun= "invalid";
}

Scaune::~Scaune() = default;

Scaune::Scaune(const Scaune &rhs) : Piese(rhs) {
    material=rhs.material;
    tip_scaun=rhs.tip_scaun;

}

const std::string &Scaune::getMaterial() const {
    return material;
}

const std::string &Scaune::getTipScaun() const {
    return tip_scaun;
}

void Scaune::setMaterial(const std::string &_material) {
    Scaune::material = _material;
}

void Scaune::setTipScaun(const std::string &_tipScaun) {
    tip_scaun = _tipScaun;
}

void Scaune::afisare() {
    std::cout<<"Materialul scaunului este: "<<material<<std::endl;
    std::cout<<"Tipul scaunului este: "<<tip_scaun<<std::endl;

}

std::ostream &operator<<(std::ostream &os, const Scaune &scaune) {
    os << static_cast<const Piese &>(scaune) << "Materialul scaunului este: " << scaune.material << std::endl;
    os << "Tipul scaunului este: " << scaune.tip_scaun << std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, Scaune &scaune) {
    std::cout<<"Materialul scaunului este: ";
    is>>scaune.material;
    std::cout<<"Tipul scaunului este: ";
    is>>scaune.tip_scaun;
    return is;
}

Scaune &Scaune::operator=(const Scaune &rhs) {
    material=rhs.material;
    tip_scaun=rhs.tip_scaun;
    return *this;
}
