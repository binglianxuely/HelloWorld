#include<iostream>

void display(int arr[], int length)
{
	for (size_t i = 0; i < length; i++)
	{
		std::cout << arr[i] << " ";
	}
	putchar('\n');
}

void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int partition(int arr[], int left, int right)
{
	int mark = arr[left];

	int start = left, end = right;

	while (left < right)
	{
		while (arr[left] <= mark && left < end)
		{
			left++;
		}

		while (arr[right] >= mark && right > start)
		{
			--right;
		}

		if(left < right)
			swap(arr[left], arr[right]);
		
	}
	
	swap(arr[start], arr[right]);
	
	return right;
}

void quickSort(int arr[], int left, int right)
{
	if (left >= right)
		return;

	int mid = partition(arr, left, right);
	
	quickSort(arr, 0, mid - 1);

	quickSort(arr, mid + 1, right);
}

int main(void)
{
	int arr[] = { 100, 68, 93, 52, 86, 42, 23, 16, 8, 36 };

	int length = sizeof(arr) / sizeof(arr[0]);

	quickSort(arr, 0, length - 1);

	display(arr, length);

	return 0;
}