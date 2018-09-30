#include <iostream>
#include <stdlib.h>
using namespace std;

struct list
{
    int priority;
    int info;
    struct list *next;
};
struct list *frontt=NULL,*rear=NULL;
void insertion(int item,int pr)
{
    struct list *ptr,*temp;
    ptr=new list;
    ptr->priority=pr;
    ptr->info=item;
    if(frontt==NULL || ptr->priority<= frontt->priority)
    {
        ptr->next=frontt;
        frontt=ptr;
    }
    else
    {
        temp=frontt;
        while(temp->next!=NULL && ptr->priority>temp->next->priority)
        {
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }
}
void deletion()
{
    if(frontt==NULL)
    {
        cout<<"underflow";
    }
    else if(frontt==rear)
    {
        frontt=NULL;
        rear=NULL;
    }
    else
    {
        cout<<"deleted item:"<<frontt->info;
        frontt=frontt->next;
    }
}
void traverse()
{
    struct list *temp;
    temp=frontt;
    while(temp!=NULL)
    {
        cout<<temp->info<<" ";
        temp=temp->next;
    }
}
int main()
{
    int ch,item,pr;
    while(1)
    {
        cout <<"\n1.insertion  2.deletion  3.traverse  4.exit\nEnter your choice: ";
        cin >> ch;
             switch(ch)
              {
               case 1:  cout<<"enter priority: ";
                        cin>>pr;
                        cout <<"enter the element: ";
                        cin >> item;
                        insertion(item,pr);
                        break;
               case 2:  deletion();
                        break;
               case 3:  traverse();
                        break;
               case 4:  exit(0);
               }
    }
}
