#include <iostream>

using namespace std;
int n=0,tree[50];
void insertion(int item)
{
    n=n+1;
    int ptr=n;
    while(ptr>1)
    {
        int par=ptr/2;
        if(item<=tree[par])
        {
            tree[ptr]=item;
            return;
        }
        tree[ptr]=tree[par];
        ptr=par;
    }
    tree[1]=item;
}
void deletion()
{
    int item=tree[1];
    int last=tree[n];
    cout<<item<<" ";
    n=n-1;
    if(n==0)
    {
        return;
    }
    int ptr=1,left=2,right=3;
    if(n==1)
    {
        tree[ptr]=last;
        return;
    }
    while(right<=n)
    {
        if(last>=tree[left]&&last>=tree[right])
        {
            tree[ptr]=last;
            return;
        }
        if(tree[right]<=tree[left])
        {
            tree[ptr]=tree[left];
            ptr=left;
        }
        else
        {
            tree[ptr]=tree[right];
            ptr=right;
        }
        left=2*ptr;
        right=2*ptr+1;
    }
    if(left==n&&last<tree[left])
    {
        tree[ptr]=tree[left];
        ptr=left;
    }
    tree[ptr]=last;
}
int main()
{
    int m,item;
    cout<<"enter size of array: ";
    cin>>m;
    cout<<"enter elements of array: ";
    for(int i=1;i<=m;i++)
    {
        cin>>item;
        insertion(item);
    }
    cout<<"array after insertion: ";
    for(int i=1;i<=m;i++)
    {
        cout<<tree[i]<<" ";
    }
    cout<<endl<<"after heap sort: ";
    for(int i=1;i<=m;i++)
    {
        deletion();
    }
    return 0;
}
