#include<iostream>
using namespace std;
int main()
{
    
    char opr;
    float n1,n2;
    
    cout<<"Enter the operator: +, -, *, / :";
    cin>>opr;

    cout<<"Enter two operands:";
    cin>>n1>>n2;
    
    switch(opr)
    {
        case '+':
        cout<<n1 <<"+" <<n2 <<"=" <<n1+n2;
        break;
        
        case '-':
        cout<<n1 <<"-" <<n2 <<"=" <<n1-n2;
        break;

        case '*':
        cout<<n1 <<"*" <<n2 <<"=" <<n1*n2;
        break;

         case '/':
        cout<<n1 <<"/" <<n2 <<"=" <<n1/n2;
        break;

        default:
        cout<<"Error! You have chose the wrong operator";
        break;

    }
    return 0;
}