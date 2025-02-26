// Copyright 2025 Viviana Hurtado
// Created by: Viviana Hurtado
// Date: Feb 24, 2025
// This program calculates the area and perimeter of a rectangle
// with the information given by the user

#include <iomanip>  // For output formatting
#include <iostream>


int main() {
    // Declare variables to store rectangle dimensions
    double length, width;

    // Get user input for length and width
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Formulas to calculate area and perimeter
    double area = length * width;
    double perimeter = 2 * (length + width);

    // Set precision for floating-point output
    std::cout << std::fixed << std::setprecision(2);

    // Display the results
    std::cout << "The area of the rectangle is: " << area << "\n";
    std::cout << "The perimeter of the rectangle is: " << perimeter << "\n";

    return 0;
}
