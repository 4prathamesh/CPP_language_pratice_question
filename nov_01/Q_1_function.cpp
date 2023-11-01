// ArrayOperation(int a[]): 
// ArrayOperation(char []): 
// int getSum(): this function can return sum of even elements from array
// void display(): this function can show string before reverse and after
// reverse .
#include<iostream>
#include<string.h>

using namespace std;

class array
{
    int *arr;
    char *cha;

    public:
    void ArrayOpe(int a[])
    {
        arr=a;
    }
    void ArrayOpe(char ch[])
    {
        cha=ch;
    }
    int getsum()
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            if(arr[i]%2==0)
            {
                sum=sum+arr[i];
            }
        }
        return sum;
    }

    char *rev()
    {
        // cout<<"befor reverce string is :\n";
        // cout<<cha;
        int i=0;
        int len=strlen(cha);
        int mid=len/2;
        while(i<mid)
        {
            char temp =cha[i];
            cha[i]=cha[len-1];
            cha[len-1]=temp;
            i++;
            len--;
        }
        return cha;
        // cout<<"\nstring after reverce =\n"<<cha;
    }
};
int main()
{
    array A;
    int a[5];
    cout<<"enter the array element:\n";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    fflush(stdin);  // _flushall();
    char c[20];
    cout<<"enter the string\n";
    gets(c);

    //cout<<c;
    A.ArrayOpe(a);
    A.ArrayOpe(c);
    char *ptr=A.rev();
    cout<<"\nsum is = "<<A.getsum();
    //int *ptr=A.rev();
    cout<<"\n"<<ptr;

}