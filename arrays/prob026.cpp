/*
Write a program in C++ to print or display the lower triangular of a given matrix.
Test Data :
Input the size of the square matrix : 3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
Expected Output :
The matrix is :
1 2 3
4 5 6
7 8 9

Setting zero in lower triangular matrix

1 2 3
0 5 6
0 0 9
*/
#include <iostream>
using namespace std;

int main () {
    int size = 0;
    printf("Input the size of the square matrix: "); scanf("%d", &size);
    int arr[size][size];
    printf("Input elements in the matrix:\n");
    for(int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("element - [%d],[%d]: ", i,j); scanf("%d", &arr[i][j]);
        }
    }
    int newArr[size][size];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            newArr[i][j] = arr[i][j];
        }
    }
    for (int i = 1; i < size; i++){
        for (int j = 0; j < i; j++){
            newArr[i][j] = 0;
        }
    }
    printf("The matrix is:\n");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Setting zero in lower matrix:\n");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%d ", newArr[i][j]);
        }
        printf("\n");
    }
    return 0;
}