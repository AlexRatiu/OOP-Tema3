//
// Created by Alex on 1/9/2023.
//

#ifndef OOP_FABRICASCAUNE_H
#define OOP_FABRICASCAUNE_H
#include "Piese.h"
#include "Fabrica.h"
#include "Scaune.h"

class FabricaScaune : public Fabrica {
public:
    Piese* creeaza_scaune(){
        return new Scaune;
    }

};


#endif //OOP_FABRICASCAUNE_H
