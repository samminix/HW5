//shuffle vector

#include <iostream>
#include <vector>
#include <algorithm> //Use random_shuffle
using namespace std;

template<typename T>//Template
void shuffle(vector<T>& v)
{
	random_shuffle(v.begin(), v.end());

}


int main()
{
	vector<int> V1;
	for (int i = 0; i < 10; i++)
	{
		int y = 0;
		cout << "Enter a number: ";
		cin >> y;
		V1.push_back(y);//Read in 10 values
	}

	shuffle(V1);

	cout << "Your numbers shuffled are: \n";
	for (int i = 0; i < 10; i++)
	{
		cout << "   " << V1[i] << endl;
	}
	cout << endl;
}