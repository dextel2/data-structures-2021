
/*
cpp program for operator overloading
Author: Anil Kumar
Date modified:22-10-2021
*/


#include <stdio.h>

void shell_sort(int a[], int n)
{

    for (int gap = n / 2; gap >=1; gap /= 2)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = a[i];
            int j = i - gap;

            while (j >= 0 && a[j] > temp)
            {
                a[j + gap] = a[j];
                j = j - gap;
            }

            a[j+gap] = temp;
        }
    }
}

int main()
{

    int a[] = {9, 3, 6, 8, 5, 2, 0, 7, 4, 1}, n = 10;
    printf("before sorting:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    shell_sort(a, n);

    printf("\nafter shorting:");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}