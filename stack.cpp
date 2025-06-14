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

    int push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push value: " << value << endl;
        return value;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void pop()
    {
        Node* temp = top;
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Popped value: " << top->data << endl;
        top = temp->next;
        temp = nullptr;
    }
    void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
        return;
        }
        
    else
    {
        Node *current = top;
        while ( current != NULL)
        {
            cout << current->data << "" << endl;
            current = current->next;
        }
        cout <<endl;
    }
    }

};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. push\n";
        cout << "2. pop\n";
        cout << "3. peek\n";
        cout << "4. exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value);
            break;
            case 2:
            stack.pop();
            break;
            case 3:
            stack.peek();
            break;
            case 4:
            cout << "Exiting the program. " << endl;
            break;
        default:
        cout << "invalid choice. Try again.. " << endl;
        break;
        }
    }
}


