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

//Prints a checkerboard with start of the height and width given
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

//Print a cross pattern with * of the size given
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

//Prints increasing number of * every row until the length is reached
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

//Print decreasing number of * as the row increased starts with the number of 
//stars equal to length length
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

//Prints checkerboard with the given height and weigh with 3x3 *
void checkerboard3x3(int height, int width)
{
    for(int row = 0; row < height; row++)
    {
        for(int col = 0; col < width; col++)
        {
            if((row/3)%2 != 0) //if the row is odd it enters
            {
                if((col/3)%2 != 0) // if the col is odd star is printed
                {
                    std::cout<<"*";
                }
                else // otherwise it prints a space
                {
                    std::cout<<" ";
                }
            }
            else //if the row is even it enter this part
            {
                if((col/3)%2 != 0) //if the col is even it print a space 
                {
                    std::cout<<" ";
                }
                else //otherwise it print a star is printed
                {
                    std::cout<<"*";
                }
            }
        }
        std::cout<<"\n";
    }
}