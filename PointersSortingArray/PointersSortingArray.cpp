// PointersSortingArray.cpp : Defines the entry point for the console application.
//

#include <iostream>



int main()
{
	void bsort(int *, int);
	const int N = 10;
	
	int arr[N]{ 37, 84, 62, 91, 11, 65, 57, 28, 19, 49 };

	bsort(arr, N);
	for (int j = 0; j < N; j++)
		std::cout << arr[j] << " ";
	std::cout << std::endl;

	system("pause");

    return 0;
}
void bsort(int* ptr, int n)
{
	void order(int*, int*);
	int j, k;

	for (j = 0; j < n - 1; j++)
	{
		for (k = 0; k < n; k++)
		{
			order(ptr + j, ptr + k);
		}
	}
}
void order(int* numb1, int* numb2)
{
	if (*numb1 > *numb2)
	{
		int temp = *numb1;
		*numb1 = *numb2;
		*numb2 = temp;
	}
}