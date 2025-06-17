#include<iostream>

void sort(int arr[], int length)
{
	
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