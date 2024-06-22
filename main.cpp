// The csv file:
// Data is comma separated
// For European countries
// Data captured from January 1, 1980 until December 31, 2019
// Data points are captured hourly. The first data point of a day begins at midnight, and represented by T00:00:00Z all the way to T23:00:00Z.
// 24 Data points per day per country
// Point represent temperature in degrees Celsius
// Row 1 is the header (date, country id)
// Each value in the row is separated by a comma

//I need to create a technical analysis toolkit for visualising and predicting weather data using a command line interface
// Programming Language --std=c++11

// Task 1: compute candlestick data from the temperature data for a particular country in Europe between 1980-2019. 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

// Function to compute candlestick data from temperature data

int main() {
    
    // country_id;
    // std::cout << "Enter the country id: ";
    // std::cin >> country_id;

    // std::ifstream file("data.csv");
    // std::string line;

    // // Skip the header row
    // std::getline(file, line);

    // std::vector<std::vector<double>> data;
    
    // while (std::getline(file, line)) {
    //     std::stringstream ss(line);
    //     std::string token;
    //     std::vector<double> row;
    //     while (std::getline(ss, token, ',')) {
    //         row.push_back(std:std::string:stod(token));
    //     }
    //     if (row[1] == std::stod(country_id)) {
    //         data.push_back(row);
    //     }
    // }

}
