#include <iostream>
#include <cmath>
using namespace std;


//SWITCH CASE
// Print day based on day number

int main() {

    int day;
    cout<<"Enter a day number: ";
    cin>>day;

    switch(day) {

        case 1:
        cout<<endl<<"The day is Monday";
        break;

        case 2:
        cout<<endl<<"The day is Tuesday";
        break;

        case 3:
        cout<<endl<<"The day is Wendnesday";
        break;

        case 4:
        cout<<endl<<"The day is Thursday";
        break;
        
        case 5:
        cout<<endl<<"The day is Friday";
        break;
        
        case 6:
        cout<<endl<<"The day is Saturday";
        break;
        
        case 7:
        cout<<endl<<"The day is Sunday";
        break;

        default:
        cout<<"Number is out of range. Expected range - 1 to 7";
        
    }    

    return 0;
}



//PATTERN PRINTING
//1. Rectangular Pattern

/**
int main() {

    int rows, columns;
    cout<<"Enter your desired rows and columns: ";
    cin>>rows>>columns;

    for(int i = 0; i<=rows-1; i++) {
        for(int j = 0; j<=columns-1; j++) {

            cout<< "*";

        }
        cout<<endl;
    }

}
**/


//2. Hollow Rectangular Pattern

/**
int main() {

    int rows, columns;
    cout<<"Enter your desired rows and columns: ";
    cin>>rows>>columns;

    for(int i = 0; i<=rows-1; i++) {
        for(int j = 0; j<=columns-1; j++) {

            if(i == 0 || j == 0 || i == rows-1 || j == columns-1) {
                cout<<"*";

            }

            else {
                
                cout<<" ";

            }

        }

        cout<<endl;

    }

}
**/


//3. Triangular Pattern

/**
int main() {

    int num;
    cout<<"Enter the number to print stars for triangle: ";
    cin>>num;

    for(int i = 0; i<=num - 1; i++) {
        for(int j = 0; j<=i;j++) {

            cout<<"*";

        }

        cout<<endl;

    }

}
**/


// 4. Inverted Triangle

/**
int main() {

    int num;
    cout<<"Enter the number to print stars for triangle: ";
    cin>>num;

    for(int i = num-1; i>=0; i--) {
        for(int j = 0; j<=i; j++) {

            cout<<"*";

        }

        cout<<endl;

    }

}
**/


// 5. Equilateral Triangle

/**
int main() {

    int rows;
    cout<<"Enter the number of columns for triangle: ";
    cin>>rows;

    for(int i = 0; i<=rows-1; i++) {
        for(int j = 0; j<=(rows - i); j++) {
            cout<<" ";
        }
        for(int k = 0; k<=(2*i); k++) {
            cout<<"*";
        }
    
        cout<<endl;
    
    }

} 
**/

// 6. Numerical Value Rectangle Pattern

/**
int main() {

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i = num; i>=1; i--) {
        for(int j = 1; j<=i; j++) {

            cout<<j - i + num;
        
        }
        for(int k = num; k>i; k--) {

            cout<<num-k+1;

        }
        cout<<endl;
    
    }

}
**/



//LOOPING PROBLEMS
// 1. Reverse of a number

/**
int main() {

    int num,last_digit,num_copy;
    int reverse = 0;
    cout<<"Enter a number: ";
    cin>>num;
    num_copy = num;

    while(num>0) {

        last_digit = num%10;
        reverse = reverse*10 + last_digit;
        num = num/10;

    }

    cout<<"Reverse of "<<num_copy<<" is: "<<reverse;

}
**/

// 2. Factorial of a number

/**
int main() {

    int num, fact=1;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i = 1;i<num+1;i++) {

        fact=fact*i;

    }

    cout<<"Factorial of "<<num<<" is: "<<fact;
}
**/

// 3. Fibonacci Series

/**
int main() {

    int last_num,current_num,next_number,length;
    int a, b;

    cout<<"Enter First number and Second number: ";
    cin>>last_num>>current_num;
    
    cout<<"Enter the length of series: ";
    cin>>length;
    
    a = last_num;
    b = current_num;

    for(int i=1; i<=length-2; i++) {
        
        if(a==last_num && b==current_num) {

            cout<<last_num<<" "<<current_num<<" ";

            next_number = last_num+current_num;
        
        }

        else

            cout<<next_number<<" ";

            next_number = last_num+current_num;
            last_num = current_num;
            current_num = next_number;

    }

    return 0;

}
**/

//4.ARMSTRONG NUMBER

/**
int main() {

    int num, last, num_copy;
    cout<<"Enter a number: ";
    cin>>num;
    num_copy = num;
    int armstrong = 0;

    int length = to_string(num).length();

    for(int i = 0; i<length; i++) {

        last = num%10;
        num = num/10;
        armstrong = armstrong + pow(last,length);

    }

    if(num_copy == armstrong) {

        cout<<num_copy<<" is an Armstrong number.";

    }

    else

        cout<<num_copy<<" is not an Armstrong number.";

}
**/