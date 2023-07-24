#include<iostream>
using namespace std;
class chef{
    public:
          void makeChicken(){
              cout << "The chef makes yummy chicken " << endl;
            
          }
          void makeSalad(){
              cout <<  "The chef make Salad" << endl;
          }
          void makeSpecialDish(){
              cout << "The chef make bbq ribs" << endl;
          }
};

class ItalinChef : public chef{

};

 int main(){

    chef chef;
    chef.makeChicken();



    ItalinChef italinChef;
    italinChef.makeChicken();



    return 0;
};