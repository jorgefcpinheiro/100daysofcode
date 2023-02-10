/*
 Write a program in C++ to find the maximum and minimum element in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21
*/
#include <iostream>
using namespace std;

int max (int arr[], int size){
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int min (int arr[], int size){
    int min = arr[0];
    for(int i = 0; i < size; i++){
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int main () {
    int size = 0;
    printf("Input the number of elements to be stored in the array: "); scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array: \n", size);
    for (int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    printf("Maximum element is : %d\n", max(arr,size));
    printf("Minimum element is : %d\n", min(arr,size));
    return 0;
}