#include <iostream>
using namespace std;





// 1D - Array

// - Array is a data structure that stores a collection of items
// - Items should be homogeneous
// - Stores in the form of contiguous memory i.e. elements are stored in the form of contiguous block of memory
// - If we initialize an array but do not allocate any values, garbage values gets allocated 


/**

    Ex: 1 2 3 4 5    ->    Array of integers
    length of array = 5

*/


// - We can access elements of an array through the index
// - Index ranges from 0 to (length - 1)


// Syntax:

        // data_type array_name[array_size]

// Initialising array elements:

        // data_type array_name[] = {element, element....}

// Accessing elements of an array:

    /**
        int array[] = {x1, x2, x3, x4...}
        array[index]
    */

// Operations in array:

        // 1. sizeof: Tells the sizeof array (Gives the size taken by array in the memory)

        // 2. length of array/ Total elements in array: sizeof(array) / sizeof(any array element)





// Traversing through array:

        // 1. For loop

/**
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int arr_length = (sizeof(arr) / sizeof(arr[0]));

    for (int index = 0; index <= arr_length - 1; index++)                        // Traversing through the array
    {

        cout << arr[index] << endl;

    }

    return 0;

}
**/


        // 2. For each loop 

/**
int main() {

    int arr[] = {1, 2, 3, 4, 5};

    for(int element:arr) {

        cout<<element<<endl;

    }

}
**/


        //3. While loop

/**
int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int index = 0;
    int arr_length = (sizeof(arr) / sizeof(arr[0]));

    while(index<arr_length) {

        cout<<arr[index]<<endl;
        index++;

    }

}
**/





// Taking inputs in an array

/**
int main() {

    int size;
    cout<<"Enter array size: ";
    cin>>size;

    char arr[size];

    for(int index = 0; index<=size - 1; index++) {

        cout<<endl<<"Enter "<<index+1<<" element: ";
        cin>>arr[index];

    }
    
    for(int index = 0; index<=size - 1; index++) {

        cout<<endl<<"Array element "<<index+1<<" : " <<arr[index]<<" ";

    }

}
**/





// Problems based on array


// 1. Calculating sum of all elements in an array 

/**
int main() {

    int size;
    cout<<"Enter array size: ";
    cin>>size;

    int arr[size];

    for(int index = 0; index<=size - 1; index++) {

        cout<<endl<<"Enter element at "<< index <<" position: ";
        cin>>arr[index];

    }

    int sum = 0;

    for(int index = 0; index<=size - 1; index++) {

        sum = sum + arr[index];

    }

    cout<<endl<<"Sum is: "<<sum;

}
**/


// 2. Max value of all elements in array 

/**
int main() {

    int size;
    cout<<"Enter array size: ";
    cin>>size;

    int arr[size];

    for(int index = 0; index<=size - 1; index++) {

        cout<<endl<<"Enter element at "<< index <<" position: ";
        cin>>arr[index];

    }

    int max_val = arr[0];

    for(int index = 0; index<= size - 1; index++) {

        if(arr[index] > arr[index+1]) {

            max_val = arr[index];

        }

    }

    cout<<endl<<"Max value in array is: "<<max_val;

}
**/


// 3. Linear search (return inex if element is present else return -1)

int main() {

    int size;
    cout<<"Enter array size: ";
    cin>>size;

    int arr[size];

    for(int index = 0; index<=size - 1; index++) {

        cout<<endl<<"Enter element at "<< index <<" position: ";
        cin>>arr[index];

    }


    int search;
    int ans = -1;
    cout<<endl<<"What number do you want to search in array: ";
    cin>>search;

    for(int index = 0; index>=size - 1;index++) {

        if( arr[index] == search) {

            ans = index;

        }

        else
            continue;

    }

    cout<<"Element is present at "<<ans<<" index";

}
