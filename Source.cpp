#include <iostream>
#include <string>
using namespace std;

int main()
{
	double scores[7]{ 99, 20, 15, 50, 54, 3, 69 };
	string names[7], lastNames[7];

	names[0] = "Minny";
	names[1] = "Mickey";
	names[2] = "John";
	names[3] = "Mia";
	names[4] = "Noah";
	names[5] = "James";
	names[6] = "Mary";

	lastNames[0] = "Mouse";
	lastNames[1] = "Mouse";
	lastNames[2] = "Elma";
	lastNames[3] = "Royce";
	lastNames[4] = "Lobaugh";
	lastNames[5] = "Wight";
	lastNames[6] = "Jane";

	for (int j = 0; j < 7; j++)
	{
		scores[j] = scores[j] * 1.01;
		cout << names[j] << " " << lastNames[j] << " " << scores[j] << endl;
	}
	
	cout << names[2];
}