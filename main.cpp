/* 
 * File:   main.cpp
 * Author: eamorrow
 *
 * Created on January 25, 2015, 11:24 PM
 */

#include <cstdlib>
#include <cmath>
#include <iostream>

/*
 * Project Euler 5
 */
int SmallestDivBy20()
{
    int num = 2520; // smallest divisible by 0-10
    bool divisible = false;
    
    while(!divisible)        
    {
        if(num%19 == 0)
        {
            if(num%18 == 0)
            {
                if(num%17 ==0)
                {
                    if(num%16 ==0)
                    {
                        if(num%15 ==0)
                        {
                            if(num%14 ==0)
                            {
                                if(num%13==0)
                                {
                                    if(num%12==0)
                                    {
                                        if(num%11==0)
                                        {
                                            divisible=true;
                                            return num;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        num+=20;
    }    
}

int main(int argc, char** argv) {
    std::cout<<SmallestDivBy20();

    return 0;
}

