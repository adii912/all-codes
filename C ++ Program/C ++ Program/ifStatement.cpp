#include <iostream>

using namespace std;

int main ()
{

bool isMale = false;
bool isTall = false;
if(isMale && isTall) {
cout << "you are a tall male";

} else if(isMale && !isTall) {
    cout <<"you are a short male";

} else if (!isMale && isTall){
    cout << "you are tall but not male";

} else {

    cout << "you are not male and not tall ";
}




    return 0;
}