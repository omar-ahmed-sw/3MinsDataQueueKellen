// 3MinsDataQueueKellen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include "TypeDef.h"
#include "vector"
#include <algorithm> 
#include <string>
#include <cmath>



int main()
{
	std::vector <int32> CollectedData(100);
	int32 Max = 0U;
	int32 Min = 999U;

	//initialise 
	/*
	for (uint32 i = 0U; i < CollectedData.size(); i++)
	{
		CollectedData[i] = NAN;
	}
	*/
	for (uint32 i = 0U; i < CollectedData.size(); i++)
	{
		CollectedData[i] = rand() % 1000;
		if (CollectedData[i] > Max)
		{
			Max = CollectedData[i];
		}

		if (CollectedData[i] < Min)
		{
			Min = CollectedData[i];
		}
	}
	//recieve 10 new data for example

	for (uint32 i = 0U; i < 100U; i++)
	{
		for (uint32 j = 0U; j < (CollectedData.size() - 1U); j++)
		{
			CollectedData[j] = CollectedData[j + 1];
		}
		CollectedData.erase(CollectedData.end() - 1U);
		CollectedData.push_back( rand() % 1000);

		if((CollectedData[CollectedData.size() - 1]) > Max)
		{ 
			Max = CollectedData[i];
		}

		if ((CollectedData[CollectedData.size() - 1]) < Min)
		{
			Min = CollectedData[i];
		}
	}

	while (true)
	{

	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
