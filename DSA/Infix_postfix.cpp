#include <iostream>
#include <cstring>
using namespace std;
char stack[100];
int top = -1;
void push(char c)
{
    top++;
    stack[top] = c;
}
char pop()
{
    return stack[top--];
}
char peek()
{
    return stack[top];
}
int getPre(char op)
{
    if(op=='+' || op=='-')
        return 1;
    if(op=='*' || op=='/')
        return 2;
    if(op=='^')
        return 3;
    return 0;
}
int main()
{
    char infix[100],postfix[100];
    int k=0;
    cout<<"\nEnter Any Expression in Infix Form : ";
    cin>>infix;
    for(int i=0;i<strlen(infix);i++)
    {
        char ch = infix[i];
        if(isalnum(ch))
        {
            postfix[k++] = ch;
        }
        else if(ch=='(')
        {
            push(ch);
        }
        else if(ch==')')
        {
            while(peek()!='(')
            {   
                postfix[k++] = pop();
            }
            pop();
        }
        else 
        {
            while(top!=-1 && getPre(peek())>=getPre(ch))
            {
                postfix[k++] = pop();
            }
            push(ch);
        }
    }
    while(top!=-1)
    {
        postfix[k++] = pop();
    }
    postfix[k] = '\0';
    cout<<"\nPostfix Expression is : "<<postfix;
    return 0;
}