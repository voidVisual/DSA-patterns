#include<iostream>
using namespace std;
void pattern02(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    pattern02(4);
    return 0;
}