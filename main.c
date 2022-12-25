#include <stdio.h>

void printArray(const int arr[], short size){
    for(char i=0; i<size; i++){
        printf("%i\n", arr[i]);
    }
}

void printString(const char str[], short size){
    printf("%s\n",str);
}

void printDecimal(int i){
    printf("%i\n", i);
}

int indexOf(const char str[], short index, short size){
    int result;
    for(short i=0; i<size && str[i] != index; i++, result = i);
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

int main(){

}