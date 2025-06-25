#include<iostream>
using namespace std;
typedef struct management
    {
        int roll;
        char name[20];
    } man1;

int main(){
    man1 om;
    cout << "Enter roll number: ";
    cin >> om.roll;
    cout << "Enter name: ";
    cin >> om.name;
    
    cout << "Roll Number: " << om.roll << endl;
    cout << "Name: " << om.name << endl;

    return 0;
}
