//
// Created by Alex on 1/6/2023.
//

#include "TokenClient.h"
TokenClient* TokenClient::copie=nullptr;
TokenClient *TokenClient::instanta() {
    if(!copie){
        copie=new TokenClient();
    }
    return copie;
}

uint32_t TokenClient::urm() {
    return token++;
}

TokenClient::TokenClient() : token(145321452) {}
