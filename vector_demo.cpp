#include "stdlib.h"
#include "iostream"
#include "vector"

using namespace std;



int main(int argc, char const *argv[])
{
	const int DIFFERENT_NUMBERS = 100;

	int totalNumbers = 100;

	// cout << "How many number to generate?: ";

	vector<int> numbers( DIFFERENT_NUMBERS + 1) ;

	for (int i = 0; i < numbers.size(); ++i)
	{
		numbers[i] = 0;
	}

	for (int i = 0; i < totalNumbers; ++i)
	{
		/* code */
		
	}

	// cin >> totalNumbers;



	return 0;
}