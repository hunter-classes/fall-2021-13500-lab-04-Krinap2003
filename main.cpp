/*
Author: Krina Patel
Instructor: Proffesor Mike Zamansky
Assignment: Lab 4
*/
#include <iostream>
#include "funcs.h"

int main()
{
    //Testing Task A
    std::cout<<"Task A \n";
    std::cout<<"Box width = 5, height = 4 \n";
    box(5, 4);
    std::cout<<"Box width = 7, height = 4 \n";
    box(7, 4);

    std::cout<<"\n -------------------------- \n";
    //Testing Task B
    std::cout<<"Task B \n";
    std::cout<<"Checketboard width=11, height=6 \n";
    checkerboard(6,11);
    std::cout<<"Checketboard width=4, height=8 \n";
    checkerboard(8,4);

    std::cout<<"\n -------------------------- \n";
    //Testing Task C
    std::cout<<"Task C \n";
    std::cout<<"Cross size = 8 \n";
    cross(8);
    std::cout<<"Cross size = 4 \n";
    cross(4);
    std::cout<<"Cross size = 10 \n";
    cross(10);

    std::cout<<"\n -------------------------- \n";
    //Testing Task D
    std::cout<<"Task D \n";
    std::cout<<"Size = 6 \n";
    lower(6);
    std::cout<<"Task D \n";
    std::cout<<"Size = 2 \n";
    lower(2);    
    std::cout<<"Task D \n";
    std::cout<<"Size = 12 \n";
    lower(12);

    std::cout<<"\n -------------------------- \n";
    //Testing Task E
    std::cout<<"Task E \n";
    std::cout<<"size = 5 \n";
    upper(5);
    std::cout<<"size = 7 \n";
    upper(7);
    std::cout<<"size = 3 \n";
    upper(3);

    std::cout<<"\n -------------------------- \n";
    //Testing Task F
    std::cout<<"Task F \n";
    std::cout<<"Trapazoid height = 5, width = 12 \n";
    trapezoid(5,12);
    std::cout<<"Trapazoid height = 3, width = 5 \n";
    trapezoid(3,5);
    std::cout<<"Trapazoid height = 7, width = 12 \n";
    trapezoid(7,12);

    std::cout<<"\n -------------------------- \n";
    //Testing Task G
    std::cout<<"Task G \n";
    //void checkerboard3x3(11, 16);
    
}