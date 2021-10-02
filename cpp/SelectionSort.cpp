#include <iostream>
using namespace std;
void selectionsort(int arr[], int size)
{
    int minindex;
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        minindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minindex] > arr[j])
            {
                minindex = j;
            }
        }
        temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {52, 14, 61, 53, 29};
    int size = sizeof(arr) / sizeof(int);

    cout << "Unsorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    selectionsort(arr, size);

    cout << "\nSorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}