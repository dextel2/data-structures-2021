/* cpp program for sorting array using DNF Sort
Author: Neetu Kumari
Date Modified: 19-10-2021
*/

#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp=arr[i];               
    arr[i]=arr[j];
    arr[j]=temp;
}

//implementing the dnfSort function using pointers
void dnfSort(int arr[], int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<+high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++;mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr,mid,high);
            high--;
        }
    }
}

int main()
{
    int arr[]={1,1,2,0,2,1,1,0};
    dnfSort(arr,8);                   //call of fumction by passing array and its size
    
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}
