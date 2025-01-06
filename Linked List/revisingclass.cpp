#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string n, int r, float m){
        name = n;
        rno = r;
        marks = m;

    }

};
void change(Student &s){
    s.name= "Himan"; 
}
int main(){
    Student s("Me", 96, 99.0);
    Student* ptr = &s;
    //(*ptr).name = "Him";
    ptr ->name = "Hehe";
    //s.name = "Himanshu";
    //s.rno = 69;
    //s.marks = 94.0;
    //cout << s.name << endl;
    //change(s);
    cout << s.name;
    //int* ptr;
    
}