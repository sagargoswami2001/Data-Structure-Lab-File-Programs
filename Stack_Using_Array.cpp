// Stack Using Array.
#include<iostream>
using namespace std;

#define SIZE 5
int A[SIZE];
int top = -1;

bool isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}

void push(int value)
{
    if(top==SIZE-1)
    {
        cout<< "Stack is Full!\n";
    }
    else
    {
        top++;
        A[top]=value;
    }
}

void pop()
{
    if(isEmpty())
        cout<< "Stack is Empty!\n";
    else
        top--;
}

void show_top()
{
    if(isEmpty())
        cout<< "Stack is Empty!\n";
    else
        cout<< "Element at Top is: " << A[top] << "\n";
}

void displayStack()
{
    if(isEmpty())
    {
        cout<< "Stack is Empty!\n";
    }
    else
    {
        for(int i=0; i<=top; i++)
            cout<< A[i] << " ";
            cout<< "\n";
    }
}

int main()
{
    int choice, flag=1, value;
    while (flag == 1)
    {
        cout<< "\n1.Push \n2.Pop \n3.Show Top \n4.Display Stack \n5.Exit\n";
        cout<< "\nEnter Your Choice: ";
        cin>> choice; switch (choice)
        {
            case 1: cout<< "Enter Value: ";
                    cin>> value;
                    push(value);
                    break;
            case 2: pop();
                    break;
            case 3: show_top();
                    break;
            case 4: displayStack();
                    break;
            case 5: flag = 0;
                    break;
        }
    }
    return 0;
}
