//  create a class employee with some member variables like emp_id, name, salary and dept. 
//   write default, parameterised and copy constructor for employee class.
//   create 3 objects of employee class and display all employees information. 
//   copy one object of employee into another object using copy constructor and 
//   update salary of new employee only and display information of employee

#include<iostream>
#include<string.h>

using namespace std;

class employee
{
    int emp_id;
    char name[20];
    int sal;
    char dept[20];

    public:

    employee(int emp_id,char name[],int sal,char dept[20])
    {
        this->emp_id=emp_id;
        strcpy(this->name,name);
        this->sal=sal;
        strcpy(this->dept,dept);
    }
    employee(employee &E)
    {
        this->emp_id=E.emp_id;
        strcpy(this->name,E.name);
        this->sal=E.sal;
        strcpy(this->dept,E.dept);
    }
    void display()
    {
        cout<<"employee id is= "<<emp_id<<"\n";
        cout<<"employee name is= "<<name<<"\n";
        cout<<"employee salary is= "<<sal<<"\n";
        cout<<"employee deperment is= "<<dept<<"\n";
    }
};

int main()
{
    int emp_id;
    char name[20];
    int sal;
    char dept[20];

    cout<<"enter the id, name, salary and dept\n";
    cin>>emp_id>>name>>sal>>dept;

    employee E1(emp_id,name,sal,dept);
    employee E2(E1);

    E2.display();
    return 0;
}