#include<iostream>
#include<cmath>

using namespace std;

int main ()
{
string color, pluralnoun, celebrity;

cout << "enter a color:" << endl;
getline(cin, color);

cout << "enter a pluralnoun:" << endl;
getline(cin, pluralnoun);

cout << "enter a celebrity:" << endl;
getline(cin, celebrity);


cout << " roses are " << color << endl;
cout << pluralnoun << "are blue " << endl;
cout << "i love  " << celebrity << endl; 

    return 0;
}