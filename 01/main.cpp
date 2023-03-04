// 5. Домашнее задание к занятию «Пирамиды и деревья поиска»
// Задача 1. Вывод пирамиды на массиве
// Вам нужно реализовать на консоль функцию вывода целочисленной пирамиды, реализованной на массиве.

#include <iostream>

#include "print.h"

enum class PiramidLevels
{
    levelRoot, level1, level2, level3, level4, leve5
};



int main()
{
    setlocale(LC_ALL, "Russian");
    std::srand(std::time(nullptr)); // Начальное значение для генератора случайных чисел

    int arrSize = 3 + rand() % 11;
    
    // Создаем массив
    int* arr = new int[arrSize] {};
    
    // Заполняем массив рандомными числами
    for (int i = 0; i < arrSize; i++)
    {
        arr[i] = rand() % 55;
    }
    
    PrintArray(arr, arrSize);
 
    PrintPiramid(arr, arrSize);
    
    delete[] arr;  // Удаляем массив
    arr = nullptr;  
    
    std::cout << "\nHello World!\n";
}
