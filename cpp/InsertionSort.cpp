//Insertion Sort

#include<iostream>
using namespace std;
void insertionSort(int nums[], int n)
{
    for(int i=1;i<n;i++)
    {
        int element = nums[i];
        int j = i-1;
        //Look for the correct position of the element in the subarray before its index
        while(j>=0 && nums[j] > element)
        {
            //Move each number to the right till the correct position of element is reached
            nums[j+1] = nums[j];
            j--;
        }
        //Place the element at its correct (sorted) position
        nums[j+1] = element;
    }
}
int main()
{
    int n;
    //Enter number of elements 
    cin>>n;
    int nums[n];
    //Enter values in array
    for(int i=0;i<n;i++)
        cin>>nums[i];
    insertionSort(nums, n);
    cout<<"After sorting :\n";
    for(int i=0;i<n;i++)
        cout<<nums[i]<<" ";
    return 0;
}

/*
Example :

Input : n = 6, nums[] = {9, 3 ,2 ,6 ,1 ,4}
Output : 
After sorting :
1 2 3 4 6 9 

Time Complexity : O(n^2)
*/