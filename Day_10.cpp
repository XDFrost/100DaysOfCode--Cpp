#include <iostream>
#include <vector>
using namespace std;





// 2-D VECTORS
// - Vector of vector datatype
// - Syntax:

            // vector<vector<data_type>> vector_name

// - Ex:  

        // vector<int> v1 = {1, 2, 3};
        // vector<int> v2 = {4, 5};
        // vector<int> v3 = {6, 7};
        
        // vector<vector<int>> V = {v1, v2, v3};

        // This gives us: {{1,2,3}
        //                 {4,5}
        //                 {6,7}}


// Initialising a 2-D vector of size mxn:       vector<vector<int>> V(n,vector<int>(m));
// Ex: 

        // Initialising a vector of size 3x4
        // vector <vector<int>> V(3, vector<int>(4));
        // If we want to initialise all value inside the above vector as 0: vector <vector<int>> V(3, vector<int>(4,0));


// Problems:
// 1. Pascal's Triangle

/**
vector<vector<int>> pascaltri(int size) {
    vector<vector<int>> pascal(size);

    for(int i = 0; i<size; i++) {
        pascal[i].resize(i+1);

        for(int j = 0; j<i+1; j++) {
            
            if(j == 0 || j == i) {
                pascal[i][j] = 1;
            }
            
            else {
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}

int main()  {

    int size;
    cout<<"Enter the size of pascal triangle: ";
    cin>>size;

    vector<vector<int>> ans;
    ans = pascaltri(size);

    for(int i = 0; i<ans.size(); i++) {
        for(int j = 0; j<ans[i].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}
**/


// 2. Given a 2-D boolean array where each row is sorted, find row with maximum number of 1s
/**
int main() {

    int rows, cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;

    int arr[rows][cols];
    int ans[rows];

    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++) {
            cout<<"Enter Boolean element at position ("<<i<<","<<j<<"): ";
            cin>>arr[i][j];
        }
    }

    for(int k = 0; k<rows; k++) {
        int num = 0;
        for(int l = 0; l<cols; l++) {
            if(arr[k][l] == 1) {
                num+=1;
            }
        }
        ans[k] = num;
    }

    int max = ans[0];
    int index = 0;

    for(int m = 0; m<rows; m++) {
        if(max < ans[m]) {
            max = ans[m];
            index = m;
        }
    }

    cout<<"Maximum number of 1s are present in row at index "<<index;

}
**/


// 3. Given a square array, rotate it by 90 degree in anti-clockwise direction without making a new array
int main() {

    int n;
    cout<<"Enter the dimensions of matrix: ";
    cin>>n;

    int arr[n][n];

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout<<"Enter array element at position ("<<i<<","<<j<<"): ";
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    int temp;

// Getting transpose

    for(int i = 0; i<n; i++) {
        for(int j = i + 1; j<n; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

// Swap Rows

    for(int i = 0; i<n/2; i++) {
        for(int j = 0; j<n;j++) {
            swap(arr[i][j], arr[n-i-1][j]);
        }
    }

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
