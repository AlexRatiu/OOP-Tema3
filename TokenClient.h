//
// Created by Alex on 1/6/2023.
//

#ifndef OOP_TOKENCLIENT_H
#define OOP_TOKENCLIENT_H
#include <cstdlib>
#include <cstdint>

class TokenClient {
public:
    static TokenClient * instanta ();
    uint32_t urm ();
private:
    TokenClient ();
    static TokenClient * copie;
    uint32_t token;
};



#endif //OOP_TOKENCLIENT_H
