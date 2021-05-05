// Copyright (c) Year Your Name All rights reserved.
//
// Created by: Liam Csiffary
// Date: May 5, 2021
// This program calculates the circumference
// of a circle using tau and not pi


#include <iostream>
#include <iomanip>

int main() {
    // declare constants
    const float TAX = 1.13;
    const float LABOUR_COST = 2;
    const float TOPPING_COST = 1.5;
    const float RENTAL_COST = 2.25;

    // declare vars
    float diam;
    float subtotal;
    float total;

    // get diameter from user
    std::cout << "What is the diameter of your pizza: ";
    std::cin >> diam;

    // calculating the subtotal and total
    subtotal = LABOUR_COST + RENTAL_COST + TOPPING_COST*diam;

    total = subtotal * TAX;

    std::cout << "\nThe subtotal is: $" << std::fixed <<\
    std::setprecision(2)<< std::setfill('0') << subtotal << std::endl;

    std::cout << "The total with HST is: $" << std::fixed <<\
    std::setprecision(2) << std::setfill('0') << total << std::endl;
}
