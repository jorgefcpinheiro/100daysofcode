/*
Write a program in C++ to count the frequency of each element of an array. 
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times
*/
#include <iostream>
using namespace std;

int howMany (int*, int, int);

int main () {
    int size = 0;
    printf("Input the number of elements to be stored in the array: "); scanf("%d", &size);
    int arr[size];
    int arr2[size];
    int arr3[size];
    printf("Input %d elements in the array: \n", size);
    for (int i = 0; i < size; i++){
        printf("element - %d: ", i); scanf("%d", &arr[i]);
        arr2[i] = arr[i];
        arr3[i] = 0;
    }
    int m = 1;
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if (arr[i] == arr2[j]){
                arr3[j] = m;
                m++;
            }
        }
        m=1;
    }
    int ctr = 0;
    for (int i = 0; i < size; i++){
        if (arr3[i] == 1) ctr++;
    }
    int mainNum[ctr]; int j = 0;
    for(int i = 0; i < size; i++){
        if (arr3[i] == 1) {
            mainNum[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < ctr; i++){
        printf("%d occurs %d times\n", mainNum[i], howMany(arr, size, mainNum[i]));
    }
    return 0;
}


int howMany (int arr[], int size, int numb){
    int ctr = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] == numb) ctr++;
    }
    return ctr;
}