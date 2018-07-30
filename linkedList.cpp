#include <iostream>
#include <stdlib.h>

using namespace std;

struct list
{
    int info;
    struct list *next;
};

struct list *start=NULL;

void insertbeg(int item)
{
    struct list *ptr;
    ptr= new list;
    if(start==NULL)
    {
        ptr->info=item;
        start=ptr;
        ptr->next=NULL;
    }
    else
    {
        ptr->info=item;
        ptr->next=start;
        start=ptr;
    }
}
 void insertend(int item)
 {

    struct list *ptr,*temp;
    ptr= new list;
    if(start==NULL)
    {
        ptr->info=item;
        start=ptr;
        ptr->next=NULL;
    }
    else
    {
        ptr->info=item;
        ptr->next=NULL;
        temp=start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
    }
 }
 void traversing()
 {
     struct list *temp;
     if(start==NULL)
     {
         cout<<"list is empty";
     }
     else
     {
         temp=start;
         while(temp!=NULL)
         {
             cout<<temp->info<<" "<<endl;
             temp=temp->next;
         }
     }
 }
 void deletebeg()
 {
     struct list *temp;
     if(start==NULL)
     {
         cout<<"underflow"<<endl;
     }
     else
     {
         temp=start;
         start=temp->next;
         delete temp;
     }
 }
 void deleteend()
 {
     struct list *temp,*temp1;
     if(start==NULL)
     {
         cout<<"underflow"<<endl;
     }
     else if(start->next==NULL)
     {
         temp=start;
         start=NULL;
         delete temp;
     }
     else
     {
         temp=start;
         while(temp->next!=NULL)
         {
             temp1=temp;
             temp=temp->next;
         }
         temp1->next=NULL;
         delete temp;
     }
 }
int main()
{
    int c,item;
    while(1)
    {
        cout<<"\n\nenter your choice:\ncase 1-insertion at beginning\ncase 2-insertion at end\ncase 3-traverse\ncase 4-deletion from beginning\ncase 5-deletion from end\n";
        cin>>c;
        switch(c)
        {
        case 1:
            cout<<"enter item to insert at beginning: ";
            cin>>item;
            insertbeg(item);
            break;
        case 2:
            cout<<"enter item to insert at end: ";
            cin>>item;
            insertend(item);
            break;
        case 3:
            traversing();
            break;
        case 4:
            deletebeg();
            break;
        case 5:
            deleteend();
            break;

        default:
            exit(0);
        }
    }
    return 0;
}
