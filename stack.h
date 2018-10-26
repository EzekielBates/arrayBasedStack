class Stack{
    private:
        int size = 0;
        int capacity;
        int * stack;
    public:
        
        Stack(int capacity);
        ~Stack();
        void push(int myInt);
        void pop();
        int peek();
};