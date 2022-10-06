#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,op;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"\n 1)add \n 2)sub \n 3)mul \n 4)div";
    cout<<"\n Enter the choice: "<<endl;
    cin>>op;
    
    
    switch(op)
    {
        case 1:
     
           c = a + b;
           cout<<c<<endl;
           break;
     
        
        case 2:
        
            c = a - b;
           cout<<c<<endl;
           break;
        
        case 3:
        
            c = a * b;
           cout<<c<<endl;
           break;
        
        case 4:
        
            c = a / b;
           cout<<c<<endl;
           break;
        
        
    }
    return 0;
}

