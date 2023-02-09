/*
Write a program in C++ to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15
*/
#include <iostream>
using namespace std;

int sumArr (int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main (){
    int size;
    printf("Input the number of elements to be stored in the array: "); scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array:\n", size);
    for (int i = 0; i<size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    printf("Sum of all elements stored in the array is: %d", sumArr(arr, size));
    return 0;
}