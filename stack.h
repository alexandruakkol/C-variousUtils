#include <stdio.h>
#define MAX_STACK_SIZE 2

int stack[MAX_STACK_SIZE];
short stackSize = 0;

int isFull(){
    return stackSize == MAX_STACK_SIZE;
}

void push(int item){
    if(isFull())return; //stack overload
    stack[stackSize++] = item;
}

int pop(){
    if(stackSize == 0)return;
    return stack[stackSize--];
}

void printStack(){
    for(int i=0;i<stackSize;i++)printf("pos[%i]:%i\n", i, stack[i]);
}
