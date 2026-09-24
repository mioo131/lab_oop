#include <iostream>
#include <cstdlib> 
#include <ctime> 

void fillArray(int (&arr)[10]){
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

void swapElements(int (&arr)[10], const int& idx1, const int& idx2)
{
    if (idx1 < 0 || idx1 >= 10 || idx2 < 0 || idx2 >= 10)
    {
        std::cout << "swapElements: индекс вне диапазона" << std::endl;
        return;
    }

    int temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}

void multiplyByTwo(int (&arr)[10])
{
    for (int& x : arr)
    {
        x *= 2;
    }
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    int numbers[10];

    std::cout << "Заполняем массив случайными числами" << std::endl;
    fillArray(numbers);
    printArray(numbers);

    std::cout << "--- Меняем местами элементы [0] и [9] ---" << std::endl;
    swapElements(numbers, 0, 9);
    printArray(numbers);

    std::cout << "Умножаем каждый элемент на 2" << std::endl;
    multiplyByTwo(numbers);
    printArray(numbers);

    return 0;
}