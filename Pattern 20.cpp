#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to print pattern20
    void pattern20(int n) {
        // Initialising the spaces.
        int spaces = 2*n-2;
      
        // Outer loop to print the row.
        for(int i = 1; i <= 2*n-1; i++){
          
            // Stars for first half
            int stars = i;
          
            // Stars for the second half.
            if(i > n) stars = 2*n - i;
          
            //For printing the stars
            for(int j = 1; j <= stars; j++){
                cout<<"*";
            }
          
            //For printing the spaces
            for(int j = 1; j <= spaces; j++){
                cout<<" ";
            }
          
            //For printing the stars
            for(int j = 1; j <= stars; j++){
                cout<<"*";
            }
          
            //Give a line break for new row.
            cout<<endl;
            
            if(i<n) spaces -=2;
            else spaces +=2;
        }
    }
};

int main() {
    int N = 5;
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.pattern20(N);
    
    return 0;
}

/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/