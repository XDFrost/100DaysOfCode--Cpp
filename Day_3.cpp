#include <iostream>
#include <cmath>
using namespace std;


//NUMBER SYSTEM


//1. Binary to Decimal Conversion

int main() {

    int power = 0;
    int num, last_digit;
    int sum = 0;
    cout<<"Enter a binary number: ";
    cin>>num;
    int num_copy = num;

    while(num>0) {

        last_digit = num%10;
        num = num/10;

        sum = sum + (last_digit * pow(2, power));
        power+=1;

    }

    cout<<"Decimal conversion of "<<num_copy<<" is: "<<sum;

}


//2. Decimal to binary conversion

/**
int main() {

    int num, parity;
    int power = 1;
    int sum = 0;
    cout<<"Enter a Decimal number: ";
    cin>>num;
    int num_copy = num;

    while(num>0) {

        parity = num%2;
        sum = (parity*power) + sum;
        power*=10;
        num = num/2;

    }

    cout<<"The conversion of "<<num_copy<<" into binary gives: "<<sum;

}
**/





// FUNCTIONS

// - A logical set of codes to perform a specific task.
// - Inputs(if any) are in the form of parameters.
// - Increases reusability of code.
// - Follows DRY (DON'T REPEAT YOURSELF) principle.
// - Makes the code easy to read.

//Types of functions:
    // 1. User Defined functions - 


            /** 
            return_type function_name(parameters) {
                statements;
            }
            **/
        
        // -> function_name is used to call a function.
        // -> return_type is the type of value to get returned ex. int, string, void etc..
        // -> return_type void is used to tell that function doesn't return anything.
        // -> parameters are used to give input(s) to the function.
        // -> Multiple functions with same name but different parameters may exist.
        // -> Function body refers to the task that the function performs.
        // -> We need to call a user-defined function from main() function.
        // -> A user-defined function should be always above main() function.
        // -> Function prototyping refers to the initialisation of function before main statement but defining the function after main statement



/**
int add(int num1, int num2) {

    int sum = num1 + num2;
    return sum;

}

int add(int num1, int num2, int num3) {

    int sum = num1 + num2 + num3;
    return sum;

}

float add(float num1, float num2) {

    float sum = num1 + num2;
    return sum;

}

int sub(int, int, int);                  // Function Prototyping
 
int main() {

    int a, b, c;
    cout<<"Enter 3 integer numbers: ";
    cin>>a>>b>>c;

    float d, e;
    cout<<"Enter 2 float numbers: ";
    cin>>d>>e;

    cout<<"Sum of first 2 integer numbers is: "<<add(a, b)<<endl;

    cout<<"Sum of 3 integer numbers is: "<<add(a, b, c)<<endl;

    cout<<"Sum of float numbers is: "<<add(d, e)<<endl;

    cout<<"Subtraction of 3 integers is: "<<sub(a, b, c);

}

int sub(int num_1, int num_2, int num_3) {

    int subt = num_1 - num_2 - num_3;

    return subt;

}
**/



// 2. Standard-Library Function

// - Pre-defined functions in cpp.
// - We need to add header file to use them
// - Ex: 
        // 1. pow(a,b)
        // 2. sqrt(a)


/**
int main() {

    cout<<pow(2,3)<<endl;
    cout<<sqrt(8);

    return 0;

}
**/