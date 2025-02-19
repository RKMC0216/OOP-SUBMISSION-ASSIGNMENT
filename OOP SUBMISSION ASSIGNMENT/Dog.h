#pragma once
#include <string>
#include <iostream>

class Dog {
public:
    
    std::string breed;
    std::string color;
    double height;
    double weight;

    
    Dog(std::string br, std::string col, double h, double w)
        : breed(br), color(col), height(h), weight(w) {
    }

    
    void shake() {
        std::cout << "The dog shakes its paw." << std::endl;
    }

    void sit() {
        std::cout << "The dog sits down." << std::endl;
    }

    void layDown() {
        std::cout << "The dog lays down." << std::endl;
    }
};

