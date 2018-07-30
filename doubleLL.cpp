#include <iostream>
#include <stdlib.h>

using namespace std;

struct list
{
    int info;
    struct list *next,*prev;
};

struct list *start=NULL,*endd=NULL;

void insertbeg(int item)
{
    struct list *ptr;
    ptr=new list;
    if(start==NULL)
    {
        ptr->info=item;
        start=ptr;
        endd=ptr;
        ptr->next=NULL;
        ptr->prev=NULL;
    }
    else
    {
        ptr->info=item;
        ptr->next=start;
        start->prev=ptr;
        start=ptr;
        start->prev=NULL;
    }
}
void insertend(int item)
{
    struct list *ptr;
    ptr=new list;
    if(endd==NULL)
    {
        ptr->info=item;
        start=ptr;
        endd=ptr;
        ptr->next=NULL;
        ptr->prev=NULL;
    }
    else
    {
        ptr->info=item;
        ptr->prev=endd;
        endd->next=ptr;
        endd=ptr;
        endd->next=NULL;
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
         cout<<"\n\nelements are: ";
         while(temp->next!=NULL)
         {
             cout<<temp->info<<" ";
             temp=temp->next;
         }
         cout<<temp->info<<endl;
     }
}
void deletebeg()
{
    struct list *temp;
    if(start==NULL)
    {
        cout<<"\nunderflow";
    }
    else if(start==endd)
    {
        temp=start;
        start=NULL;
        endd=NULL;
        delete temp;
        cout<<"\nitem deleted from beginning";
    }
    else
    {
        temp=start;
        start=start->next;
        start->prev=NULL;
        delete temp;
        cout<<"\nitem deleted from beginning";
    }
}
void deleteend()
{
    struct list *temp;
    if(endd==NULL)
    {
        cout<<"\nunderflow";
    }
    else if(start==endd)
    {
        temp=endd;
        start=NULL;
        endd=NULL;
        delete temp;
        cout<<"\nitem deleted from end";
    }
    else
    {
        temp=endd;
        endd=endd->prev;
        endd->next=NULL;
        delete temp;
        cout<<"\nitem deleted from end";
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


