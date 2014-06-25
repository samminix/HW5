// linear search

#include <iostream>
#include <string>
using namespace std;

template<typename T>//Template
int linearSearch(const T list[], T key, int arraySize);

int main()
{
	int arrayOne[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1 };
	double arrayTwo[10] = { 1.2, 2.2, 3.2, 4.2, 5.2, 6.2, 7.2, 8.2, 9.2, 8.2 };
	string arrayThree[5] = { "CS171", "CS172", "Data Structures", "Physics 1", "Physics 2" };


	cout << "The number 8 is in Array One at index " << linearSearch(arrayOne, 8, 10) << "."  << endl;
	cout << "The number 7.2 is in Array Two at index " << linearSearch(arrayTwo, 7.2, 10) << "." << endl;
	cout << "The class Data Structures in in Array Three at index " << linearSearch(arrayThree, string("Data Structures"), 10) << endl;

}

template<typename T>//Template function
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
}