#include <iostream>

using namespace std;
int top=-1;
int quick(int a[],int beg,int endd)
{
    int loc=beg;
    int left=beg;
    int right=endd;
    while(a[right]>=a[loc]&&right>loc)
    {
        right=right-1;
    }
    if(loc==right)
    {
        return loc;
    }
    int temp=a[right];
    a[right]=a[loc];
    a[loc]=temp;
    loc=right;
    while(a[left]<=a[loc]&&left<loc)
    {
        left=left+1;
    }
    if(loc==left)
    {
        return loc;
    }
    temp=a[left];
    a[left]=a[loc];
    a[loc]=temp;
    loc=left;
    return loc;
}
int main()
{
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"enter elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int lower[5],upper[5];
    top++;
    lower[top]=0;
    upper[top]=n-1;
    int beg,endd,loc;
    while(top!=-1)
    {
        beg=lower[top];
        endd=upper[top];
        top--;
        loc=quick(a,beg,endd);
        if(beg<loc-1)
        {
            top++;
            lower[top]=beg;
            upper[top]=loc-1;
        }
        if(loc+1<endd)
        {
            top++;
            lower[top]=loc+1;
            upper[top]=endd;
        }
    }
    cout<<"array after quick sort: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
