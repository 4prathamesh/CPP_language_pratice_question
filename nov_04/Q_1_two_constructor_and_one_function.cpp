// nov 04
// Write a class named as Record with two Constructor and one function 
// Record(int, char[], float) - to set rno, name and percentage of the students
// Record(Record) - to pass the object of a class Record
// void display() - display record
// Set a record using one object and display the same record with another object.

#include<iostream>
#include<string.h>

using namespace std;
 
class Record
{
    int rno;
    char name[20];
    float per;

    public:
        Record(int rno,char name[],float per)
        {
            this->rno=rno;
            strcpy(this->name,name);
            this->per=per;
        }
        Record(Record &R)
        {
            this->rno=R.rno;
            strcpy(this->name,R.name);
            this->per=R.per;
        }
        void display()
        {
            cout<<rno<<"\n";
            cout<<name<<"\n";
            cout<<per<<"\n";
        }
};

int main()
{
    int rno;
    char name[20];
    float per;

    cout<<"enter the roll no,name and percentage:\n";
    cin>>rno>>name>>per;

    Record R(rno,name,per);
    Record R2(R);
    R2.display();
    // cout<<"address of R.rno= "<<R.rno<<"\n";
    // cout<<"address of R2.rno= "<<R2.rno<<"\n";

    return 0;
}