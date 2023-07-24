#include<iostream>
using namespace std;
class chef{
    public:
          void makeChicken(){
              cout << "The chef makes chicken " << endl;
            
          }
          void makeSalad(){
              cout <<  "The chef make Salad" << endl;
          }
          void makeSpecialDish(){
              cout << "The chef make bbq ribs" << endl;
          }
};

 int main(){

    chef chef;
    chef.makeChicken();

    return 0;
};