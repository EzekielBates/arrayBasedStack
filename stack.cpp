#include "stack.h"
#include<iostream>

Stack::Stack(int myCapacity){
    capacity = myCapacity;
    stack = new int[capacity];
    size = 0;
}
Stack::~Stack(){
    delete[] stack;
}
void Stack::push(int myInt){
    if(size < capacity){
        stack[size] = myInt;
        size++;     
    }
    else{
        std::cout<< "The stack is currently full" <<std::endl;
    }
}
void Stack::pop(){
    stack[size] = NULL;
    size--;
}
int Stack::peek(){
    return stack[size];
}