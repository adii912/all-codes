# include<iostream>

using namespace std;

/*
cout << "Age: " << &age << endl;
cout << "gpa: " << &gpa << endl;
cout << "Name: " << &name << endl;
*/

int main()
{
   int age = 19;
   int *pAge = &age;

   double gpa = 2.7;
   double *pGpa = &gpa;

   string name = "mike";
   string *pName = &name;

cout << &*&gpa;



    return 0;
}