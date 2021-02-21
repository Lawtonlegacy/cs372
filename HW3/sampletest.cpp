// Robert Lawton
// CS 372 HW3 - Modern C++ Feature
// 2/20/2021

#include <iostream>
#include <random>
#include <string>
#include <iterator>
#include <algorithm>

// This is a program that demonstrates the use of std::sample which was introduced
// in C++17. It selects n random elements from a sequence.

// I've created a function that takes a string and returns a random substring
// of characters in the input string based off the requested length.
std::string randSubstring(std::string & input, int & n){
    std::string output;
    std::sample(input.begin(), input.end(), std::back_inserter(output),
                n, std::mt19937{std::random_device{}()});
    return output;
}
 
int main()
{   
    std::string userInput;
    int requestedLength;
    std::cout << "Enter a string you would like to have a random substring of: \n";
    std::getline(std::cin, userInput);
    std::cout << "Enter a number length of requested substring: ";
    std::cin >> requestedLength;
    std::cout << "Here is your random substring: ";
    std::cout << randSubstring(userInput,requestedLength);
    return 0;
}