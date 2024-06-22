#include<iostream>
#include<math.h>
using namespace std;
double num1,num2;
string operation;

int main(){
    
    cout<<"Enter the operands(+,-,*,/)"<<endl;
    cin>>operation;             
    cout<<"Enter the First term "<<endl;
    cin>>num1;
    cout<<"Enter the Second term "<<endl;
    cin>>num2;
    if(operation=="+"){
        cout<<"OUTPUT: ";
        cout<<num1+num2;
    }
    else if(operation=="-"){
        cout<<"OUTPUT: ";
        cout<<num1-num2;
    }
    else if(operation=="*"){
        cout<<"OUTPUT: ";
        cout<<num1*num2;
    }
    else if(operation=="/"){
        cout<<"OUTPUT: ";
        cout<<num1/num2; 
    }
    else{
        cout<<"Invalid Operation";
    }


return 0;
}