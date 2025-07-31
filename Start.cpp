#include<bits/stdc++.h>
using namespace std; // using this here will save us from writing std:: before every standard library usage

int main(){

    cout << "I like c++" << endl; // endl is used to insert a new line and flush the output buffer
    cout << "I like python too" << '\n'; // it is better performance wise
    // types of data types in c++


                        // 1. Primitive data types

    int a = 10; // integer
    float b = 5.5; // floating point
    char c = 'A'; // single character
    bool d = true; // boolean
    long long e = 1000000000; // long long integer

                        // 2. Derived data types

    int arr[5] = {1, 2, 3, 4, 5}; // array of integers
    string str = "Hello, World!"; // string (array of characters)



    vector<int> vec = {1,3,4,5,6,7}; // vector (dynamic array)

    
    // to use vector without predefined values and size, you can use:
    vector<int> vec2; // empty vector, can be resized later

//adding elements to vector
    vec2.push_back(1);
    vec2.push_back(2);
    vec2.push_back(3);
    for(auto it : vec2) {
        cout << it << " "; //this will print vector elements
    }

// to remove the last element from the vector
    vec2.pop_back(); // removes the last element

// to access elements of the vector
    cout << "\nFirst element: " << vec2[0] << endl; // accessing first element

    return 0;
}