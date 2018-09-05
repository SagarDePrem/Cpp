/* Stacks - Last In First Out data structure
 * It's like a jar of stacked cookies
 * Four operations - pop(), push(), top(),isEmpty()
 *****************************************************
 * Queues - First In First Out data structure
 * Ops - peek(), isEmpty(), enqueue(), dequeue()
 *****************************************************
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

class Queue
{
private:
    struct Node
    {
        int data;
        struct Node *next;
    };
    struct Node *head;
    struct Node *tail;

public:
    Queue()         //constructor
    {
        head=NULL;
        tail=NULL;
    }
    ~Queue()        //deconstructor
    {
        while(head!=NULL)
        {
            Node* toDelete=head;    // start removing from head
            head=head->next;        // update head
            delete toDelete;
        }
    }
    bool isEmpty()  // check if stack is empty
    {
        return head==NULL;
    }
    void dequeue()
    {
        if (head==NULL)
            std::cout << "Queue's empty bro!";
        else
            head = head->next;
    }
    void enqueue(int data)
    {
        struct Node *newNode = new Node{data};
        if (head==NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    int peek()
    {
        return head->data;
    }
};

int main()
{
    //
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

    Queue myq;
    if (myq.isEmpty()==1)
        std::cout << "Empty q\n";
    myq.enqueue(3);
    if (myq.isEmpty()==0)
        std::cout << "Non Empty q\n";
    std::cout << "First in queue : " << myq.peek() <<"\n";
    myq.enqueue(5);
    std::cout << "First in queue : " << myq.peek() <<"\n";
    myq.dequeue();
    std::cout << "First in queue : " << myq.peek() <<"\n";
    return (0);
}
