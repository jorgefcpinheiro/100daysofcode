/*
Write a program in C++ to find sum of rows an columns of a Matrix. 
Test Data :
Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :
The matrix is :
5 6
7 8
The sum or rows and columns of the matrix is :
5 6 11
7 8 15

12 14
*/
#include <iostream>
using namespace std;

int main () {
    int size = 0;
    printf("Input the size of the square matrix: ");scanf("%d", &size);
    int arr[size][size];
    int sumCol[size];
    printf("Input elements in the matrix:\n");
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("element - [%d],[%d]: ", i,j); scanf("%d", &arr[i][j]);
        }
        sumCol[i] = 0;
    }
    printf("The matrix is:\n");
    for(int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int j = 0;j < size; j++){
        for (int i = 0; i < size; i++){
            sumCol[j] += arr[i][j];
        }
    }
    int sum = 0;
    printf("The sum of rows and collumns are:\n");
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
            if (j  == size-1){
                printf("  %d", sum);
            }
        }
        sum = 0;
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < size; i++){
        printf("%d ", sumCol[i]);
    }
    return 0;
 }