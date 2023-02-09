/*
Write a program in C++ to store elements in an array and print it.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9 
*/

#include <iostream>
using namespace std;

void printArr (int arr[], int size){
    printf("Elements in array are: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main () {
    int size = 0;
    printf("how many elements in array? "); scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    printArr(arr, size);
    return 0;
}