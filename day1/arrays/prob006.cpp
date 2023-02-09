/*
Write a program in C++ to print all unique elements in an array.
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5
*/
#include <iostream>
using namespace std;

int main () {
    int size = 0;
    printf("Input the number of elements to be stored in the array: "); scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array:\n", size);
    for (int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    printf("The unique elements found in the array are:\n");
    bool unique = true;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (arr[i] == arr[j] && j != i) {
                unique = false;
            }
        }
        if(unique) printf("%d ", arr[i]);
        unique = true;
    }
    return 0;
}