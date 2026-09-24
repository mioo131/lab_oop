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

    std::cout << "Первый отрицательный элемент найден на индексе " << negIndex << std::endl;
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

        std::cout << "Заполняем массив случайными числами от -20 до 20:" << std::endl;
        for (int i = 0; i < n; ++i)
        {
            arr[i] = rand() % 41 - 20;
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        
        return 0;
}