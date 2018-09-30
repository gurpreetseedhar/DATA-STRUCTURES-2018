#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
stack <int> s;
char gettype(char c)
{
    if(c=='*'||c=='/'||c=='+'||c=='-'||c=='^')
    {
        return 'o';
    }
    else
    {
        return 'z';
    }
}

void eval(char o,int num1,int num2)
{
    int res;
    switch(o)
    {
        case '*':
        res=num2*num1;
        break;
        case '/':
        res=num2/num1;
        break;
        case '+':
        res=num2+num1;
        break;
        case '-':
        res=num2-num1;
        break;
        case '^':
        res=num2^num1;
        break;

    }
    s.push(res);
}
int main()
{
    string postfix;
    cin>>postfix;
    int n=postfix.length();
    postfix[n]=')';
    for(int i=0;postfix[i]!=')';i++)
    {
        if(postfix[i]==' '||postfix[i]=='\t')
        {
            continue;
        }
        else
        {
            switch(gettype(postfix[i]))
            {
            case 'o':
                int num1,num2;
                num1=s.top();
                s.pop();
                num2=s.top();
                s.pop();
                eval(postfix[i],num1,num2);
                break;
            case 'z':
                s.push(postfix[i]-'0');
                break;
            }
        }
    }
    cout<<s.top();
    return 0;
}
