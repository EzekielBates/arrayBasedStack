#include "stack.h"
#include<iostream>

Stack::Stack(int myCapacity){
    capacity = myCapacity;
    stack = new int[capacity];
    size = 0;
    for(int i = 0; i < capacity; ++i){
        stack[i] = 0;
    }
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
        stack[size-1] = 0;
        size--;
}
int Stack::peek(){
    std::cout << "size: "<<size << std::endl; 
    std::cout << stack[size-1] << std::endl;

}