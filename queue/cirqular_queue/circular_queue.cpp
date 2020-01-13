#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define SIZE 10
class cir_queue{
     public:
     int front,rear;
     int arr[SIZE];
     cir_queue(){
          front = rear = -1;
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
          if((front == 0 && rear == SIZE - 1)|| (front == rear + 1))
               return true;
          else
               return false;
     }
     void enque(int x)
     {
          if(isFull())
          {
               cout<<"Queue is Empty"<<endl;
               return;
          }
          if(front == -1)
          {
               front = rear = 0;
          }
          else if(rear == SIZE -1)
          {
               rear = 0;
          }
          else
          {
               rear = rear + 1;
          }
          arr[rear] = x;

     }
     void deque()
     {
          if(isEmpty())
          {
               cout<<"Queue is emptyt"<<endl;
               return;
          }
          int x = arr[front];
          cout<<x<<" is deleted"<<endl;
          if(front == rear)
          {
               front = rear = -1;
          }
          else if(front == SIZE - 1)
          {
               rear = 0;
          }
          else
          {
               front = front + 1;
          }
     }
     void display()
     {
          if(isEmpty())
          {
               cout<<"queue is empty "<<endl;
          }
          if(front <= rear)
          {
               for(int i = front; i <= rear; i++)
               {
                    cout<<arr[i]<<" "<<endl;
               }
          }
          else
          {
               for(int i = front; i < SIZE; i++)
               {
                    cout<<arr[i]<<" "<<endl;
               }
               for(int i = 0; i <= rear;i++)
               {
                    cout<<arr[i]<<" ";
               }
          }
     }
};
int main()
{
     cir_queue q;
//     q.initial();
     q.enque(10);
     q.enque(12);
     q.enque(14);
     q.deque();
     q.deque();


     q.display();
     return 0;
}
