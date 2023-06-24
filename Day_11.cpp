#include <iostream>
using namespace std;



// Time Complexity and different notations

// Time complexity is based on number of operations

// Experimental Analysis:
        // We'll check the time taken by the operations applied in order to check the efficiency of code 
        // In the example below, by applying the for loop, we are applying 10^5 operations but by using the optimized method, we are applying less than 10 operations
        // It is a time consuming analysis
        // We won't be taking experimental analysis into account


int suminrange(int x, int y) {                          // n curve
    int result = 0;
    for(int i = x; i <= y; i++) {
        result+= i;
    }
    return result;
}

int suminrangeoptimised(int x, int y) {                 // Constant curve
    int n = (y-x+1);
    int a = x;
    int result = (n*(2*a+(n-1)*1))/2;
    return result;
}

int main() {
    cout<<suminrangeoptimised(1,100000);
    return 0;
}


// Asymtotic Analysis:
        // We'll compare algorithm based on the number of operations with respect to change in inputs
        // We'll mainly check for considerable input size
        // Neglect lower 
        // By taking the example of the above code, the optimized solution takes 10 instructions approx. even if the input parameters are changed, but in suminrange function, with every loop, number of instructions are increasing and hence with increase in inputs, instructions increases



// Growth of an algorithm:
        // Change in number of instructions with input size
        // Slow growth = Better algorithm
        // Growth curves: (Most to least efficient)
                // constant > log n > root n > n > nlogn > n^2 > n^3 > 2^n 
        


// Types of time complexity analysis and their notations:
        // 1. Worst case time complexity                     Contains the worst output case provided by the program; Mostly considerated
        // 2. Best case time complexity                      Contains the best output case provided by the program 
        // 3. Average case time complexity                   Contains average of the cases between the worst and best case scenarios

        // Worst case has Big O notation (O): 
                // In the above example, we had n instructions, so notation is: O(n)

        // Best case has Big Omega notation (Ω): 
                // In the above example, we had constant instructions, so notation is: Ω(1)                   If we want to specify constant instructions, we'll write 1

        // Average case has Big Theta notation (θ): 
                // In the above example, we had n instructions, so notation is: θ(n)



// Time complexity for traversing an array of length n

/**
int main() {

   int arr[] = {1,2,3,4,5,6,7,8,9};
   int n = 9;
   for(int i =0; i<n; i++) {                       // Here we are doing 3n operations, first is comparison for i<n, second is increment, third is printing, these are 3 operation and we are applying loop for n times, so there are 3n operations; if n is changed, operations will change
        cout<<arr[i]<<"\n";                        // Therefore, time complexiy is O(n)
   }
   return 0;

}
**/

// Time complexity when we are traversing 2 individual arrays of length m and n respectively

/**
int main() {
    
    int arr1[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int arr2[] = {1,2,13,4,35,6,7,58,9};
    int m =9;
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0;i<n;i++) {
        sum1+=arr1[i];
    }
    for(int i = 0;i<m;i++) {                         // Time complexity is O(m+n), because no of instructions are dependent upon input size
        sum2+=arr2[i];
    }
    cout<<sum1<<" "<<sum2;
    return 0;

}
**/

// Time complexity for nested loops

/**
int main() {

    int n = 5;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {                   // When i is 0, we'll do n iterations, when i becomes n, we'll do n iterations agains till termination condition is not met, so total terms = n, for every loop we are doing n iterations, hence complexity is O(n^2)
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;

}
**/




// SPACE COMPLEXITY

// - Extra memory space requirement of an algorith; extra space refers to the space in RAM
// - Consider using Asymtotic analysis
// - Doesn't take input and output into consideration
// - If space is changed with respect to change in input, we;ll consider it
// Ex:
        // Let's say, we are making a fibonacci series and finding the nth term, if nth term is a smaller number (let's say 8), then the space required to calulate is exceptionally samll, but if n is some is larger no(let's say 81), then space required increases with every iteration; space is changing because we are maintaining the whole array, to avoid this, we can take and maintain only 2 terms

/**
int main() {

    int n = 8;
    int a = 0;
    int b = 1;
    int c;
    for(int i = 0; i<n-1; i++) {                     // Since, we are only using 3 variables for any input case, so SPACE COMPLEXITY is constant i.e. O(1) and TIME COMPLEXITY is O(n)
        c = a+b;
        a = b;
        b = c;
    }
    cout<<c;

}
**/