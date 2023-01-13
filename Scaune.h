//
// Created by Alex on 1/8/2023.
//

#ifndef OOP_SCAUNE_H
#define OOP_SCAUNE_H

#include <ostream>
#include "Piese.h"
#include "string"


class Scaune : public Piese {
    std::string material;
    std::string tip_scaun;
public:
    Scaune(const std::string &producator, int id, std::string material, const std::string &tipScaun);

    Scaune();

    ~Scaune() override;

    Scaune(const Scaune &rhs);

    const std::string &getMaterial() const;

    const std::string &getTipScaun() const;

    void setMaterial(const std::string &material);

    void setTipScaun(const std::string &tipScaun);

    void afisare() override;

    friend std::ostream &operator<<(std::ostream &os, const Scaune &scaune);

    friend std::istream &operator>>(std::istream &is, Scaune &scaune);

    Scaune &operator=(const Scaune &rhs);

    Scaune* cloneaza() const override {
        Scaune* sc = new Scaune(producator,id,material,tip_scaun);
        return sc;
    }

};


#endif //OOP_SCAUNE_H
