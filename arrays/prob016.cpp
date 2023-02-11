/*
Write a program in C++ to find the second largest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
Expected Output :
The Second largest element in the array is : 6
*/
#include <iostream>
using namespace std;

int great (int arr[], int size){
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(max < arr[i]) max = arr[i];
    }
    return max;
}

int indexOf (int arr[], int size, int num){
    int index;
    for (int i = 0; i < size; i++){
        if (arr[i] == num) index = i;
    }
    return index;
}

int main () {
    int size = 0;
    printf("Input the size of array:"); scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array: \n", size);
    for (int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    int newArr[size-1];
    for (int i = 0; i < indexOf(arr,size,great(arr,size)); i++){
        newArr[i] = arr[i];
    }
    for(int i = (indexOf(arr,size,great(arr,size))+1); i < size; i++){
        newArr[i-1] = arr[i];
    }
    printf("The Second largest element in the array is: %d", great(newArr, size-1));
    return 0;
}