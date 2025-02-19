#include <iostream>
#include <string>
#include "Dog.h"

int main() {
    
    Dog myDog("Husky", "Brown", 24.0, 65.0);

    // Displaying the properties
    std::cout << "Breed: " << myDog.breed << std::endl;
    std::cout << "Color: " << myDog.color << std::endl;
    std::cout << "Height: " << myDog.height << " inches" << std::endl;
    std::cout << "Weight: " << myDog.weight << " lbs" << std::endl;

    // Calling Behaviors
    myDog.shake();
    myDog.sit();
    myDog.layDown();

    return 0;
}
