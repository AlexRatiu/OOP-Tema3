//
// Created by Alex on 1/8/2023.
//

#ifndef OOP_ANVELOPE_H
#define OOP_ANVELOPE_H
#include "Piese.h"
#include <string>
#include <ostream>


class Anvelope : public Piese{
    int diametru;
    int latime;
    int talon;
    std::string anotimp;

public:
    Anvelope(const std::string &producator, int id, int diametru, int latime, int talon, const std::string &anotimp);

    Anvelope();

    ~Anvelope() override;

    Anvelope(const Anvelope &rhs);

    int getDiametru() const;

    int getLatime() const;

    int getTalon() const;

    const std::string &getAnotimp() const;

    void setDiametru(int diametru);

    void setLatime(int latime);

    void setTalon(int talon);

    void setAnotimp(const std::string &anotimp);

    void afisare() override;

    friend std::ostream &operator<<(std::ostream &os, const Anvelope &anvelope);

    friend std::istream &operator>>(std::istream &is, Anvelope &anvelope);

    Anvelope &operator = (const Anvelope &rhs);

    Anvelope* cloneaza() const override {
        Anvelope* anv = new Anvelope(producator,id,diametru,latime,talon,anotimp);
        return anv;
    }

};


#endif //OOP_ANVELOPE_H
