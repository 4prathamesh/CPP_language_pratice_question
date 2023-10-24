// Example: WAP to create class name as Area with two functions 
// void setRadius(float radius): this function can accept radius 
// as parameter
// float getArea(): this function can calculate area of circle
// and return it.

#include<iostream>
using namespace std;
class Area
{
    int r;
    public:
    void setRadius(float radius)
    {
        r=radius;
    }
    float getArea()
    {
        return 3.14*r*r;
    }
};
int main()
{
    Area c;
    float radius,A;
    cout<<"enter the radius";
    cin>>radius;
    c.setRadius(radius);
   float result=c.getArea();
   cout<<"area of circul is "<<result;
   return 0;
}