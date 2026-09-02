#include <iostream>
#include <string>
using namespace std;
class emp{
    public:
    int empid;
    string name;
    float salary;
    public:
    void input();
    void output();
};
void emp::input(){
    cout<<"employee id"<<endl;
    cin>>empid;

    cout<<"empname"<<endl;
    cin>>name;
    cout<<"Salary"<<endl;
    cin>>salary;
}
void emp::output(){
    cout<<"empid"<<empid<<endl;
    cout<<"empname"<<name<<endl;
    cout<<"empsalary"<<salary<<endl;
}
int main(){
    emp e;
    e.input();
    e.output();
    return 0;
}