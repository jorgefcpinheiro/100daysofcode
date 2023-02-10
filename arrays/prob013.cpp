/*
Write a program in C++ to insert New value in the array (sorted list )
Test Data :
Insert New value in the sorted array :
-----------------------------------------
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 2
element - 1 : 5
element - 2 : 7
element - 3 : 9
element - 4 : 11
Input the value to be inserted : 8
The exist array list is :
2 5 7 9 11
After Insert the list is :
2 5 7 8 9 11
*/
#include <iostream>
using namespace std;

int main () {
    printf("Insert new value in the sorted array:\n");
    printf("-----------------------------------------\n");
    int size = 0;
    printf("Input the size of array : "); scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array in ascending order: \n", size);
    for (int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    int k = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size -1; j++){
            if (arr[j] > arr[j+1]){
                k = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = k;
            }
        }
    }
    int val; int newArr[size+1];
    printf("Input the value to be inserted: "); scanf("%d", &val);
    int index;
    for (int i = 0; i < size; i++){
        if (arr[i]>val){
            index = i;
            break;
        }
        else{
            index = size;
        }
    }
    newArr[index] = val;
    for (int i = 0; i < index; i++){
        newArr[i] = arr[i];
    }
    for (int i = index; i < size; i++){
        newArr[i+1] = arr[i];
    }
    printf("The exist array list is:\n");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\nAfter insert the list is:\n");
    for (int i = 0; i < size+1; i++){
        printf("%d ", newArr[i]);
    }
    return 0;
}