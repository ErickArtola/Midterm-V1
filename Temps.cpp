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
        processUserOption(input);
    }
}

void Temps::printMenu()
{
    std::cout << "1. Compute Candlestick Summary" << std::endl;
    std::cout << "2. Display Text-Based Candlestick Plot" << std::endl;
    std::cout << "3. Filter Data and Display Text-Based Candlestick Plot" << std::endl; //add filter options
    std::cout << "4. Predict Future Temperatures" << std::endl; //generate predictions with linear regression
    std::cout << "5. Exit" << std::endl;
}


int Temps::getUserOption()
{
    int userOption = 0;
    
    std::string line;
    std::cout << "Type 1-4" << std::endl;
    std::getline(std::cin, line);
    
    try{
        userOption = std::stoi(line);
    }catch(const std::exception& e)
    {
        // 
    }
   
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

void Temps::processUserOption(int userOption)
{
    if (userOption == 0)
    {
        std::cout << "Invalid choice. Choose 1-4" << std::endl;
    }

    if (userOption == 1)
    {
        candlestickSummary();
    }

    if (userOption == 2)
    {
        candlestickPlot();
    }

    if (userOption == 3)
    {
        filterDisplay();
    }
    if (userOption == 4)
    {
        predictFuture();
    }
}