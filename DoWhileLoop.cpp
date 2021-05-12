// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program multiply integers using a while loop

#include <iostream>
#include <string>

int main() {
    // this function multiply integer using a while loop
    std::string integerAsString;
    int integerAsNumber;
    int loopCounter = 1;
    int factorial = 1;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> integerAsString;
    std::cout << "" << std::endl;

    // process and output
    try {
        integerAsNumber = std::stoi(integerAsString);
        if (integerAsNumber > 0) {
            do {
                factorial = factorial * loopCounter;
                loopCounter = loopCounter + 1;
            }
            while (loopCounter <= integerAsNumber); {
            }
            std::cout << integerAsNumber << "! = " << factorial;
        } else {
            std::cout << "This is a negative number";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not valid input.";
    }
}
