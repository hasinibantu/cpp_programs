#include <iostream>
#include <string>
using namespace std;
class student 
{
    private:
    int rollnumber;
    string name;
    float marks;
    public:
    student()
    {
        rollnumber=0;
        name="";
        marks=0.0;
    }
    //function to input details
    void input()
    {
        cout<<"enter roll number:";
        cin>>rollnumber;
        cin.ignore();
        cout<<"enter name\n";
        getline(cin,name);
        cout<<"enter marks:";
        cin>>marks;
    }
    //function to display details
    void display()
    {
        cout<<rollnumber<<"\t"<<name<<"\t"<<marks<<endl;
    }
        //destructor
     ~student()
        {
            cout<<"student object with rollno"<< rollnumber<<"is destroyed";
        }
    };
    int main(){
        int n;
        cout<<"enter number of students:";
        cin>>n;
        student *students = new student[n];
        //Input Details
        for(int i=0;i<n;i++){
            cout<<"\nenter details of student"<< i+1 << endl;
            students[i].input();

        }
        //Display details
        cout<<"\nRoll\tName\tMarks\n";
        for(int i=0;i<n;i++){
            students[i].display();
               }
               //Release allocated memory
               delete[]students;
               return 0;
    }


