#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to print pattern18
    void pattern18(int n) {
        // Outer loop for the number of rows.
        for(int i = 0; i < n; i++) {
            
            /* Inner loop for printing alphabets
            from A + n -1 -i (i is row no.) to
            A + n -1 ( E in this case).*/
            for(char ch = ('A'+ n-1)-i; ch <= ('A'+ n-1); ch++){
                cout<<ch<<" ";
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
    
    sol.pattern18(N);
    
    return 0;
}

/*
E 

D E 

C D E 

B C D E 

A B C D E
*/