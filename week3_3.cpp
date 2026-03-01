#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string>students;
    students[101]="ravi";
    students[102]="anita";
    students[103]="kiran";
    cout<<"student details:\n";
    for(map<int,string>::iterator it=students.begin();it!=students.end();it++)
    cout<<"ID:"<<it->first<<"name:"<<it->second<<endl;
    return 0;
}