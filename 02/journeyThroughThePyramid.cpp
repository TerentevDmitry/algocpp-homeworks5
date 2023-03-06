#include "journeyThroughThePyramid.h"

enum class MovementsOnThePyramid
{
	Up = 8, Left = 4, Right = 6, Exit = 0
};






void journeyThroughThePyramid(int* arr, const int arrSize)
{

	std::cout << "Давайте путешествовать по пирамиде:\n";
	std::cout << "Вы находитесь здесь: 0. Root.\tЗначение: " << arr[0] << std::endl;

	int pointOfStop = 0;
	bool exitFromTheJourney = false;
	int chooseOfUser = 0;



	do
	{

		//8. Up
		//4. Left
		//6. Right
		//0. Exit

		if (chooseOfUser == static_cast<int> (MovementsOnThePyramid::Up))
		{
			
		}
		else if (chooseOfUser == static_cast<int> (MovementsOnThePyramid::Left))
		{
		}
		else if (chooseOfUser == static_cast<int> (MovementsOnThePyramid::Right))
		{
		}
		else if (chooseOfUser == static_cast<int> (MovementsOnThePyramid::Exit))
		{

		}

		else
		{
			std::cout << "Выход за пределы IF-ELSE в void journeyThroughThePyramid(int* arr, const int arrSize)\n";
		}




	} while (!exitFromTheJourney);







}
