#include<iostream>
using namespace std;

class Calculator
{ 
    public:

        void addition()
        { 
            float a,b;
            cout<<"Enter number 1: "<<endl;
            cin>>a;
            cout<<"Enter number 2: "<<endl;
            cin>>b;

            cout<<"The sum of two numbers is: "<<a+b;
        }

        void subtraction()
        { 
            float a,b;
            cout<<"Enter number 1: "<<endl;
            cin>>a;
            cout<<"Enter number 2: "<<endl;
            cin>>b;
            cout<<"The subtraction of two numbers is: "<<a-b;
        }

        void multiply()
        { 
            float a,b;
            cout<<"Enter number 1: "<<endl;
            cin>>a;
            cout<<"Enter number 2: "<<endl;
            cin>>b;
            cout<<"The product of two numbers is: "<<a*b;
        }

        void division()
        { 
            float a,b;
            cout<<"Enter number 1: "<<endl;
            cin>>a;
            cout<<"Enter number 2: "<<endl;
            cin>>b;
            
            if(b==0)
            cout<<"division by zero is not possible"<<endl;
            cout<<"The division of two numbers is: "<<a/b;
        }

};

int main()
{ 
    Calculator c;
    int choice;
    
    cout<<"***************                 Simple Calculator                **************"<<endl;
    cout<<"1. Addition "<<endl;
    cout<<"2. Subtraction "<<endl;
    cout<<"3. Multiplication "<<endl;
    cout<<"4. Division "<<endl;
    cout<<"5. Exit "<<endl;

    xx : cout<<"\nEnter your choice: "<<endl;
    cin>>choice;

    switch(choice)
    { 
        case 1:
        c.addition();
        goto xx;
        break;

        case 2:
        c.subtraction();
        goto xx;
        break;

        case 3:
        c.multiply();
        goto xx;
        break;

        case 4:
        c.division();
        goto xx;
        break;

        case 5:
        cout<<"exit"<<endl;
        break;
        
        default:
        	cout<<"Enter Valid Choice!"<<endl;
        	goto xx;
    }

    return 0;

}