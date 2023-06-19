#include <iostream>
using namespace std;




// ARRAY PROBLEMS:

// 1. Sorting an array with only 0s and 1s 
/**
int main() {

    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int ele;
    int array[size] = {};
    int ansarray[size] = {};

    for(int i = 0; i<size; i++) {
        cout<<"Enter "<<i<<" array element considering it is 0 or 1: ";
        cin>>ele;

        array[i] = ele;
    }

    int total_0 = 0;
    int total_1 = 0;

    for(int j = 0; j<size; j++) {
        if(array[j] == 0) {
            total_0++;
        }
        
        else {
            total_1++;
        }
        
    }

    for(int k = 0; k<total_0; k++) {
        ansarray[k] = 0;
    }

    for(int l = total_0; l<size; l++) {
        ansarray[l] = 1;
    }

    cout<<"Sorted array becomes: ";

    for(int m = 0; m<size; m++) {
        cout<<ansarray[m]<<" ";
    }

} 
**/

// 2. Sorting an array to get all even integers at beginning and all odd at end
/**
int main() {
    
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int ele;
    int array[size] = {};
    int ansarray[size] = {};

    for(int i = 0; i<size; i++) {
        cout<<"Enter "<<i<<" array elementL: ";
        cin>>ele;

        array[i] = ele;
    }

    int evenIndex = 0;
    int oddIndex = size - 1;

    for (int j = 0; j < size; j++) {
        if (array[j] % 2 == 0) {
            ansarray[evenIndex] = array[j];
            evenIndex++;
        } else {
            ansarray[oddIndex] = array[j];
            oddIndex--;
        }
    }

    cout<<"Array elements are: ";

    for(int m = 0; m<size; m++) {
        cout<<ansarray[m]<<" ";
    }


}
**/


// PREFIX SUM PROBLEM:

// 1. Return an array with running sum without creating a new array 
/**
int main() {

    int size;
    cout<<"Enter the array size: ";
    cin>>size;

    int array[size] = {};
    int ele;

    for(int i = 0; i<size; i++) {
        cout<<"Enter "<<i<<" element in array: ";
        cin>>ele;
        array[i] = ele;
    }

    for(int j = 0; j<size; j++) {
        array[j+1] = array[j] + array[j+1];
    }

    cout<<"Array element after running sum: ";

    for(int k = 0; k<size; k++) {
        cout<<array[k]<<" ";
    }

}
**/
