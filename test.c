#include<stdio.h>


void ShellSort(int* arr, int length)
{
	int i = 0, j = 0;

	//外层循环--不断缩短增量
	for (int interval = length / 2; interval > 0; interval =interval / 2)
	{
		for (i=interval;i<length;i++)
		{
			int target = arr[i];
			int j = i - interval;
			while (j > -1 && target < arr[j])
			{
				arr[j+interval] = arr[j];
				j-=interval;
			}
			arr[j + interval] = target;
		}
	}
}


int main() {

	int arr[9] = { 6,8,5,7,9,4,3,1,2 };
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	ShellSort(arr,length);
	for (int i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}