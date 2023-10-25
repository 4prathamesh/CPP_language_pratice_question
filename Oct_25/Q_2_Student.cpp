#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    int mark[6],P;
    public:
    void setsubMarks(int arr[])
    {
        for(int i=0;i<6;i++)
        {
            mark[i]=arr[i];
        }
    }
    void calculatePer()
    {
        int sum=0;
        for(int i=0;i<6;i++)
        {
            sum=sum+mark[i];
        }
        P=sum/6;
    }
    void checkGrades()
    {
        if(P>75 && P<=100)
        {
            cout<<"student in distincion \n";
        }
        else if(P>60 && P<=75)
        {
            cout<<"first division:\n";
        }
        else if(P>=50 && P<=60)
        {
            cout<<"second division";
        }
        else if(P>40 && P<=50)
        {
            cout<<"third division";
        }
        else{
            cout<<"student failed";
        }
    }

};

int main()
{
    Student s;
    int arr[6];
    cout<<"enter the subject marks:\n";
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    s.setsubMarks(arr);
    s.calculatePer();
    s.checkGrades();
    return 0;
}