#include <iostream> 
using namespace std;




// PROBLEMS

// 1. Target Sum (Pairs in an array ending up being target sum)

/**
int main() {

    int array[] = {3, 4, 6, 7, 1};
    int target = 7;
    int size = 5;
    int pairs = 0;

    for(int i = 0; i<size; i++) {
        for(int j = i+1; j<size; j++) {
            
            if(array[i] + array[j] == target) {

                pairs++;

            }

        }
    }

    cout<<"Total pairs are: "<<pairs;

}
**/

// 2. Target Sum (Triplets in an array ending up being target sum)

/**
int main() {

    int array[] = {3, 1, 2, 4, 0, 6};
    int target = 5;
    int size = 6;
    int triplets = 0;

    for(int i = 0; i<size; i++) {
        for(int j = i+1; j<size; j++) {
            for(int k = j+1; k<size; k++) {

                if(array[i] + array[j] + array[k] == target) {

                    triplets++;

                }

            }
        }
    }

    cout<<"Total triplets are: "<<triplets;

}
**/

// 3. Find the unique numbers in the array where elements are being repeated twice

/**
int main() {

    int array[] = {1, 2, 3, 2, 3, 4, 5, 1, 4, 6};
    int size = 10;
    int store = 0;
    int count = 0;

    for(int i = 0; i<size; i++) {
        store = array[i];
        for(int j = i+1; j<size; j++) {

            if(array[i] == array[j]) {
                array[i] = -1;
                array[j] = -1;
            }

        }
    }

    for(int k = 0; k<size; k++) {

        if(array[k] != -1) {
            count++;
        }

        else {
            continue;
        }

    }

    cout<<count;

} 
**/

// 4. Second Largest in a given array 

/**
int main() {
    
    int array[] = {1,3,5,6,9,4,2,1,3,0};
    int size = 10;

    for(int i = 0; i<size; i++) {
        for(int j = i+1; j<size; j++) {
            
            if(array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }

            else {
                continue;
            }

        }
    }
    
    cout<<"Second largest element in the array is: "<<array[1];

}
**/

// 5. Rotate the array by k steps i.e. Last element becomes first element 

// LOGIC:
        // Array = 1,2,3,4,5, k = 2

        // Before rotation: 1,2,3,4,5            
        // After rotation: 4,5,1,2,3             Last k i.e. 2 elements comes at first and other size - k elements go at last

int main() {

    int array[] = {1,2,3,4,5,6,7,8,9,0};

    int rotate;
    cout<<"Enter no of rotations: ";
    cin>>rotate;

    int size = 10;
    int ansarray[size];

    rotate = rotate%size;                            // Steps to be rotated; if k = size, rotations = 0, because remainder = 0 and let's say size = 5, k = 6, so 6%5 = 1 so rotations will be 1 because after 5 rotations, we'll get the original array

    int j = 0;

    for(int i = size-rotate; i<size; i++) {          // Inserting last k elements in ansarray
        ansarray[j] = array[i];
        j++;
    }

    for(int i = 0; i<=size; i++) {                   // Inserting first n-k elements in ansarray
        ansarray[j] = array[i];
        j++;
    }                     

    cout<<"Array elements after "<<rotate<<" rotation(s) are: ";

    for(int j = 0; j<size; j++) {
        cout<<ansarray[j]<<" ";
    }

}
