// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/12/15
// Generates 10 random numbers then uses a function
// To calculate the number with the highest value.
// Displays it to user.

#include <time.h>
#include <array>
#include <iostream>
#include <random>

// Function to find the max value
template <size_t MAX_ARRAY_SIZE>
int Find_Max_Value(std::array<int, MAX_ARRAY_SIZE> arrayOfInt) {
    int maxNumber = -1;
    int counter, currentNumber;
    // For and IF ELSE loop to calculate the max value
    for (int counter = 0; counter < 10; counter++) {
        currentNumber = arrayOfInt[counter];
        if (currentNumber > maxNumber) {
            maxNumber = currentNumber;
        }
    }
    // Return it back to main()
    return maxNumber;
}
int main() {
    // Variables
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;
    const int MAX_ARRAY_SIZE = 10;
    int maxNumber;
    int counter, randomNumber;
    std::array<int, MAX_ARRAY_SIZE> arrayOfIntegers;

    // FOR loop to add the random numbers to the list
    for (counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // creating a random number
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);
        // random number variable
        randomNumber = idist(rgen);
        arrayOfIntegers[counter] = randomNumber;
        std::cout << "Adding " << randomNumber << " To the list\n";
    }

    // Calling and displaying the function and function output
    maxNumber = Find_Max_Value(arrayOfIntegers);
    std::cout << "The maximum number is " << maxNumber;
}
