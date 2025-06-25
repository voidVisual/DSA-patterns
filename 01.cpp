#include<iostream>
using namespace std;
class student
{
   public: 
    int roll;
    char name[20];
    void getdata()
    {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
    }
    void print(){
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};
int main()
{ 
    student om;
    om.getdata();
    om.print();
    return 0;
}