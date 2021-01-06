// Copyright (C) 2021 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on January 2021
// This program uses a function to calculate the
//     volume of a cylinder


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>


float CalculateVolume(float radius, float height) {
    // this function calculates the volume of a cylinder
    float volume;

    // process
    volume = M_PI * pow(radius, 2) * height;

    // output
    return volume;
}

main() {
    // this function gets base and height
    
    float volume;
    std::string radiusAsString;
    int radiusAsNumber;
    std::string heightAsString;
    int heightAsNumber;

    std::cout << "Enter radius (cm): ";
    std::cin >> radiusAsString;

    std::cout << "Enter height (cm): ";
    std::cin >> heightAsString;
    std::cout << "" << std::endl;

    // calls CalculateVolume with try and catch
    try {
        radiusAsNumber = std::stoi(radiusAsString);
        heightAsNumber = std::stoi(heightAsString);
        if (radiusAsNumber > 0 && heightAsNumber > 0) {
            volume = CalculateVolume(radiusAsNumber, heightAsNumber);
        
        // final output
        std::cout << "Volume: " << std::fixed
              << std::setprecision(3) << std::setfill('0')
              << volume << "cm³" << std::endl;
        } else {
            std::cout << "Dimensions must be positive" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid dimension" << std::endl;
        }
}
