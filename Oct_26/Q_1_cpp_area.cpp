#include<iostream>
using namespace std;
class Area
{
    float areaOfC,areaOftri;
    int areaOfRect;
    public:
    void calArea(int r)
    {
        areaOfC=3.14*r*r;
        cout<<"area of circle is "<<areaOfC<<"\n";
    }
    void calArea(int h,int b)
    {
        areaOfRect=h*b;
        cout<<"area of rectangle "<<areaOfRect<<"\n";
    }
    void calArea(float ha,float ba)
    {
        areaOftri=(0.5*ha*ba);
        cout<<"area of tringle is "<<areaOftri<<"\n";
    }
};
int main()
{
    Area a;
    int r,h,b;
    float ha,ba;
    cout<<"enter the redis, hight and base\n";
    cin>>r>>h>>b;
    cout<<"enter the hight and base of trangle\n";
    cin>>ha>>ba;
    a.calArea(r);
    a.calArea(h,b);
    a.calArea(ha,ba);
    return 0;
}