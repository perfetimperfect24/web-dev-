#include <iostream>
using namespace std;
/*Student management system.
There are 4 actors name admin, hod, faculty, student. The system maintain the details of hod name, faculty name, 
faculty id, handling subject, student name, subject name, status of the subject where pass or fail.
Roles:
Admin can able to add and view the detail of hod, faculty, student . 
hod can able add and view the detail of hod, faculty, student . 
faculty can able add and view the detail of faculty, student . 
student can able add and view the detail of  student .

Whenever we entered into system first it should ask authentication (i.e user name and password). When we put credential it shows the options based on the user. 
Like if we put admin id and password it will show the 
Press 1 for add student
Press 2 for add faculty
Press 3 for add hod
Press 4 for display student detail
Press 5 for display faculty detail

Press 4 for display hod detail

Suppose we entered faculty credential mean it will show
Options:
Press 1 for add student
Press 2 for display the student detail
Press 3 for display the faculty detail

Like that for hod and student logins based on the above mentioned role.

[Note: you have to create login credential for admin, hod, faculty, student in the admin class]
*/
class student
{ 
     public:
    char name[20];
    int regno;
    char sub[5][20];
    char res[5][2];
  
    void getdata()
    {
        
            cin>>name;
            cin>>regno;
            for(int j=0;j<5;j++)
            {
                cin>>sub[j];
                cin>>res[j];
            }
            
    }
    void showdata()
    {
        
            cout<<"NAME:"<<name;
            cout<<"REGISTERNO:"<<regno;
            for(int j=0;j<5;j++)
            {
                cout<<"SUBJECT"<<j+1<<":"<<sub[j];
                cout<<"RESULT"<<j+1<<":"<<res[j];
            }
        
    }
};
class faculty:public student
{   
    public:
    char fac_name[20];
    int facultyid;
    char handlingsubject;
    
    void getinfo()
    {
      
      
          cin>>fac_name;
          cin>>facultyid;
          cin>>handlingsubject;
         
    }
    void showinfo()
    {     
       {
           cout<<"FACULTY NAME:"<<fac_name;
           cout<<"FACULTY ID:"<<facultyid;
           cout<<"HANDLING SUBJECT:"<<handlingsubject;

       }
    }
     int n2;
    cout<<"*******************************************************";
    cout<<" 1.student 2.faculty ";
    cout<<"*******************************************************";
    cin>>n2;
    switch(n2)
    {
        case 1:
        { 
            int choice;
            cout<<"WHAT DO U WANNA DO WITH THE STUDENT";
            cout<<"1.ADD STUDENT 2 VIEW STUDENT";
            cin>>choice;
            if(choice==1)
            {
                student::getdata();
            }
            else
            {
                student::showdata();
            }
        }
        case 2:
        {
            int choice1;
            cout<<"WHAT DO U WANNA DO WITH THE FACULTY";
            cout<<"1.ADD FACULTY 2.VIEW FACULTY";
            cin>>choice1;
            if(choice1==1)
            {
                getinfo();
            }
            else
            {
               showinfo();
            }
            
        }
        
};
class hod:public student,public faculty
{
    public:
    char hod_name[20];
    void hod_input()
    {
        cout<<"Enter HOD name:"<<endl;
        cin>>hod_name;
    }
    void hod_output()
    {
        cout<<"Show HOD name:"<<endl;
        cout<<hod_name;
    }
    int n1;
    cout<<"*******************************************************";
    cout<<" 1.student 2.faculty 3.hod";
    cout<<"*******************************************************";
    cin>>n1;
    switch(n1)
    {
        case 1:
        { 
            int choice;
            cout<<"WHAT DO U WANNA DO WITH THE STUDENT";
            cout<<"1.ADD STUDENT 2 VIEW STUDENT";
            cin>>choice;
            if(choice==1)
            {
                student::getdata();
            }
            else
            {
                student::showdata();
            }
        }
        case 2:
        {
            int choice1;
            cout<<"WHAT DO U WANNA DO WITH THE FACULTY";
            cout<<"1.ADD FACULTY 2.VIEW FACULTY";
            cin>>choice1;
            if(choice1==1)
            {
                faculty::getinfo();
            }
            else
            {
               faculty::showinfo();
            }
            
        }
        case 3:
        {  
            int choice2;
            cout<<"WHAT DO U WANNA DO WITH THE HOD";
            cout<<"1.ADD HOD 2.VIEW HOD";
            cin>>choice2;
            if(choice2==1)
            {
                hod_input();
            }
            else
            {
                hod_output();
            } 
        }
};
class admin:public hod,public student,public faculty
{
    public:
    int n;
    cout<<"*******************************************************";
    cout<<" 1.student 2.faculty 3.hod";
    cout<<"*******************************************************";
    cin>>n;
    switch(n)
    {
        case 1:
        { 
            int choice;
            cout<<"WHAT DO U WANNA DO WITH THE STUDENT";
            cout<<"1.ADD STUDENT 2 VIEW STUDENT";
            cin>>choice;
            if(choice==1)
            {
                student::getdata();
            }
            else
            {
                student::showdata();
            }
        }
        case 2:
        {
            int choice1;
            cout<<"WHAT DO U WANNA DO WITH THE FACULTY";
            cout<<"1.ADD FACULTY 2.VIEW FACULTY";
            cin>>choice1;
            if(choice1==1)
            {
                faculty::getinfo();
            }
            else
            {
               faculty::showinfo();
            }
            
        }
        case 3:
        {  
            int choice2;
            cout<<"WHAT DO U WANNA DO WITH THE HOD";
            cout<<"1.ADD HOD 2.VIEW HOD";
            cin>>choice2;
            if(choice2==1)
            {
                hod::hod_input();
            }
            else
            {
                hod::hod_output();
            } 
        }
            
    }

    
};
int main()
{
   char username[20];
   cin>>username;
   if((username=="HOD")||(username=="hod")||(username=="Hod"))
   {
       hod obj[20];
   }
   else if((username=="admin"))
   {
       admin a;
   }
   else if((username=="faculty"))
   {
       faculty f;
   }
   

}