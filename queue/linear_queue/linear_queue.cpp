#include <iostream>
#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
class Queue{
public:
     int arr[SIZE];
     int front,rear;
     void initial()
     {
          front = -1;
          rear = -1;
     }
     bool isEmpty()
     {
          if(front == -1 && rear == -1)
               return true;
          else
               return false;
     }
     bool isFull()
     {
          if(rear == SIZE -1)
               return true;
          else
               return false;
     }
     void enque(int x)
     {
          if(isFull())
          {
               cout<<"queue is full"<<endl;
          }
          else if(front == -1)
          {
               front = rear = 0;
               arr[rear] = x;
          }
          else
          {
               rear += 1;
               arr[rear] = x;
          }
     }
     int deque()
     {
          int x;
          if(isEmpty())
          {
               cout<<"queue is empty"<<endl;
          }
          x = arr[front];
          cout<<x<<" is deleted"<<endl;
          if(front == rear)
          {
               front = rear = -1;
          }
          else
          {
               front = front + 1;
          }
          return x;
     }
     void display()
     {
          for(int i = front; i<= rear; i++)
          {
               cout<<arr[i]<<endl;
          }
     }
};
int main()
{
     Queue q;
     q.initial();
     q.enque(10);
     q.enque(12);
     q.enque(14);
     q.deque();
     q.deque();


     q.display();
}











































