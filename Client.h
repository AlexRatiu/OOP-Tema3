//
// Created by Alex on 1/6/2023.
//

#ifndef OOP_CLIENT_H
#define OOP_CLIENT_H
#include <string>

class Client {
    std::string nume;
    int varsta;
    int ID_client;
    std::string sex;
public:
    Client(std::string nume, int varsta, int idClient, std::string sex);

    Client();

    virtual ~Client();

    [[nodiscard]] const std::string &getNume() const;

    [[nodiscard]] int getVarsta() const;

    [[nodiscard]] int getIdClient() const;

    [[nodiscard]] const std::string &getSex() const;

    void setNume(const std::string &nume);

    void setVarsta(int varsta);

    void setIdClient(int idClient);

    void setSex(const std::string &sex);

    friend std::ostream &operator<<(std::ostream &os, const Client &client);

    friend std::istream &operator>>(std::istream &is, Client &client);

    Client &operator=(const Client &rhs);
};


#endif //OOP_CLIENT_H
