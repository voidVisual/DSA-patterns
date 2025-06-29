#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to print pattern19
    void pattern19(int n) {
        // Print the upper half pattern.
      
        // Store the initial spaces.
        int iniS = 0;
        
        for(int i=0; i< n; i++){
          
            //Printing the stars in the row.
            for(int j = 1; j <= n-i; j++){
                cout<<"*";
            }
          
            //Printing the spaces in the row.
            for(int j = 0; j <iniS; j++){
                cout<<" ";
            }
          
            //Printing the stars in the row.
            for(int j = 1; j <= n-i; j++){
                cout<<"*";
            }
          
            /* The spaces increase by 2 
            every time we hit a new row.*/
            iniS+=2;
             
            //Give a line break for a new row.
            cout<<endl;
        }
      
        // Print the lower half pattern
      
        // Store the initial spaces.
        iniS = 2*n -2;
        
        for(int i = 1; i <= n; i++){
          
            //Printing the stars in the row.
            for(int j = 1; j <= i; j++){
                cout<<"*";
            }
          
            //Printing the spaces in the row.
            for(int j = 0; j <iniS; j++){
                cout<<" ";
            }
          
            //Printing the stars in the row.
            for(int j = 1; j <= i; j++){
                cout<<"*";
            }
          
            /* The spaces decrease by 2 
            every time we hit a new row.*/
            iniS-=2;
          
            //Give a line break for a new row.
            cout<<endl;
        }
    }
};

int main() {
    int N = 5;
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.pattern19(N);
    
    return 0;
}

/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/