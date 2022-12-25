#include <stdio.h>

void printArray(const int arr[], short size){
    for(int i=0;i<size;i++){
        printf("%i\n",arr[i]);
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
    for(int i=0; i<size && str[i] != index; i++, result = i);
    return result;
}

int main(){
   
}