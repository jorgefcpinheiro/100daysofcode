/*
Write a program in C++ to sort elements of array in ascending order.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 7
element - 2 : 4
element - 3 : 5
element - 4 : 9
Expected Output :
Elements of array in sorted ascending order:
2 4 5 7 9
*/
#include <iostream>
using namespace std;

int main () {
    int size;
    printf("Input the size of array:"); scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array : \n", size);
    for (int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    int k;
    for(int i = 0; i < size; i++){
        for (int j = 0; j < size - 1; j++){
            if (arr[j] > arr[j+1]){
                k =  arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = k;
            }
        }
    }
    printf("Elements of array in sorted ascending order are:\n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}