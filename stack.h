class Stack{
    private:
        int size;
        int capacity;
        int * stack;
    public:
        Stack(int capacity);
        ~Stack();
        void push(int myInt);
        void pop();
        int peek();
};