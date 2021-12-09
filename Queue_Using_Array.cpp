// Queue Using Array.
#include<iostream>
using namespace std;
int queue[100], n=100, front=-1, rear=-1;

void Insert()
{
    int val;
    if(rear == n-1)
        cout<< "Queue Overflow"<<endl;
    else
    {
        if(front==-1)
           front = 0;
           cout<< "Insert the Element in Queue: ";
           cin>> val;
           rear++;
           queue[rear] = val;
    }
}

void Delete()
{
    if(front==-1 || front > rear)
    {
        cout<< "Queue Underflow"<<endl;
        return;
    }
    else
    {
        cout<< "Element Deleted from Queue is: " << queue[front] <<endl;
        front++;
    }
}

void Display()
{
    if(front==-1)
        cout<< "Queue is Empty"<<endl;
    else
    {
        cout<< "Queue Elements Are: ";
        for(int i=front; i<=rear;i++)
        cout<< queue[i] << " ";
        cout<<endl;
    }
}

int main()
{
    int choice;
    cout<< "1) Insert Element to Queue"<<endl;
    cout<< "2) Delete Element from Queue"<<endl;
    cout<< "3) Display all the Element of Queue"<<endl;
    cout<< "4) Exit\n"<<endl;

    do
    {
        cout<< "Enter Your Choice: ";
        cin>> choice;
        switch (choice)
        {
            case 1: Insert();
                    break;
            case 2: Delete();
                    break;
            case 3: Display();
                    break;
            case 4: cout<< "Exit"<<endl;
                    break;
            default: cout<< "Invalid Choice"<<endl;
        }
    }
    while(choice!=4);
    return 0;
}
