// 5. Домашнее задание к занятию «Пирамиды и деревья поиска»
// Задача 2. «Путешествие» по пирамиде Вам нужно организовать «путешествие» пользователя по пирамиде.
// Дан массив, в котором хранится пирамида. Ваша задача — дать пользователю возможность «путешествовать» по ней.

#include <iostream>
#include "print.h"
#include "journeyThroughThePyramid.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    std::srand(std::time(nullptr)); // Начальное значение для генератора случайных чисел

    int arrSize = 5 + rand() % 21;

    //Создаем массив
    int* arr = new int[arrSize] {};
    
    // Заполняем массив рандомными числами
    for (int i = 0; i < arrSize; i++)
    {
        arr[i] = rand() % 55;
    }





    
    PrintArray(arr, arrSize);
    PrintPyramid(arr, arrSize);

    journeyThroughThePyramid(arr, arrSize);

    delete[] arr;  // Удаляем массив
    arr = nullptr;  
}
