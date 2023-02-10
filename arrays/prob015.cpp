/*
Write a program in C++ to delete an element at desired position from an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5
*/
#include <iostream>
using namespace std;

int main () {
    int size = 0;
    printf("Input the size of array: "); scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array in ascending order:\n", size);
    for (int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    int index;
    printf("Input the position where to delete: "); scanf("%d", &index);
    index--;
    int newArr[size+1];
    for (int i = 0; i < index; i++){
        newArr[i] = arr[i];
    }
    for(int i = index; i < size-1; i++){
        newArr[i] = arr[i+1];
    }
    printf("The new list is:\n");
    for (int i = 0; i < size-1; i++){
        printf("%d ", newArr[i]);
    }
    return 0;
}