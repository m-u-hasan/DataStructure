#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    int priority;
    Node* link;
};


class Priority_Queue
{
    Node *Front;
public:
    Priority_Queue()
    {
        Front=NULL;
    }
    void Insert(int item,int priority)
    {
        Node *tmp,*q;
        tmp = new Node();
        tmp->data=item;
        tmp->priority=priority;

        if(Front==NULL || priority < Front->priority)
        {
            //cout<<"Robiul "<<priority;
            tmp->link = Front;
            Front = tmp;
        }
        else
        {
            q=Front;
            while(q->link!=NULL && q->link->priority<=priority)
                q=q->link;
            tmp->link = q->link;
            q->link=tmp;
        }
    }

    void Delete()
    {
        Node *tmp;
        if(Front==NULL)
            cout<<"Priority Queue is Empty!!"<<endl;
        else
        {
            tmp=Front;
            cout<<Front->data<<" is Deleted."<<endl;
            Front=Front->link;
            free(tmp);
        }
    }
    void Display()
    {
        Node *tmp=Front;
        if(Front==NULL)
            cout<<"Priority Queue is Empty!."<<endl;
        else
        {
            cout<<"Priority Queue is : "<<endl;
            cout<<"Priority      Item"<<endl;
            while(tmp!=NULL)
            {
                cout<<tmp->priority<<"\t"<<tmp->data<<endl;
                tmp=tmp->link;
            }
        }
    }
};

int main()
{
    Priority_Queue pq;
    pq.Insert(50,2);
    pq.Insert(40,4);
    pq.Insert(20,3);
    pq.Insert(30,0);

    pq.Display();
    pq.Delete();
    pq.Display();
    return 0;
}
