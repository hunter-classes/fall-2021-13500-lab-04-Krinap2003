#include <iostream>
#include <cmath>
#include "funcs.h"

//Take in two int parameters for height and width
//prints a box of that parameter with *
void box(int width, int height)
{
    for(int i = 0; i < height; i++)
    {
        for(int y = 0; y < width; y++)
        {
            std::cout<<"* ";
        }
        std::cout<<"\n";
    }
}

void checkerboard(int height, int width)
{
    for(int row = 0; row < height; row++)
    {
        for(int col = 0; col < width; col+=2)
        {
            if(row % 2 != 0)
            {
                std::cout<<" *";
            }
            else
            {
                std::cout<<"* ";
            }
        }
        std::cout<<"\n";
    }
}

void cross(int size)
{
    for(int row = 1; row <= size; row++)
    {
        for(int col = 1; col <= size; col++)
        {
            if(col == row || col == (size+1)-row)
            {
                std::cout<<"*";
            }
            else{
                std::cout<<" ";
            }
        }
        std::cout<<"\n";
    }
}

void lower(int length)
{
    for(int row = 0; row <= length; row++)
    {
        for(int col = 0; col < row; col++)
        {
            std::cout<<"* ";
        }
        std::cout<<"\n";
    }
}

void upper(int length)
{
    for(int row = length; row > 0; row--)
    {
        for(int spc = length - row; spc > 0; spc--)
        {
            std::cout<<" ";
        }
        for(int col = row; col > 0; col--)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
}

//Takes in two int paramets for height and width
// and the trapezoid of that size with *
void trapezoid(int height, int width)
{
     for(int row = 0; row < height; row++)
    {
        if(height % 6 == 1)
        {
            std::cout << "Impossible shape!" <<std::endl;
            break;
        }
        for(int spc = 0; spc < row; spc++)
        {
             std::cout<<" ";
        }
        for(int col = width; col > 0; col--)
        {
            std::cout<<"*";
        }
            width = width - 2;
            std::cout<<"\n";
    }
}

void checkerboard3x3(int height, int width)
{
    for(int row = 0 ; row < height; row++)
    {
        for(int col = 0; col < width; col++)
        {
            
        }
    }
}