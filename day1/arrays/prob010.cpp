/*
Write a program in C++ to separate odd and even integers in separate arrays.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47
*/
#include <iostream>
using namespace std;

int main () {
    int size = 0;
    printf("Input the number of elements to be stored in the array: "); scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array: \n", size);
    for(int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    printf("The Even elements are :\n");
    for(int i = 0; i < size; i++){
        if ((arr[i] % 2) == 0) printf("%d ", arr[i]);
    }
    printf("\nThe Odd elements are :\n");
    for (int i = 0; i < size; i++){
        if ((arr[i] %2) != 0) printf("%d ", arr[i]);
    }
    return 0;
}