#pragma once

class Temps
{
    public:
        Temps();
        void init();
        
    private:
        void printMenu();
        int getUserOption();
        void processUserOption(int userOption);
};