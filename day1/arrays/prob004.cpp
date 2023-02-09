/*
Write a program in C++ to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/
#include <iostream>
using namespace std;

void printArr (int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

void copyArr (int arr[], int secArr[], int size){
    for(int i = 0; i < size; i++){
        secArr[i] = arr[i];
    }
}

int main () {
    int size;
    printf("Input the number of elements to be stored in the array: "); scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array:\n", size);
    for (int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    printf("The elements stored in the first array:\n");
    printArr(arr, size);
    printf("\nThe elements stored in the second array:\n");
    int secArr[size];
    copyArr(arr, secArr, size);
    printArr(secArr, size);
    return 0;
}