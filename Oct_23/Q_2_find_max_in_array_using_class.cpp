// Example: WAP to create class name as FindMax with two methods 
// void setArray(int a[]): this function accept array as parameter
// int getMax(): this function can find the maximum value of array and return it.
#include<iostream>
using namespace std;
class FindMax
{
    int *ptr,max;
    public:
    void setArray(int a[])
    {
        ptr=a;
    }
    int getMax()
    {
        max=ptr[0];
        for(int i=0;i<5;i++)
        {
            if(ptr[i]>max)
            {
                max=ptr[i];
            }
        }
        return max;
    } 
};
int main()
{
    FindMax m;
    int a[10];
    cout<<"enter the array value: \n";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    m.setArray(a);
    int result= m.getMax();
    cout<<"max value "<<result;
    return 0;
}