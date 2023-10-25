// WAP to creat to class empoyee with a folloing methos
#include<iostream>
#include<string.h>
using namespace std;
class empoyee
{
    int ID,Bsel,P,flag=0;
    char n[10];
    public:
    void setPersonalinfo(char name[],int id,int basesel)
    {
        strcpy(n,name);
        ID=id;
        Bsel=basesel;
    }
    void setProgressPer(int p)
    {
        P=p;
        if(P>60)
        {
            P=Bsel*0.3;
            flag=1;
        }
    }
    void show()
    {
        cout<<"Name of Employee:\n"<<n<<"\n";
        cout<<"Employee id is:\n"<<ID<<"\n";
        cout<<"Employee base salery is:\n"<<Bsel<<"\n";
        if(flag)
        {
            cout<<"incremental salary of employee:\n"<<P<<"\n";
        }
        else
        {
            cout<<"employee progress is not good";
        }
        cout<<"total salary of employee is:\n"<<P+Bsel;
    }
};
int main()
{
    empoyee e;
    char name[10];
    int id,basesel,p;
    cout<<"enter the id of employee:\n";
    cin>>id;
    cout<<"enter the name and base salery\n";
    cin>>name>>basesel;
    cout<<"enter the progrese value:\n";
    cin>>p;
    e.setPersonalinfo(name,id,basesel);
    e.setProgressPer(p);
    e.show();
    
    return 0;
}