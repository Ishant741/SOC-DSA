#include<iostream>
using namespace std;

//Function to push an element x in a queue.
void MyQueue :: push(int x)
{
        // Your Code
        arr[rear]=x;
        rear++;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code   
        if(front == rear) return -1;
        int temp=arr[front];
        front++;
        return temp;
}