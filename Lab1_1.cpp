#include <iostream>
#include <cstdlib> 
#include <ctime> 

void fellArray(int (&arr)[10]){
    for (int& x : arr){
        x = rand() % 201 - 100;
    }
}

void printArray(const int (&arr)[10]){
    for (const auto& x : arr)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}