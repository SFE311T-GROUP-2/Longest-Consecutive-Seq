
#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int ReturnsTheLength(int[], int );

int main()
{


	int arrary1[] = { 100, 4, 200, 1, 3, 2 };
	int arrary2[] = { 0, 3, 7, 2, 5, 8, 4, 6, 0, 1 };// for testing as per Per Question
	int x = sizeof arrary1 / sizeof arrary1[0];


	cout << "The Length of longest consecutive elements sequence is : " << ReturnsTheLength(arrary1, x) << endl;
	cout << endl;



	system("pause");
	return 0;
}
int ReturnsTheLength(int arrary1[], int size)
{

	unordered_set<int> S;
	int Length = 0;
	int current_element = 0; 
	int array_elements = 0;

	for (array_elements; array_elements < size; array_elements++)
		S.insert(arrary1[array_elements]);

	
	for (current_element; current_element<size; current_element++)
	{
		if (S.find(arrary1[current_element] - 1) == S.end())
		{
			int next_elements = arrary1[current_element];
			while (S.find(next_elements) != S.end())
				next_elements++;

			Length = max(Length, next_elements - arrary1[current_element]);
		}
	}
	return Length; 
}

