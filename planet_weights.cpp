#include <iostream>
#include <string>
#include <iomanip>

int main() {
    // Take in the object's name:
    std::cout << "Enter your object's name:\n";
    std::string user_object;
    std::cin >> user_object;
    std::cout << "Your object is: " << user_object << "\n";

    // Take in the objects weight as a double:
    std::cout << "Now enter the weight of the object in kilograms:\n";
    double object_weight;
    std::cin >> object_weight;
    std::cout << "Your object's weight: " << std::fixed << std::setprecision(2) << object_weight << " kilograms.\n";


    return 0;
}