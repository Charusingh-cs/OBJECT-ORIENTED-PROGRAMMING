#include <iostream>
using namespace std;
class student{
    public:
    int rno;
    string name;
    float marks;
    void input(){
        cin>>rno;
        cin>>name;
        cin>>marks;
    }
    void output(){
        cout<<rno<<endl;
        cout<<name<<endl;
        cout<<marks<<endl;
    }

};
int main(){
    student s;
    s.input();
    s.output();
    return 0;



}