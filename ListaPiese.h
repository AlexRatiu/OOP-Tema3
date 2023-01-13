//
// Created by Alex on 1/9/2023.
//

#ifndef OOP_LISTAPIESE_H
#define OOP_LISTAPIESE_H
#include<iostream>


template<typename T>class ListaPiese {
    T* ptr;
    int dim;
public:
    ListaPiese(T arr[], int s);
    void print();
};

template<typename T> ListaPiese<T>::ListaPiese(T arr[],int s){
    ptr = new T[s];
    dim=s;
    for(int i=0; i<dim; i++)
        ptr[i]=arr[i];
}

template<typename T>void ListaPiese<T>::print(){
    for(int i=0;i<dim;i++)
        std::cout << " " << *(ptr+i);
    std::cout<<std::endl;
}

#endif //OOP_LISTAPIESE_H
