// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//Variable declaration for the numbers and the matrix
	int numbers[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int matrix[3][3];

	//Function to fill the matrix using the numbers in a random order
	FillMatrix(matrix, numbers);

	//Print the matrix
	std::cout << "The matrix at start" << std::endl;
	std::cout << matrix[0][0] << "  " << matrix[0][1] << "  " << matrix[0][2] << std::endl;
	std::cout << matrix[1][0] << "  " << matrix[1][1] << "  " << matrix[1][2] << std::endl;
	std::cout << matrix[2][0] << "  " << matrix[2][1] << "  " << matrix[2][2] << std::endl;

	int a;
	std::cin >> a;
    return 0;
}

void FillMatrix(int matrix[3][3], int numbers[8])
{
	int counter = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == 2 && i == 2)
			{
				matrix[i][j] = 0;
			}
			else
			{
				matrix[i][j] = numbers[counter];
			}
		}

	}
}
