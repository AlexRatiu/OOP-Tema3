//
// Created by Alex on 1/6/2023.
//

#include "Client.h"
#include <iostream>
#include <utility>

Client::Client(std::string nume, int varsta, int idClient, std::string sex) : nume(std::move(nume)), varsta(varsta),
                                                                                            ID_client(idClient),
                                                                                            sex(std::move(sex)) {}

Client::Client() {
    nume="invalid";
    varsta=-1;
    ID_client=0;
    sex="invalid";
}

Client::~Client() = default;

const std::string &Client::getNume() const {
    return nume;
}

int Client::getVarsta() const {
    return varsta;
}

int Client::getIdClient() const {
    return ID_client;
}

const std::string &Client::getSex() const {
    return sex;
}

void Client::setNume(const std::string &_nume) {
    Client::nume = _nume;
}

void Client::setVarsta(int _varsta) {
    Client::varsta = _varsta;
}

void Client::setIdClient(int _idClient) {
    ID_client = _idClient;
}

void Client::setSex(const std::string &_sex) {
    Client::sex = _sex;
}

std::ostream &operator<<(std::ostream &os, const Client &client) {
    os << "Numele clientului este: " << client.nume << std::endl;
    os << "Varsta clientului este: " << client.varsta << std::endl;
    os << "ID-ul clientului este: " << client.ID_client << std::endl;
    os << "Sexul clientului este: " << client.sex << std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, Client &client) {
    std::cout<<"Numele clientului este: ";
    is>>client.nume;
    std::cout<<"Varsta clientului este: ";
    is>>client.varsta;
    std::cout<<"ID-ul clientului este: ";
    is>>client.ID_client;
    std::cout<<"Sexul clientului este: ";
    is>>client.sex;
    return is;
}

Client &Client::operator=(const Client &rhs) = default;
