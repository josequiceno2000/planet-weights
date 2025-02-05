#include <iostream>
#include <string>
#include <iomanip>

int main() {
    // Take in the object's name:
    std::cout << "Enter your object's name:\n";
    std::string user_object;
    std::cin >> user_object;
    std::cout << "\nYour object is: " << user_object << "\n";

    // Take in the objects weight as a double:
    std::cout << "\nNow enter the weight of " << user_object << " in kilograms:\n";
    double object_weight;
    std::cin >> object_weight;
    std::cout << "\nYour object's weight: " << std::fixed << std::setprecision(2) << object_weight << " kilograms.\n\n";

    // Calculate the weights
    double venus_weight = object_weight * 0.90;
    double mercury_weight = object_weight * 0.38;
    double earth_weight = object_weight * 1.00;
    double mars_weight = object_weight * 0.38;
    double jupiter_weight = object_weight * 2.34;
    double saturn_weight = object_weight * 0.93;
    double uranus_weight = object_weight * 0.88;
    double neptune_weight = object_weight * 1.12;

    // Output the weights
    std::cout << user_object << " weighs:\n";
    std::cout << mercury_weight << " kg. on MERCURY.\n";
    std::cout << mars_weight << " kg. on MARS.\n";
    std::cout << uranus_weight << " kg. on URANUS.\n";
    std::cout << venus_weight << " kg. on VENUS.\n";
    std::cout << saturn_weight << " kg. on SATURN.\n";
    std::cout << earth_weight << " kg. on EARTH.\n";
    std::cout << neptune_weight << " kg. on NEPTUNE.\n";
    std::cout << jupiter_weight << " kg. on JUPITER.\n";


    return 0;
}