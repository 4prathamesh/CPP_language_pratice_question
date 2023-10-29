#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
class food
{
    int id,price;
    char name[20],category[20];
    public:
    void setdata(int ID,char na[], int pri,char cat[])
    {
        id=ID;
        price=pri;
        strcpy(name,na);
        strcpy(category,cat);
    }
    int getid()
    {
        return id;
    }
    char* getname()
    {
        return name;
    }
    int getprice()
    {
        return price;
    }
    char* getcatagory()
    {
        return category;
    }
};

int main()
{
    food *F;
    int size,choice;
    int ID,pri;
    char na[20],cat[20];
    int fo;
    char N[20]; // use in 5 case for name
    char L[20];  // use in 6 case for name
    cout<<"enter the array size\n";
    cin>>size;
    F=(food*)malloc(sizeof(food)*size);

    do{

            cout<<"1. add multiple details in food\n";
            cout<<"2. view all details in food\n";
            cout<<"3. search food details by id and name and ...\n";
            cout<<"4. sort all food detalis by price.\n";
            cout<<"5. update food details using by name\n";
            cout<<"6. detete food details by category\n";
            cout<<"7. display all food detais in given price range 100 to 800\n";

            cout<<"enter the choice \n";
            cin>>choice;
        switch(choice)
        {
            case 1:
            
            for(int i=0;i<size;i++)
            {
                cout<<"ID\tName\tPrice\tCategory\n";
                cin>>ID>>na>>pri>>cat;
                F[i].setdata(ID,na,pri,cat);
            }
            break;

            case 2:

            cout<<"ID\tName\tPrice\tCategory\n";
            for(int i=0;i<size;i++)
            {
                cout<<F[i].getid()<<"\t"<<F[i].getname()<<"\t"<<F[i].getprice()<<"\t"<<F[i].getcatagory()<<"\n";
            }
            break;// case 2 cha break

            // 3. search food details by id and name and ...
            case 3:

            cout<<"enter the id of food\n";
            cin>>fo;

            for(int i=0;i<size;i++)
            {
                if(fo==F[i].getid())
                {
                    cout<<"ID\tName\tPrice\tCategory\n";
                    cout<<F[i].getid()<<"\t"<<F[i].getname()<<"\t"<<F[i].getprice()<<"\t"<<F[i].getcatagory()<<"\n";
                }
            }
            break;   // break for case 3

            // 4. sort all food detalis by price.
            case 4:
            for(int i=0;i<size;i++)
            {
                for(int j=i+1;j<size;j++)
                {
                    if(F[i].getprice()>F[j].getprice())
                    {
                        food temp = F[i];
                        F[i]=F[j];
                        F[j]=temp;
                    }
                }
            }
            break;  // break for case 4

            // 5. update food details using by name
            case 5:

            cout<<"enter the name for update\n";
            cin>>N;
            for(int i=0;i<size;i++)
            {
                if(strcmp(N,F[i].getname())==0)
                {
                    cout<<"ID\tName\tPrice\tCategory\n";
                    cin>>ID>>na>>pri>>cat;
                    F[i].setdata(ID,na,pri,cat); 
                }
            }
            break; // break for 5 case

            // 6. detete food details by category

            case 6:
            cout<<"enter the catagery for delate details\n";
            cin>>L;

            for(int i=0;i<size;i++)
            {
                if(strcmp(L,F[i].getcatagory())==0)
                {
                    for(int j=i;j<size;j++)
                    {
                        F[j]=F[j+1];
                    }
                    size--;
                }
            }
            break;  // break for case 6

            // 7. display all food detais in given price range 100 to 800

            case 7:

            for(int i=0;i<size;i++)
            {
                if(F[i].getprice() >= 100 && F[i].getprice() <= 800)
                {
                    cout<<"ID\tName\tPrice\tCategory\n";
                    cout<<F[i].getid()<<"\t"<<F[i].getname()<<"\t"<<F[i].getprice()<<"\t"<<F[i].getcatagory()<<"\n"; 
                }
            }
            break;  
            
        }

    }while(choice!=8);

}