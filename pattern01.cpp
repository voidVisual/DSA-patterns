#include<iostream>
using namespace std;
void pattern01(int n){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    pattern01(4);
    return 0;
}
