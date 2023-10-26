#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class ReverseA
{
    public:
    int len1=5,len2,mid,end,temp;
    void reverseArray(int arr[])
    {
        mid=5/2;
        end=4;
        for(int i=0;i<mid;i++)
        {
            temp=arr[i];
            arr[i]=arr[end];
            arr[end]=temp;
            end--;
        }
        for(int i=0;i<5;i++)
        {     
            cout<<arr[i];
        }
    }
    void reverseArray(char arr1[])
    {
        end=strlen(arr1)-1;
        mid=strlen(arr1)/2;
        for(int i=0;i<mid;i++)
        {
            temp=arr1[i];
            arr1[i]=arr1[end];
            arr1[end]=temp;
            end--;
        }
        cout<<"reverce sting is = "<<arr1;
    }
};
int main()
{
    ReverseA R;
    int arr[10];
    char arr1[10];
    cout<<"enter the element in array\n";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"enter the data in string array\n";
    _flushall();
       gets(arr1);
    R.reverseArray(arr);
    R.reverseArray(arr1);
    return 0;   
}