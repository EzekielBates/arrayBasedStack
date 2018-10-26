class Stack{
    private:
        int size = 0;
        int capacity;
        int stack[10];
    public:
        Stack(int capacity);
        ~Stack();
        void push(int myInt);
        void pop();
        int peek();
};