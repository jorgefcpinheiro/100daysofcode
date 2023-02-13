/*
Write a program in C++ for subtraction of two Matrices.
Test Data :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Input elements in the second matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The First matrix is :

5 6
7 8
The Second matrix is :

1 2
3 4
The Subtraction of two matrix is :

4 4
4 4
*/
#include <iostream>
using namespace std;

int main () {
    int size = 0;
    printf("Input the size of the square matrix: "); scanf("%d", &size);
    int arr1[size][size];
    printf("Input %d elements in the first matrix:\n", size);
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("element - [%d][%d]: ",i,j); scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[size][size];
    printf("Input %d elements in the second matrix:\n", size);
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("element - [%d][%d]: ",i,j); scanf("%d", &arr2[i][j]);
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
    int sub[size][size];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printf("The Subtraction of the two matrix is:\n");
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}