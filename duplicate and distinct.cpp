#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"enter size of first array: ";
    cin>>m;
    int a[m];
    cout<<"enter elements of first array: ";
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<"enter size of second array: ";
    cin>>n;
    int b[n];
    cout<<"enter elements of second array: ";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(a[i]==a[j])
            {
                for(int k=j;k<m;k++)
                {
                    a[k-1]=a[k];
                }
                m--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
            {
                for(int k=j;k<n;k++)
                {
                    b[k-1]=b[k];
                }
                n--;
            }
        }
    }
    cout<<"DISTINCT ELEMENTS: ";

        for(int i=0;i<m;i++)
        {
            int flag=0;
            for(int j=0;j<n;j++)
            {
                if(a[i]==b[j])
                {
                    flag=1;
                }
             }
             if(flag==0)
             {
                 cout<<a[i]<<" ";
             }
        }

        for(int i=0;i<n;i++)
        {
            int flag=0;
            for(int j=0;j<m;j++)
            {
                if(b[i]==a[j])
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                cout<<b[i]<<" ";
            }
        }
    cout<<endl;
    cout<<"DUPLICATE ELEMENTS: ";
    for(int i=0;i<m;i++)
    {
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<a[i]<<" ";
        }

    }
    return 0;
}
