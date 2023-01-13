//
// Created by Alex on 1/9/2023.
//

#ifndef OOP_FABRICAANVELOPE_H
#define OOP_FABRICAANVELOPE_H
#include "Piese.h"
#include "Fabrica.h"
#include "Anvelope.h"


class FabricaAnvelope : public Fabrica {
public:
    Anvelope* creeaza_anvelopa() override{
        return new Anvelope;
    }


};


#endif //OOP_FABRICAANVELOPE_H
