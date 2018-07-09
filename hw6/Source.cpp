#include <iostream>
#include <string>
using namespace std;

template <class T>void BubbleSort(int n, T A[])
{
	T temp;
	int i, j;

	for (i = n - 1; i>1; i--)
	{
		for (j = 0; j<i; j++)
		{
			if (A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
	cout << A[n - 1] << endl;
}


int main()
{
	int n = 10;
	int grade[10] = { 78, 44, 89, 55, 45, 75, 94, 74, 83, 65 };
	float height[10] = { 178.3, 164.6, 189.4,
		155.8, 158.3, 175.0, 169.6, 174.2, 183.1, 165.9 };

	cout << "The best score is ";
	BubbleSort(10, grade);

	cout << "The maximum height is ";
	BubbleSort(10, height);

	system("pause");
	return 0;
}