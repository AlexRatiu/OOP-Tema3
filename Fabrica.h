//
// Created by Alex on 1/9/2023.
//

#ifndef OOP_FABRICA_H
#define OOP_FABRICA_H
#include "Piese.h"


class Fabrica {
public:
    virtual Piese* creeaza_anvelopa();
    virtual Piese* creeaza_scaune();

};


#endif //OOP_FABRICA_H
