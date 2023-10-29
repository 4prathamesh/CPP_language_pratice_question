#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

class employee
{
    int id,salary;
    char contact[20];
    char name[20],email[20];
    public:

    void setEmployee(int ID, char na[], char em[] , char con[], int sa)
    {
        id=ID;
        strcpy(name,na);
        strcpy(email,em);
        strcpy(contact,con);
        salary=sa;
    }
    int getid()
    {
        return id;
    }
    char *getname()
    {
        return name;
    }
    char *getemail()
    {
        return email;
    }
    char *getcon()
    {
        return contact;
    }
    int getsalary()
    {
        return salary;
    }
};

int main()
{
    int size;
    cout<<"enter the employee size\n";
    cin>>size;
    int choice;
    int ID,sa;
    char con[20];
    char na[20],em[20];
       int p,flag=1,flag1=1,flag2=1;
       char pr[10];
    employee E[size];
    do{
        cout<<"1.Add multiple details in employee"<<"\n";
        cout<<"2. view all details "<<"\n";
        cout<<"3. search employee details by id and name and salary"<<"\n";
        cout<<"4. sort all employee details by sal"<<"\n";
        cout<<"5. update details by name"<<"\n";
        cout<<"6. delete employee by email"<<"\n";

        cout<<"enter the choice"<<"\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"enter the id, name , email, contact and salary"<<"\n";
                 for(int i=0;i<size;i++)
                 {
                        cin>>ID>>na>>em>>con>>sa;
                        cout<<"\n";
                        E[i].setEmployee(ID,na,em,con,sa);
                 }
            
            break;

            case 2:
            cout<<"employe details id, name , email, contact and salary"<<"\n";
            for(int i=0;i<size;i++)
            {
                cout<<"ID = "<<E[i].getid()<<"\n";
                cout<<"name= "<<E[i].getname()<<"\n";
                cout<<"email= "<<E[i].getemail()<<"\n";
                cout<<"contact= "<<E[i].getcon()<<"\n";
                cout<<"salary= "<<E[i].getsalary()<<"\n\n";
            
            }
            break;

            case 3:
            
         
            cout<<"enter the id of employee:\n";
            cin>>p;
            for(int i=0;i<size;i++)
            {
                if(p==E[i].getid())
                {
                    cout<<"ID = "<<E[i].getid()<<"\n";
                    cout<<"name= "<<E[i].getname()<<"\n";
                    cout<<"email= "<<E[i].getemail()<<"\n";
                    cout<<"contact= "<<E[i].getcon()<<"\n";
                    cout<<"salary= "<<E[i].getsalary()<<"\n";
                    flag=0;
                   break;
                }
            }
            if(flag)
            {
                cout<<"id is not found!!!\n";
            }
            break;
            

            
            //break;

            case 4:
            
            for(int i=0;i<size;i++)
            {
                for(int j=i+1;j<size;j++)
                {
                    if(E[i].getsalary()>E[j].getsalary())
                    {
                        employee temp=E[i];
                        E[i]=E[j];
                        E[j]=temp;
                    }
                }
            }
            for(int i=0;i<size;i++)
            {
                cout<<"ID = "<<E[i].getid()<<"\n";
                cout<<"name= "<<E[i].getname()<<"\n";
                cout<<"email= "<<E[i].getemail()<<"\n";
                cout<<"contact= "<<E[i].getcon()<<"\n";
                cout<<"salary= "<<E[i].getsalary()<<"\n\n";
            }

            break; // case4 cha break aahe

            // update details by name
            case 5:
            
            cout<<"enter the name for update:\n";
            cin>>pr;
            for(int i=0;i<size;i++)
            {
                if(strcmp(pr,E[i].getname())==0)
                {
                    flag1=0;
                    cout<<"employe details id, name , email, contact and salary"<<"\n";
                    cin>>ID>>na>>em>>con>>sa;
                    E[i].setEmployee(ID,na,em,con,sa);  
                    break;
                }
            }
            if(flag1)
            {
                cout<<"\nname is not found!!!!\n";
            }

            break;   // case 5 break 

            // 6. delete employee by email

            case 6:
            cout<<"enter the email for delete employee\n";
            cin>>pr;
            for(int i=0;i<size;i++)
            {
                if(strcmp(pr,E[i].getemail())==0)
                {
                    flag2=0;
                    for(int j=i;j<3;j++)
                    {
                        E[i]=E[i+1];
                    }
                }
            }
            size--;
            if(flag2)
            {
                cout<<"\n email is not found!!!!\n";
            }
            break;
        }
    }while(choice!=7);
}