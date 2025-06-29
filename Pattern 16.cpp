#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to print pattern16
    void pattern16(int n) {
        // Outer loop for the number of rows.
        for(int i=0;i<n;i++){
          
            // Defining character for each row.
            char ch = 'A'+i;
            for(int j=0;j<=i;j++){
              
                /*same char is to be printed
                i times in that row.*/
                cout<<ch;
            }
            /* As soon as the letters for each 
            iteration are printed, we move to the
            next row and give a line break otherwise
            all letters would get printed in 1 line.*/
            cout<<endl;
        }
    }

};

int main() {
    int N = 5;

    //Create an instance of Solution class
    Solution sol;

    sol.pattern16(N);

    return 0;
}

/*
A

BB

CCC

DDDD

EEEEE
*/