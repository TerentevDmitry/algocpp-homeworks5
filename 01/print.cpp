#include "print.h"



void PrintArray(int* arr, const int arrSize)
{
    std::cout << "�������� ������:";
   
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << " ";
        std::cout << arr[i];
    };

    std::cout << std::endl;
};


void PrintPiramid(int* arr, const int arrSize)
{
    int piramidLevelNow = 0;

    std::cout << "��������:\n";
    std::cout << "piramidLevelNow: " << piramidLevelNow << std::endl;

    std::cout << "�������: " << piramidLevelNow++ << ". Root. ��������: " << arr[0] << std::endl;
    //std::cout << "�������: " << piramidLevelNow << ". Left(" << arr[0] << ")" << ". ��������: " << arr[1] << std::endl;
    //std::cout << "�������: " << piramidLevelNow << ". Right(" << arr[0] << ")" << ". ��������: " << arr[2] << std::endl;
        
    int levelsOfPiramid = arrSize / log2(arrSize);

    std::cout << "levelsOfPiramid: " << levelsOfPiramid << std::endl;

    //std::cout << "piramidLevelNow: " << piramidLevelNow << std::endl;
    
    int count = piramidLevelNow;
    
    int count2 = arrSize;
     
    for (int i = 0; i <= count2 / 2 ; i++)
    {
        if (count2 > 1)
        {
            std::cout << "�������: " << piramidLevelNow << ". Left(" << arr[i] << ")" << ". ��������: " << arr[2 * i + 1] << std::endl;
            //count2 -= 1;
        }
        if (count2 > 1)
        {
        std::cout << "�������: " << piramidLevelNow << ". Right(" << arr[i] << ")" << ". ��������: " << arr[2 * i + 2] << std::endl;
        //count2 -= 1;
        }


    }











    
    //do
    //{
    //    std::cout << "piramidLevelNow: " << piramidLevelNow << std::endl;


    //    int kkk = std::pow(2, piramidLevelNow);




    //    for (int i = 0; i < kkk; ++i)
    //    {
    //        
    //        

    //        //while (kkk > 1)
    //        //{
    //            std::cout << "�������: " << piramidLevelNow << ". Left(" << arr[(i - 1) / 2] << ")" << ". ��������: " << arr[2 * i + 1] << std::endl;

    //            std::cout << "�������: " << piramidLevelNow << ". Right(" << arr[(i - 2) / 2] << ")" << ". ��������: " << arr[2 * i + 2] << std::endl;
    //            kkk--;
    //       // }
    //     




    //    };
    //    piramidLevelNow++;

    //} while (piramidLevelNow <= levelsOfPiramid);

    
    
    std::cout << std::endl;



};