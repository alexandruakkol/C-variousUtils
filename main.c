#include <stdio.h>

void printArray(const int arr[], short size){
    for(char i=0; i<size; i++){
        printf("arr[%i]:%i\n", i, arr[i]);
    }
}

void printString(const char str[], short size){
    printf("%s\n",str);
}

void printDecimal(int i){
    printf("%i\n", i);
}

int indexOfStr(const char str[], char find, short size){
    int result;
    for(short i=0; i<size && str[i] != find; i++, result = i);
    return result;
}

int indexOfArr(const int str[], int find, int size){
    int result;
    for(short i=0; i<size; i++){
        result = i;
        if(str[i] == find) break;
    }
    return result;
}

int max(const int arr[], short size){
    if(!size) return 0;
    int result = arr[0];
    for(int i=0; i<size-1; i++, arr[i]>result?result=arr[i]:result);
    return result;
}

int min(const int arr[], short size){
    if(!size) return 0;
    int result=arr[0];
    for(int i=0; i<size-1; i++, arr[i]<result?result=arr[i]:result);
    return result;
}

void selectionSort(int arr[], int size){ //'sideeffects' the array
    size--;
    while(size>=0){
        int mx = max(arr, size+1);
        int indexMax = indexOfArr(arr, mx, size+1);
        int buffer = arr[size];
        arr[size] = arr[indexMax];
        arr[indexMax] = buffer;
        size--;
    } 
}

int main(){

}