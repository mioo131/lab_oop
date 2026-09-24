#include <iostream>
#include <cstdlib>
#include <ctime>

void process(int*& arr, int& size){
    int negIndex = -1;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < 0)
        {
            negIndex = i;
            break;
        }
    }
    if (negIndex == -1)
    {
        std::cout << "Отрицательных элементов не найдено, массив не изменяется." << std::endl;
        return;
    }
}

int main()
{
        int n;
        std::cout << "Введите размер массива N: ";
        std::cin >> n;
    
        if (n <= 0)
        {
            std::cout << "Размер массива должен быть положительным." << std::endl;
            return 1;
        }
    
        return 0;
}