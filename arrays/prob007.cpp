/*
Write a program in C++ to merge two arrays of same size sorted in decending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1
*/
#include <iostream>
using namespace std;


int main () {
    int size = 0;
    printf("Input the number of elements to be sorted in the arrays: "); scanf("%d", &size);
    int arr[size], arr2[size], arr3[2*size];
    printf("Input %d elements in the first array:\n", size);
    for (int i = 0; i <size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
    }
    printf("Input %d elements in the second array:\n", size);
    for (int i = 0; i <size; i++){
        printf("element - %d: ", i); scanf("%d", &arr2[i]);
    }
    int j = 0;
    for (int i = 0; i < 2*size;){
       if(i  < size) arr3[i] = arr[i];
       else{
        arr3[i] = arr[j];
        j++;
       }
       i++;
    }
    int k = 0;
    for (int i = 0; i < 2*size; i++){
        for (int j = 0; j < 2*size - 1; j++){
            if (arr3[j] <= arr3[j+1]){
                k = arr3[j+1];
                arr3[j+1] = arr3[j];
                arr3[j] = k;
            }
        }
    }
    printf("The merged array in descending order is: \n");
    for (int i = 0; i < 2*size; i++){
        printf("%d ", arr3[i]);
    }
    return 0;
}
