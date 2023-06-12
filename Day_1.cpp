//BASICS - CALCULATOR



#include <iostream>
using namespace std;

void expo(int a, int b) {

 
    int x1, x2;
    int sum1 = 1;
    int sum2 = 1;

    for (int i = 1; i<=a ;i++) {
        sum1 = sum1 * i;
    }

    for (int i = 1; i<=b ;i++) {
        sum2 = sum2 * i;
    }

    cout<<"Exponent of "<<a<<" is "<<sum1<<endl;
    cout<<"Exponent of "<<b<<" is "<<sum2<<endl;

}

int main() {

    int a, b;
    string choice;
    int num;
    string again;

    cout<<"Do you want to use the calculator? (y/n)"<<endl;
    cin>>choice;

    if(choice == "y") {

        Calc:

        cout<<"Enter two numbers: ";
        cin>>a>>b;

        cout<<"Enter 1 for Addition"<<endl;
        cout<<"Enter 2 for Subtraction"<<endl;
        cout<<"Enter 3 for Multiplication"<<endl;
        cout<<"Enter 4 for Division"<<endl;
        cout<<"Enter 5 for Exponent"<<endl;

        cin>>num;

        if (num == 1) {
            cout<<"Answer is: "<<a+b<<endl;
        }

        else if (num == 2) {
            cout<<"Answer is: "<<a-b<<endl;
        }
        
        else if (num == 3) {
             cout<<"Answer is: "<<a*b<<endl;
        }
        
        else if (num == 4) {
             cout<<"Answer is: "<<a/b<<endl;
        }

        else if (num == 5) {
            expo(a,b);
        }

        cout<<"Do you want to use calculator again? (y/n)"<<endl;
        cin>>again;
        
            if(again == "y") {
                goto Calc;
            }

            else
                cout<<"Thanks for using the calculator!";
    
    }

    else
        cout<<"Thanks for your time";

}
