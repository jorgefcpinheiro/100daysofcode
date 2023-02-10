/*
Write a program in C++ to sort elements of the array in descending order.
Test Data :
Input the size of array : 3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 9
element - 2 : 1
Expected Output :
Elements of the array in sorted descending order:
9 5 1
*/
#include <iostream>
using namespace std;

int main () {
    int size = 0;
    printf("Input the size of aray: \n"); scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array:\n", size);
    for (int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    int k = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - 1; j++){
            if (arr[j] < arr[j+1]){
                k = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = k;
            }
        }
    }
    printf("Elements of the array sorted in the descending order:\n");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}