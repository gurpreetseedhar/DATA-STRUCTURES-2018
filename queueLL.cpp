#include <iostream>
#include <stdlib.h>
using namespace std;

struct list
{
    int info;
    struct list *next;
};
struct list *frontt=NULL,*rear=NULL;
void insertion(int item)
{
    struct list *ptr;
    ptr=new list;
    if(frontt==NULL)
    {
        ptr->info=item;
        ptr->next=NULL;
        frontt=ptr;
        rear=ptr;
    }
    else
    {
        ptr->info=item;
        ptr->next=NULL;
        rear->next=ptr;
        rear=ptr;
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
    int ch,item;
    while(1)
    {
        cout <<"\n1.insertion  2.deletion  3.traverse  4.exit\nEnter your choice: ";
        cin >> ch;
             switch(ch)
              {
               case 1:  cout <<"enter the element: ";
                        cin >> item;
                        insertion(item);
                        break;
               case 2:  deletion();
                        break;
               case 3:  traverse();
                        break;
               case 4:  exit(0);
               }
    }
}
