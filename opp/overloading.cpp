#include<iostream>
#include<string.h>
using namespace std;
class Circle_Triangle_area{
    public:
    
    float area (float r)
    {
        return(3.14*r*r);
    }
    float area (float b, float h)
    {
        return (('b*h')/2);
    }
};
int main()

{
    
    Circle_Triangle_area obj;
    float rad=5,base=2,height=3;
    cout << " \narea of circle with radius 5 = " << obj.area(base,height);
    cout << " \narea of trangle with base 2 and height 3 =" << obj.area(base , height );
    



}