#include <iostream>

int main()
{
	int arr [] = {1,3,5,7,9,2,4,6,8,0};
	int i,j = 0;
	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (arr[j] > arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i < 10; ++i)
	{
		std::cout <<  arr[i] << ", ";
	}
	std::cout << std::endl;
	return 0;
}

