/*
Write a program in C++ to count a total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/
#include <iostream>
using namespace std;

int main () {
    int size;
    printf("Input the number of elements to be stored in the array: "); scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array: \n", size);
    for (int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    int arr2[size], arr3[size];
    for (int i = 0; i < size; i++){
        arr2[i] = arr[i];
        arr3[i] = 0;
    }
    int m = 1; int dup = 0;
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if (arr[i] == arr2[j]){
                arr3[j] = m;
                m++;
            }
        }
        m=1;
    }
    for (int i = 0; i  < size; i++) {
        if(arr3[i] == 2) dup++;
    }
    printf("Total number of duplicate elements found in the array is: %d", dup);
    return 0;
}