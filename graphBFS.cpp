#include <iostream>
#include <queue>
using namespace std;
int cost[10][10],visited[10],visit[10];
int main()
{
    int n,e,v1,v2,v;
    cout<<"enter no. of vertexes: ";
    cin>>n;
    cout<<"enter no. of edges: ";
    cin>>e;
    for(int k=0;k<e;k++)
    {
        cin>>v1>>v2;
        cost[v1][v2]=1;
    }
    cout<<"enter initial vertex: ";
    cin>>v;
    cout<<v<<endl;
    visited[v]=1;
    int k=1;
    queue <int> qu;
    while(k<n)
    {
        for(int j=1;j<=n;j++)
        {
            if(cost[v][j]!=0&&visited[j]!=1&&visit[j]!=1)
            {
                visit[j]=1;
                qu.push(j);
            }
        }
        v=qu.front();
        qu.pop();
        cout<<v<<endl;
        k++;
        visit[v]=0;
        visited[v]=1;
    }
    return 0;
}
