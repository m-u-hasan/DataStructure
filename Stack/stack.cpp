#include <iostream>
#include <bits/stdc++.h>
#define size 10
using namespace std;
class Stack{
public:
     int arr[size];
     int top;
     void initial()
     {
          top = -1;
     }
     bool isEmpty()
     {
          if(top == -1)
               return true;
          else
               return false;
     }
     bool isFull()
     {
          if(top == size -1)
               return true;
          else
               return false;
     }
     void push(int x)
     {
          if(isFull())
          {
               cout<<"Stack is full"<<endl;
          }
          top = top+1;
          arr[top] = x;
     }


     int pop()
     {
          if(isEmpty())
          {
               cout<<"Stack is empty"<<endl;
               return 0;
          }
          int x = arr[top];
          cout<<"pop element is :"<<x<<endl;
          top =top- 1;
         // return x;
     }
};
int main()
{

     Stack s;
     s.initial();
     s.push(10);
     s.push(12);
     s.push(14);
     s.push(16);
     s.push(18);
     s.push(20);
     s.push(22);
     s.push(24);
     s.push(26);
     s.push(28);
     s.pop();
     s.pop();
     s.pop();
     s.pop();
     s.pop();
     s.pop();
     s.pop();
     s.pop();
     s.pop();
     s.pop();
     s.pop();

     return 0;
}





































