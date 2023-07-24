#include<iostream>
#include<string.h>
using namespace std;
class Student{
    private:
    int roll;
    string name;
    string addr;
    string mobile_no;

    public:
    void get_data();
    void display_data();
};

void Student::get_data()
{
    cout << "\n enter name of the student:\t ";
    cin >> name;
    cout << " \n Enter student rollno:\t ";
    cin >> roll;
    cout << "\n enter students adress:\t";
    cin>> addr;
    cout << "\n enter student mobile number:\t";
    cin >> mobile_no;
}
void Student::display_data()
{
    cout << "\n student name :\t" << name;
    cout << "\n student rollno:\t" << roll;
    cout << "\n student adress :\t" << addr;
    cout << "\n student mobile number :\t" << mobile_no;

} 

int main()
{
    int i,n;
    Student s[150];

    cout << " how mant students data you hae to enter ???" << endl;
    cin >> n ;

    for (i=0;i<n;i++)
    {
        s[i].get_data(); 
    }
    cout << " enter data sucessfully" << endl;

    cout << "\n student data is as follow: >>>> " << endl;
    for(i=0;i<n;i++)
    {
        s[i].display_data();
    }

}

