// Example: WAP to create class name as SearchValue two functions
// void setArray(int a[]): this function can accept array as parameter
// int getIndex(): this method can return index of element if found otherwise return -1
#include<iostream>
using namespace std;
class SearchValue
{
    int *ptr;
    public:
    void setArray(int a[])
    {
        ptr=a;
    }
    int getIndex()
    {
        int no;
        cout<<"enter the number:\n";
        cin>>no;
        for(int i=0;i<5;i++)
        {
            if(no==ptr[i])
            { 
                return i;
            }
        }
        return -1;
    }
}; 
int main()
{
    SearchValue sv;
    int a[5],result;
    cout<<"enter the array element:\n";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    sv.setArray(a);
    result=sv.getIndex();
    if(result!=-1)
    {
        cout<<"id is found "<<a[result];
    }
    else
    {
        cout<<"id is not found";
    }
    return 0;
}