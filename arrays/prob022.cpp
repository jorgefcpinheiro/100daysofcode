/*
Write a program in C++ to find transpose of a given matrix. 
Test Data :
Input the rows and columns of the matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :

1 2
3 4

The transpose of a matrix is :
1 3
2 4
*/
#include <iostream>
using namespace std;

int main () {
    int r = 0,c = 0;
    printf("Input the rows and columns of the matrix: "); scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Input elements in the matrix:\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("element - [%d],[%d]: ", i,j); scanf("%d", &arr[i][j]);
        }
    }
    int arrT[c][r];
    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++){
            arrT[i][j] = arr[j][i];
        }
    }
    printf("The matrix is:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose matrix is:\n");
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            printf("%d ", arrT[i][j]);
        }
        printf("\n");
    }
    return 0;
}