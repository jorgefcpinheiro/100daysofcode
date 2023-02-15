/*
Write a program in C++ for multiplication of two square Matrices.
Test Data :
Input the rows and columns of first matrix : 2 2
Input the rows and columns of second matrix : 2 2
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
The multiplication of two matrix is :

19 22
43 50
*/
#include <iostream>
using namespace std;

int main()
{
    int r1, r2, c1, c2;
    printf("Input the rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Input the rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);
    int arr1[r1][c1];
    int arr2[r2][c2];
    printf("Input the elements in the first matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Input the elements in the second matrix:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The first matrix is:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    int mul[r1][c2];
    int sum = 0;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            mul[i][j] = 0;
    for (int i = 0; i < r1; i++) // row of first matrix
    {
        for (int j = 0; j < c2; j++) // column of second matrix
        {
            sum = 0;
            for (int k = 0; k < c1; k++)
                sum = sum + arr1[i][k] * arr2[k][j];
            mul[i][j] = sum;
        }
    }
    printf("The Multiplication matrix is:\n");
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}