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

    std::cout<<"\n";
    //Testing Task B
    std::cout<<"Task B \n";
    std::cout<<"Checketboard width=11, height=6 \n";
    checkerboard(6,11);
    std::cout<<"Checketboard width=4, height=8 \n";
    checkerboard(8,4);

    std::cout<<"\n";
    //Testing Task C
    std::cout<<"Task C \n";
    std::cout<<"Cross size = 8 \n";
    cross(8);
    std::cout<<"Cross size = 4 \n";
    cross(4);
    std::cout<<"Cross size = 10 \n";
    cross(10);
    
}