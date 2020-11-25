// Copyright (c) 2020 Wenda Zhao All rights reserved
//
// Created by Wenda Zhao
// Created on Nov 2020
// This program calculates the cost of pizza

#include <iostream>
#include <iomanip>

int main() {
    // this funtion calculates the cost of pizza
    const float LABOR = 0.75;
    const float RENT = 1.00;
    const float COST_PER_INCH = 0.50;
    const float HST = 0.13;
    float diameter;
    float sub_total;
    float total;


    // input
    std::cout << "Enter the diameter of the pizza you would like (inch): ";
    std::cin >> diameter;

    // process
    sub_total = LABOR + RENT + (diameter * COST_PER_INCH);
    total = sub_total + (sub_total * HST);

    // output
    std::cout << "" << std::endl;
    std::cout << "The cost for a " << diameter << " inch pizza is: $"
                 << std::fixed << std::setprecision(2) << std::setfill('0')
                 <<total << "," << std::endl;
}
