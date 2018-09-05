/* Stacks - Last In First Out data structure
 * It's like a jar of stacked cookies
 * Four operations - pop(), push(), top(),isEmpty()
 */
#include<iostream>

class Stack
{
private:
    struct Node
    {
        int data;
        struct Node *nextptr;
    };
    struct Node *top_;
public:
    Stack()         //constructors
    {
        top_=NULL;
    }
    ~Stack()        //deconstructor
    {
        while(top_!=NULL)
        {
            Node* toDelete=top_;
            top_=top_->nextptr;
            delete toDelete;
        }
    }
    bool isEmpty()  // check if stack is empty
    {
        return top_==NULL;
    }
    void pop()
    {
        if (top_==NULL)
            std::cout << "Stack's empty bro!";
        else
            top_ = top_->nextptr;
    }
    void push(int data)
    {
        struct Node *newNode = new Node{data};
        if (top_!=NULL)
            newNode->nextptr = top_;
        top_=newNode;
    }
    int top()
    {
        return top_->data;
    }
};

int main()
{
    Stack mystack;
    if (mystack.isEmpty()==1)
        std::cout << "Empty stack\n";
    mystack.push(2);
    if (mystack.isEmpty()==0)
        std::cout << "Not Empty stack\n";
        std::cout << "Top of stack : " << mystack.top()<<"\n";
    mystack.push(4);
    std::cout << "Top of stack : " << mystack.top() <<"\n";
    mystack.pop();
    //std::cout << "Value popped : " << mystack.pop() <<"\n";
    std::cout << "Top of stack after pop : " << mystack.top() <<"\n";
    mystack.push(6);
    mystack.push(8);
    std::cout << "Top of stack : " << mystack.top() <<"\n";
    mystack.pop();
    std::cout << "Top of stack after pop : " << mystack.top() <<"\n";
    return (0);
}
