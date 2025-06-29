#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to print pattern21
    void pattern21(int n) {
        // Outer loop for the rows.
        for(int i = 0; i < n; i++){
         
            /* Inner loop for printing
            the stars at borders only.*/
            for(int j = 0; j < n; j++){
                if(i == 0 || j == 0 || i == n-1 || j == n-1)
                    cout<<"*";
                    
                /* If it is not border 
                index, print space.*/
                else cout<<" ";
            }
         
            //move to the next row  
            cout<<endl;
        }
    }
};

int main() {
    int N = 5;
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.pattern21(N);
    
    return 0;
}

/*
*****
*   *
*   *
*   *
*****
*/