#include "print.h"



void PrintArray(int* arr, const int arrSize)
{
    std::cout << "Исходный массив:";
   
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << " ";
        std::cout << arr[i];
    };

    std::cout << std::endl;
};

//void PrintValueArray(int* arr, const int arrSize, int arrIndex)
//{
//    std::cout << "Уровень: " << levelsOfPiramid << ". Left(" << arr[arrIndex] << ")" << ". Значение: " << arr[2 * i + 1] << std::endl;
//    std::cout << "Уровень: " << levelsOfPiramid << ". Right(" << arr[arrIndex] << ")" << ". Значение: " << arr[2 * i + 2] << std::endl;
//
//};


void PrintPiramid(int* arr, const int arrSize)
{
    int piramidLevel = 0;

    std::cout << "Пирамида:\n";
    std::cout << "Уровень: " << piramidLevel++ << ". Root. Значение: " << arr[0] << std::endl;
        
    int levelsOfPiramid = arrSize / log2(arrSize);

    std::cout << "levelsOfPiramid: " << levelsOfPiramid << std::endl;

    do
    {
        ///if( => arrSize)


        for (int i = 0; i < std::pow(2, piramidLevel); i++)
        {

            int count = piramidLevel;
            int kkk = std::pow(2, count);

            while (kkk > 1)
            {
                std::cout << "Уровень: " << piramidLevel - 1 << ". Left(" << arr[i] << ")" << ". Значение: " << arr[2 * i + 1] << std::endl;

                std::cout << "Уровень: " << piramidLevel - 1 << ". Right(" << arr[i] << ")" << ". Значение: " << arr[2 * i + 2] << std::endl;
                count = kkk--;
            }
            

            

            //std::cout << "Уровень: " << i + 1 << "Left(" << 2 * i + 1 << ")" << "Значение: " << arr[i] << std::endl;



            //if (arrSize = )
            //    std::cout << "Уровень: " << i;

            //
            //if ((2*i + 1) / 2)
            //
            //std::cout << " ";
            //std::cout << arr[i] << std::endl;

            ////2i+1 - нечет
            ////2i+2 - чет





        };
        piramidLevel++;

    } while (piramidLevel <= levelsOfPiramid);

    std::cout << std::endl;



};