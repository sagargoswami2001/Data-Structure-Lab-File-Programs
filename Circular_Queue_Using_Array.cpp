//Circular Queue Using Array.
#include<iostream>
using namespace std;
#define SIZE 5
int A[SIZE];
int front = -1;
int rear = -1;

//Function to Check if Queue is empty or not.
bool isempty()
{
    if(front == -1 && rear == -1)
        return true;
    else
        return false;
}

//Function to enter elements in queue.
void enqueue(int value)
{
    //queue is full
    if((rear + 1)%SIZE == front)
        cout<< "Queue is Full..." <<endl;
    else
    {
        //first element inserted
        if(front == -1)
            front = 0;
        //insert element at rear
        rear = (rear+1)%SIZE;
        A[rear] = value;
    }
}

//function to delete/remove element from queue.
void dequeue( )
{
    if( isempty() )
        cout<< "Queue is Empty." <<endl;
    else
        //only one element
        if(front == rear)
        front = rear =-1;
    else
        front = (front + 1)%SIZE;
}

//function to show the element at front.
void showfront()
{
    if(isempty())
        cout<< "Queue is Empty." <<endl;
    else
        cout<< "Element at Front is: " <<A[front] <<endl;
}

//function to display queue.
void displayQueue()
{
    if(isempty())
        cout<< "Queue is Empty." <<endl;
    else
    {
        int i;
        if(front <= rear)
        {
            for(i=front ; i<=rear ; i++)
                cout<< A[i] << " " <<endl;
        }
        else
        {
            i = front;
            while(i<SIZE)
            {
                cout<< A[i] << " " <<endl;
                i++;
            }
            i=0;
            while(i <= rear)
            {
                cout<< A[i] << " " <<endl;
                i++;
            }
        }
    }
}

//Main Function.
int main()
{
    int choice, flag=1, value;
    while(flag == 1)
    {
        cout<< "\n1.Enqueue \n2.Dequeue \n3.Show Front \n4.Display Queue \n5.Exit\n";
        cout<< "\nEnter Your Choice: ";
        cin>> choice;
        switch(choice)
        {
            case 1: cout<< "Enter Value: ";
                    cin>> value;
                    enqueue(value);
                    break;
            case 2: dequeue();
                    break;
            case 3: showfront();
                    break;
            case 4: displayQueue();
                    break;
            case 5: flag = 0;
                    break;
        }
    }
    return 0;
}
