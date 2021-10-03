//Quick Sort

#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partition(int nums[], int low, int high)
{
    //Choose first element of the array(low..high) as pivot element
    int pivot = nums[low];
    int i = low-1, j= high+1;
    while(1)
    {
        //Find position where nums[i] > pivot
        do{
            i++;
        }while(nums[i] < pivot);
        //Find position where nums[j] < pivot
        do{
            j--;
        }while(nums[j] > pivot);
        //If invalid values of i and j
        if(i >= j)
            return j;
        //If valid values of i and j
        swap(nums[i], nums[j]);
    }
}
void quickSort(int nums[], int low, int high)
{
    if(low < high)
    {
        //Partition the array into two parts on the basis of pivot element
        int k = partition(nums, low, high); 
        quickSort(nums, low, k);
        quickSort(nums, k+1, high);
    }
}
int main()
{
    int n;
    //Enter number of elements
    cin>>n;
    int nums[n];
    //Enter values of elements of array
    for(int i=0;i<n;i++)
        cin>>nums[i];
    quickSort(nums, 0, n-1);
    cout<<"After Sorting :\n";
    for(int i=0;i<n;i++)
        cout<<nums[i]<<" ";
    return 0;
}

/*
Example :

Input : n = 7, nums[] = {3, 9, 2, 10, 17, 1, 4}
Output :
After Sorting :
1 2 3 4 9 10 17 

Time Complexity : avg -> O(nlogn), worst -> O(n^2)
*/