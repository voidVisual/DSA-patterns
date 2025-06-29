#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to print pattern17
    void pattern17(int n) {
        // Outer loop for the number of rows.
        for(int i = 0; i < n; i++) {
            
            // Printing spaces before characters.
            for(int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            
            // Printing characters.
            char ch = 'A';
            int breakpoint = (2 * i + 1) / 2;
            for(int j = 1; j <= 2 * i + 1; j++) {
                cout << ch;
                if(j <= breakpoint)
                    ch++;
                else
                    ch--;
            }
            
            // Move to the next line for the next row.
            cout << endl;
        }
    }
};

int main() {
    int N = 5;
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.pattern17(N);
    
    return 0;
}

/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/