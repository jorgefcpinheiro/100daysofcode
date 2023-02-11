/*
Write a program in C for addition of two Matrices of same size. 
Test Data :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :

1 2
3 4
The Second matrix is :

5 6
7 8
The Addition of two matrix is :

6 8
10 12
*/
#include <iostream>
using namespace std;

int main () {
    int size = 0;
    printf("Input the size of the square matrix (less than 5): "); scanf("%d", &size);
    int arr1[size][size];
    printf("Input the elements in the first matrix:\n");
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("element - [%d],[%d]: ", i,j); scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[size][size];
    printf("Input the elements in the second matrix:\n");
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("element - [%d][%d]: ", i,j); scanf("%d", &arr2[i][j]);
        }
    }
    int sum[size][size];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("The first matrix is:\n");
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is:\n");
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("The addition of two matrix is:\n");
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}