// Example: WAP to create class name as PrintFibo with two functions
// void setValue(int no): this function can accept number as parameter
// void showFibo(): this function can print the fibonacii series up to number
#include<iostream>
using namespace std;
class PrintFibo
{
    int num,i=0,j=1;
    public:
    void setValue(int no)
    {
        num=no;
    }
    void showFibo()
    {
        int fib=0;
        while(fib<num)
        {
            fib=i+j;
            cout<<fib<<"\t";
            i=j;
            j=fib;
        }
    }
};
int main()
{
    PrintFibo F;
    int no;
    cout<<"enter the number: \n";
    cin>>no;
    F.setValue(no);
    F.showFibo();
    return 0;
}