#include <iostream>
#include <stdlib.h>
using namespace std;
int f=-1,r=-1,n=5;
int a[5];
void insertion(int item)
{
    if((f==0&&r==n-1))
    {
        cout<<"overflow";
        return;
    }
    if(f==-1&&r==-1)
    {
        f=0;
        r=0;
    }
    else if(f!=0 && r==n-1)
    {
        int i=f;
        for(int j=f;j<=r;j++)
        {
            a[j-i]=a[j];
        }
        f=f-i;
        r=r-i+1;
    }
    else
    {
        r++;
    }
    a[r]=item;
}
void traverse()
{
    if(f<=r)
    {
        for(int i=f;i<=r;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else
    {
        for(int i=0;i<=r;i++)
        {
            cout<<a[i]<<" ";
        }
        for(int i=f;i<=n-1;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}
void deletion()
{
    if(f==-1 && r==-1)
    {
        cout<<"underflow";
        return;
    }
    int item=a[f];
    cout<<"deleted item:"<<item;
    if(f==r)
    {
        f=-1;
        r=-1;
    }
    else
    {
        f++;
    }

}
int main()
{
    int ch;
    while(1)
    {
        cout <<"\n1.insertion  2.deletion  3.traverse  4.exit\nEnter your choice: ";
        cin >> ch;
             switch(ch)
              {
               case 1:  cout <<"enter the element: ";
                        cin >> ch;
                        insertion(ch);
                        break;
               case 2:  deletion();
                        break;
               case 3:  traverse();
                        break;
               case 4:  exit(0);
               }
    }
    return 0;
}
