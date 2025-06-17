#include<iostream>

void sort(int arr[], int length)
{
	for(int i = 0; i < length; i++)
	{
		for(int j = 0; (j < length - 1 - i); j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main(void)
{
	int arr[] = {10, 68, 93, 52, 86, 42, 23, 16, 8, 36};
	
	int length = sizeof(arr) / sizeof(arr[0]);
	
	sort(arr, length);
	
	for(const auto& a : arr)
		std::cout << a << " ";
	
	putchar('\n');
	
	return 0;
}
