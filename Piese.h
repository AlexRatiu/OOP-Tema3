//
// Created by Alex on 1/8/2023.
//

#ifndef OOP_PIESE_H
#define OOP_PIESE_H


#include <string>

class Piese {
protected:
std::string producator;
int id;
public:
    Piese(std::string producator, int id);

    Piese();

    virtual ~Piese();

    Piese(const Piese &rhs);

    [[nodiscard]] const std::string &getProducator() const;

    [[nodiscard]] int getId() const;

    void setProducator(const std::string &producator);

    void setId(int id);

    virtual void afisare()=0;

    Piese& operator =(const Piese &rhs);

    friend std::ostream &operator<<(std::ostream &os, const Piese &piese);

    friend std::istream &operator >>(std::istream &is, Piese &piese);

    [[nodiscard]] virtual Piese* cloneaza() const = 0;
};


#endif //OOP_PIESE_H
