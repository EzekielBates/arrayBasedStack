#include "stack.cpp"

int main(){
    Stack stack(10);

    for(int i = 0; i <= 10; ++i){
        stack.push(i);
        stack.peek();
    }
}