#include <iostream>
using namespace std;




// SCOPE OF VARIABLES
// - Used to clarify the visibility/accessebility of a variable

// Two types: 
        // 1. Global scope   -   When the variables are outside of any function or any block; Can be accessed anywhere in the program    
        // 2. Local scope   -   When the variables are inside of any function or any block; Can be accessed only inside of the block; Unknown entities outside the block 



string name = "Luffy";          // Global variable

void fun() {

    int x = 10;                 // Local Variable; Can only be accessed inside the function/block.
    cout<<name;

}

int main() {

    cout<<name<<endl;
    name = "Zoro";              
    fun();
    return 0;
    
}





// Formal parametes and Actual parameters
// - Formal parameters:  Written in the definition of the function
// - Actual parameters: Values defined in the place of the place holders


/**
int add( int a, int b ) {             // a, b and c are formal parameters

    int c = a + b;
    return c;

}

int main() {

    int x = 2, y = 3;                 // x, y and z are actual parameters
    int z = add(x, y);
    cout<<z;

}
**/




// Pass by value and Pass by reference
// - Pass by value creates a copy of the assigned variables and won't change the original values but will change the copies of the original variables whenever any operation is applied
// - Pass by reference transfers the original set of data by passing the reference value of the variables (reference values are unique values that refers to the variables)



// PASS BY VALUE 
/**
void swap(int x, int y) {

    int temp = x;
    x = y;
    y = temp;

}

int main() {

    int i = 9, j = 6;
    swap(i, j);                        // i and j won't get swapped because we are working on the copies of these variables but not on the original variables
    cout<<i<<" "<<j;
    return 0;

}
**/



// PASS BY REFERENCE 
// - & is used to pass the reference of a variable; & gives the address
// - Copy isn't created

/**
int main() {

    int x = 9;
    int &y = x;                       // new operator y is made that points to the same memory location as x

    cout<<x<<" "<<y<<endl;
    y = 88;                           // Because of reference of y and x are same, when value of any of the two gets changed, value of the other variable also gets changed
    cout<<x<<" "<<y<<endl;
    return 0;

}
**/

/**
void swap(int &x, int &y) {

    int temp = x;
    x = y;
    y = temp;
    
}

int main() {

    int x = 9, y = 6;
    swap(x, y);                       // x and y gets swapped because the references gets interchanged
    cout<<x<<" "<<y;

}
**/




//POINTERS (Passing address to the function)
// - Points to/stores the address
// - Syntax:

        // data_type *Variable_name
// - Where *Variable_name is de-referencing operator 


/**
int main() {

    int x = 9;
    cout<<&x<<endl;                       // Gives the memory address of x

    cout<<x;

}
**/

/**
void fun(int *x) {

    cout<<x<<endl;
    cout<<*x;                 //De-referencing of x i.e. getting value from the address

}
int main() {

    int x = 9;
    fun(&x);
    return 0;

}
**/

// If we use & operator in the RHS, we'll be able to get address of x
// If we use & operator in the LHS, it'll become a reference variable

