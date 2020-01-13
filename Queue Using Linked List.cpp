#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int key;
    Node* next;

    Node(int data)
    {
        key=data;
        next=NULL;
    }
};

class Implement_Queue_using_Linked_list{
    Node *Front,*Rear;
public:
    Implement_Queue_using_Linked_list()
    {
        Front=NULL;
        Rear=NULL;
    }

    void Insert()
    {
        int val;
        cout<<"Insert the Element in Queue : ";
        cin>>val;

        Node *tmp = new Node(val);
        if(Front==NULL)
        {
            Front=tmp;
            Rear=tmp;
        }
        else
        {
            Rear->next = tmp;
            Rear = tmp;
        }
    }

    bool isEmpty()
    {
        if(Front==NULL)
            return true;
        return false;
    }

    void Delete()
    {
        Node *tmp =Front;
        if(isEmpty())
        {
            cout<<"Underflow, because Queue is Empty."<<endl;
            return ;
        }
        cout<<"Element deleted from Queue is : "<<tmp->key<<endl;
        if(tmp->next==NULL)
        {
            free(tmp);
            Front=NULL;
            Rear=NULL;
        }
        else
        {
            Front=tmp->next;
            free(tmp);
        }
    }

    void Display()
    {
        Node *tmp = Front;
        if(isEmpty())
        {
            cout<<"Queue is Empty."<<endl;
            return ;
        }
        cout<<"Queue Element are : ";
        while(tmp!=NULL)
        {
            cout<<tmp->key<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
    }
};



int main()
{
    Implement_Queue_using_Linked_list obj;

    int ch;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Exit"<<endl;

    do{
        cout<<"Enter Your Choice : ";
        cin>>ch;
        if(ch==1)
            obj.Insert();
        else if(ch==2)
            obj.Delete();
        else if(ch==3)
            obj.Display();
        else if(ch==4)
            cout<<"Exit."<<endl;
        else
            cout<<"Wrong choice! Please try again."<<endl;

    }while(ch!=4);
    return 0;
}
