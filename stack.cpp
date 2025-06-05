#include <iostream>
using namespace std;

//StackUsingLinked repo


class Node
{
public:
    int data;
    Node *next;


Node()
{
    next = NULL;
}
};

class Stack
{
    private:
        Node *top;

    public :
    Stack()
    {
        top = NULL;
    }
};