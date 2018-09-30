#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;

void push(int item)
{
    struct node *ptr;
    ptr=new node;
    ptr->data=item;
    ptr->next=NULL;
    if(top!=NULL)
    {
        ptr->next=top;
    }
    top=ptr;
}

void pop()
{
    struct node *temp;
    if(top==NULL)
    {
        cout<<"\nThe stack is empty";
    }
    temp=top;
    top=top->next;
    cout<<"\nPopped value is "<<temp->data;
    delete temp;
}

void display()
{
    struct node *temp=top;
    cout<<"\nThe stack is\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    int choice,item;
    while(1)
    {
        cout<<"\n\n1:PUSH\n2:POP\n3:DISPLAY STACK\n4:EXIT";
        cout<<"\nEnter your choice(1-4): ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter a number to insert: ";
                cin>>item;
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
                break;
            default:
                cout<<"\nPlease enter correct choice(1-4)";
                break;
        }
    }
    return 0;
}
