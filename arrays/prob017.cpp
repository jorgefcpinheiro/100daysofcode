/*
Write a program in C++ to find the second smallest element in an array. 
Test Data :
Input the size of array : 5
Input 5 elements in the array (value must be <9999) :
element - 0 : 0
element - 1 : 9
element - 2 : 4
element - 3 : 6
element - 4 : 5
Expected Output :
The Second smallest element in the array is : 4
*/
#include <iostream>
using namespace std;

int min (int arr[], int size){
    int min = arr[0];
    for (int i = 1; i < size; i++){
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int indexOf(int arr[], int size, int val){
    int index;
    for(int i = 0; i < size; i++){
        if (arr[i] == val) index = i;
    }
    return index;
}

int main () {
    int size = 0;
    printf("Input the size of the array: "); scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array (value must be <9999): \n",size);
    for (int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    } 
    int newArr[size-1];
    for(int i = 0; i < indexOf(arr,size,min(arr,size)); i++){
        newArr[i] = arr[i];
    }
    for (int i = (indexOf(arr,size,min(arr,size))+1); i < size; i++){
        newArr[i-1] = arr[i];
    }
    printf("The Second smallest element in the array is: %d", min(newArr,size-1));
    return 0;
}