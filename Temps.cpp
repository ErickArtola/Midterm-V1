#include <iostream>
#include <vector>
#include <string>

#include "Temps.h"

Temps::Temps ()
{
    //ctor
}

void Temps::init()
{
    int input;

    while(true)
    {
        
        printMenu();
        input = getUserOption();
        processOption(input);
    }
}