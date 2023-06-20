#include <iostream>
using namespace std;





// MULTIDIMENSIONAL ARRAY

// - array of arrays
// - Syntax:    

                // datatype arrayname[size_1][size_2].....[size_n]

// - Has grid representation
// - Faster access
// - Predefined size




// 2-D ARRAYS

// - Dimensions = 2, so we'll give 2 sizes as rows and columns
// - In the form of matrix/table
// - Syntax:

                // datatype arrayname[rows][columns]    

// - Ex: int array[4][3]
// - We'll take both the indexes in order to specify the element one signifies row and other signifies the column
// - Representation:

                // a[i][j]           Where i is row number and j is column number

// - Ex: 

        //           column0        column1        column2
        // row0      a[0][0]        a[0][1]        a[0][2]
        // row1      a[1][0]        a[1][1]        a[1][2]
        // row2      a[2][0]        a[2][1]        a[2][2]
        // row3      a[3][0]        a[3][1]        a[3][2]

// - No. of elements = rows * columns




// INITIALISING 2-D ARRAYS

// Method 1:              int arrayname[rows][columns] = {element1, element2.....}
// Method 2:              int arrayname[rows][columns] = {{elements of row 1}, {elements of row 2}......}  




// TAKING INPUT IN 2-D ARRAY

// - First loop runs for input and other runs for columns
// - Ex:

        // for(int i = 0; i<rows; i++) {                         First we go into 0th row and traverse through its columns, after columns are traversed, row number is increased by 1
        //     for(int j = 0; j<columns; j++) {                  Outer loop covers rows, inner loop covers columns
        //         cin>>arr[i][j];
        //     }
        // }



/**
int main() {

    int row, col;
    cout<<"Enter rows and columns: ";
    cin>>row>>col;

    int arr[row][col];

    for(int i = 0; i<row; i++) {
        for(int j = 0; j<col; j++) {
            cout<<"Enter element at ("<<i<<","<<j<<") position: ";
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i<row; i++) {
        for(int j = 0; j<col; j++) {
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }

}
**/




// Multiplication of Matrices

int main() {
    
    int row1, col1;
    cout<<"Enter the number of rows and columns: ";
    cin>>row1>>col1;

    int mat1[row1][col1];


    for(int i = 0; i<row1; i++) {
        for(int j = 0; j<col1; j++) {
            cout<<"Enter element at ("<<i<<","<<j<<") position: ";
            cin>>mat1[i][j];
        }
    }


    int row2, col2;
    cout<<"Enter the number of rows and columns: ";
    cin>>row2>>col2;

    int mat2[row2][col2];

    for(int k = 0; k<row2; k++) {
        for(int l = 0; l<col2; l++) {
            cout<<"Enter element at ("<<k<<","<<l<<") position: ";
            cin>>mat2[k][l];
        }
    }

    if(col1 != row2) {
    
        cout<<"Matrix multiplication not possible for given input.";
    
    }

    else {

        int c[row1][col2];

        for(int i = 0; i<row1; i++) {
            for(int j = 0; j<col2; j++) {
                int value = 0;
                for(int k = 0; k<col1; k++) {
                    value += mat1[i][k] * mat2[k][j];
                    c[i][j] = value;
                }
            }
        }
    
        for(int i = 0; i<row1; i++) {
            for(int j = 0; j<col2; j++) {
                cout<<c[i][j]<<" ";
            }
        cout<<endl;
        }
    }
}
