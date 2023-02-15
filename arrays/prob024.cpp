/*
Write a program in C++ to find the sum of left diagonals of a matrix.
Test Data :
Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :
1 2
3 4
Addition of the left Diagonal elements is :5
*/
#include <iostream>
using namespace std;

int main () {
    int size = 0;
    printf("Input the size of the square matrix: "); scanf("%d", &size);
    int arr[size][size];
    printf("Input elements in the first matrix:\n");
    for(int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("element - [%d],[%d]: ", i,j); scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    printf("The matrix is:\n");
    for(int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = size-1; i > -1; i--){
        sum += arr[i][i];
    }
    printf("Addition of the left diagonal elements is: %d", sum); 
    return 0;
}