package com.company;

public class linear_search {
    public static void main(String[] args) {
        int[] arr = {45, 22, 33, 14};
        int target = 22;
        int output = linear(arr, target);
        System.out.println(output);
    }

    static int linear(int[] arr, int target){
        for (int i = 0; i < arr.length; i++){
            if(arr[i] == target){
                return i;
            }
        }
        return -1;
    }
}
