#include <iostream>
#include <stack>
#include <string>
using namespace std;

int checkprec(char c)
{
    if(c=='+'||c=='-')
    {
        return 2;
    }
    else if(c=='*'||c=='/')
    {
        return 3;
    }
    else if(c=='^')
    {
        return 4;
    }
}
int gettype(char c)
{
    if(c=='(')
    {
        return 1;
    }
    else if(c==')')
    {
        return 2;
    }
    else if(c=='*'||c=='/'||c=='+'||c=='-'||c=='^')
    {
        return 3;
    }
    else
    {
        return 4;
    }
}
void postfix(string str)
{
    string newstr;
    stack <char> st;
    for(int i=0;i<str.length();i++)
    {
       int ch=gettype(str[i]);
       switch(ch)
       {
       case 1:
           st.push(str[i]);
           break;
       case 2:
           while(st.top()!='(')
           {
               newstr+=st.top();
               st.pop();
           }
           st.pop();
           break;
       case 3:
           if(st.empty()||checkprec(str[i])>checkprec(st.top())||st.top()=='(')
           {
               st.push(str[i]);
           }
           else
           {
               do
               {
                   newstr+=st.top();
                   st.pop();
               }
               while(!st.empty()&&checkprec(str[i])<=checkprec(st.top())&&st.top()!='(');
               st.push(str[i]);
           }
           break;
       default:
           newstr+=str[i];
           break;
       }

    }
    while(!st.empty())
    {
        newstr+=st.top();
        st.pop();
    }
    cout<<newstr;
}

int main()
{
    string str;
    cin>>str;
    postfix(str);
    return 0;
}
