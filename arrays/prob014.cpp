/*
Write a program in C++ to insert New value in the array (unsorted list ).
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10
*/
#include <iostream>
using namespace std;

int main () {
    int size = 0;
    printf("Input the size of array: "); scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array in ascending order:\n", size);
    for(int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    int val;
    printf("Input the value to be inserted: "); scanf("%d", &val);
    int index;
    printf("Input the position, where the value to be inserted: "); scanf("%d", &index);
    int newArr[size+1];
    for (int i = 0; i < index-1; i++){
        newArr[i] = arr[i];
    }
    newArr[index-1]=val;
    for(int i = index-1; i < size; i++){
        newArr[i+1] = arr[i];
    }
    printf("The current list of the array:\n"); 
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\nAfter insert the element on the new array:\n");
    for (int i = 0; i < size+1; i++){
        printf("%d ", newArr[i]);
    }
    return 0;
}