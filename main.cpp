#include <iostream>
#include "Client.h"
#include "TokenClient.h"
#include <cstdint>
#include "Fabrica.h"
#include "FabricaAnvelope.h"
#include "FabricaScaune.h"
#include"ListaPiese.h"

int main() {
    uint32_t k1 = TokenClient::instanta()->urm();
    std::cout<<k1<<std::endl;
    uint32_t k2 = TokenClient::instanta()->urm();
    std::cout<<k2<<std::endl;
    Fabrica* fabrica1 = new FabricaAnvelope();
    Piese *f1[3];

    f1[0]=fabrica1->creeaza_anvelopa();
    f1[1]=fabrica1->creeaza_anvelopa();
    f1[2]=fabrica1->creeaza_anvelopa();

    for(int i =0; i<3;i++)
        std::cout<<*f1[i];

    Fabrica* fabrica2 = new FabricaScaune();
    Piese *f2[3];

    f2[0]=fabrica2->creeaza_scaune();
    f2[1]=fabrica2->creeaza_scaune();
    f2[2]=fabrica2->creeaza_scaune();

    for(int i =0; i<3;i++)
        std::cout<<*f2[i];

    int arr[3]={1,2,3};
    ListaPiese<int> a(arr,3);
    a.print();

    Anvelope* anv2 = dynamic_cast<Anvelope*>(f1[0]->cloneaza());
    std::cout<<*anv2<<std::endl;

    Scaune* sc2 = dynamic_cast<Scaune*>(f2[0]->cloneaza());
    std::cout<<*sc2<<std::endl;
    return 0;
}
