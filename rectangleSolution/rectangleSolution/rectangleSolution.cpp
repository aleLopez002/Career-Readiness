// rectangleSolution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
struct Rect {
	float minX;
	float minY;
	float maxY;
	float maxX;
};
float DistanceToRect(float x, float y, Rect& rect);
int main()
{
    std::cout << "Hello World!\n"; 
	
	float DistanceToRect(float x, float y, Rect &rect);

	struct Rect r1 = {5, 5, 10, 10};
	std::cout << "minX: " << r1.minX <<"\nminY: " << r1.minY << "\nmaxY: " << r1.maxX << "\nmaxX: " << r1.maxY ;

	
	std::cout << "\n\nreturn is" << DistanceToRect(5,5,r1);
}
float DistanceToRect(float x, float y, Rect& rect) {
	if (x > rect.minX  && x < rect.minY) {
		std::cout << "\n\nwithin the x axis";
		return 0;
	}
	else {
		std::cout << "\n\noutside of X axis of rect";
		return 1;
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
