#include <iostream>

using namespace std;

int main()
{
    int v,e,v1,v2;
    cout << "enter no. of vertexes: ";
    cin>>v;
    int **graph;
    graph=new int*[v];
    for(int i=0;i<v;i++)
    {
        graph[i]=new int[v];
        for(int j=0;j<v;j++)
        {
            graph[i][j]=0;
        }
    };
    cout<<"enter no.of edges: ";
    cin>>e;
    for(int i=0;i<e;i++)
    {
        cin>>v1>>v2;
        graph[v1-1][v2-1]=1;
        graph[v2-1][v1-1]=1;
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
