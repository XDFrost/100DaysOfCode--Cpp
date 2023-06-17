#include <iostream>
#include <vector>
using namespace std;





//VECTORS 

// - Dynamic Arrays i.e. we can resize an array 
// - Contiguous Memory



// Basic Operations:


    // 1. Declaration:
        /**
            #include <vector>
            vector<data_type> vector_name;                Without size declaration

                          OR
                 
            vector<data_type> vector_name(size)           With size declaration
        **/


    // 2. size: Gives the length of vector/ number or elements in vector

            // vector_name.size()


    // 3. resize: Changes the size of vector

            // vector_name.resize(n)                      Where n is new size of the vector

    
    // 4. capacity: Gives the size of allocated memory; Capacity >= Size/length
                    // - Increases in the power of 2
                    // Only increases when elements are added
                    // - Won't increase if size<capacity
                    // - If size>capacity, capacity will increase and will again check if size>capacity or not
    
                    // NOTE: Capacity increase method varies from compiler to compiler 

            // vector_name.capacity() 

            // ex: 1    ->     size = 1
            //                 capacity = 1
                
            //     1, 2    ->     size = 2
            //                    capacity = 2
                
            //     1, 2, 3    ->     size = 3
            //                       capacity = 4
                
            //     1, 2, 3, 4    ->     size = 4
            //                          capacity = 8
                
            //     1, 2, 3, 4, 5    ->     size = 5
            //                             capacity = 16


    // 5. Add elements:
        
        // i. pushback() - Adds element in last 
            // vector_name.pushback(element)

                // ex: vector = 1, 2, 3;
                //     vector.pushback(4);
                //     vector becomes: 1, 2, 3, 4

        // ii. insert() - Adds elements at specified position
            // vector_name.insert(position, element)                     Here position is related to the starting / ending position of the vector
            
            // vector_name.begin() - Gives starting position
            // vector_name.end() - Gives ending position

            // ex: vector = 1, 2, 3
                //    vector.insert(v.begin(), 4);
                //    vector.insert(v.end(), 4);
                //    vectors becomes:    4, 1, 2, 3    and    1, 2, 3, 4


    // 6. Delete elements:

        // i. vector_name.pop_back() - Removes element from last

        // ii. vector_name.erase(position) - Removes element from specified position                   Here position is related to the starting / ending position of the vector
        
        // iii. vector_name.clear() - Removes all element





/**
int main() {

    vector<int> v;

    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl<<endl;

    v.push_back(1);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl<<endl;

    v.push_back(2);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl<<endl;

    v.push_back(3);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl<<endl;

    v.push_back(4);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl<<endl;

    v.resize(5);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl<<endl;

    v.resize(11);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl<<endl;

    v.pop_back();
    v.pop_back();
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl<<endl;

}   
**/





// Looping in vectors

int main() {

    vector<int> v;

    // For loop

    int size;
    cout<<"Enter size of the vector: ";
    cin>>size;

    for(int i = 0; i<size; i++) {

        int ele;
        cout<<endl<<"Enter element at "<<i<<" position: ";
        cin>>ele;
        v.push_back(ele);

    }

    for(int i = 0; i<size; i++) {

        cout<<endl<<"Element at "<<i<<" position is: "<<v[i];

    }

}
