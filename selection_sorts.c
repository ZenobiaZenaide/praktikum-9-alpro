/* Nama : Zenobia Wirandi Zenaide
NIM : 24060121140164
*/

#include <stdio.h>
#include "fungsi_arr.c"

void selectionSort(int arr[], int n){
    //Kamus lokal
    int i, j, min;

    //Algoritma
    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            min = i;
            if (arr[j] < arr[min]){
                min = j;
            }
            swap(&arr[i], &arr[min]);
        }
    }
}

int main(){
    //Kamus
    int arr[]={7,2,3,4,24,21,56,98,57,8};
    int n;

    //Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    selectionSort(arr, n);
    printArr(arr, n);

    return 0;
}
