/* Nama : Zenobia Wirandi Zenaide
NIM : 24060121140164
*/

#include <stdio.h>
#include "fungsi_arr.c"

void insertionSort(int arr[], int n){
    //Kamus lokal
    int i, j, key;

    //Algoritma
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    //Kamus lokal
    int arr[]={19,6,7,4,90,21,3,9,2,4};
    int n;

    //Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}
