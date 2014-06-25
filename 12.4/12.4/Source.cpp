// list sort

#include <iostream>
#include <string>
using namespace std;

template<typename T>//Template
bool isSorted(const T list[], int size);

string boolToString(bool x);


int main()
{
	int arrayOneA[5] = { 10, 6, 18, 20, 59 };
	int arrayOneB[5] = { 5, 4, 3, 2, 1 };

	double arrayTwoA[5] = { 16.8, 15.7, 67.9, 24.6, 56.8 };
	double arrayTwoB[5] = { 5.1, 4.1, 3.1, 2.1, 1.1 };

	string arrayThreeA[5] = { "One", "Two", "Three", "Four", "Five" };
	string arrayThreeB[5] = { "ef", "de", "cd", "bc", "ab" };

	cout << "Array OneA is sorted: " << boolToString(isSorted(arrayOneA, 5))  << endl;
	cout << "Array OneB is sorted: " << boolToString(isSorted(arrayOneB, 5))  << endl;

	cout << "Array TwoA is sorted: " << boolToString(isSorted(arrayTwoA, 5))  << endl;
	cout << "Array TwoB is sorted: " << boolToString(isSorted(arrayTwoB, 5))  << endl;

	cout << "Array ThreeA is sorted: " << boolToString(isSorted(arrayThreeA, 5)) << endl;
	cout << "Array ThreeB is sorted: " << boolToString(isSorted(arrayThreeB, 5)) << endl;

}

template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 1; i < size; i++)
	{
		if (list[i - 1] < list[i])
		{
			return false;
		}
	}
	return true;
}

string boolToString(bool x){
	if (x == 1)
		return "True";//return true if bool equals 1
	if (x == 0)
		return "False";//return false if bool equals 0
}