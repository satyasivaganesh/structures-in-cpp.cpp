#include <iostream>
using namespace std;
struct student{
    int rno;
    string name;
    int age;
    int marks;
};

int main() {
    struct student s1;
    cin>>s1.rno>>s1.name>>s1.age>>s1.marks;
	cout<<s1.rno<<" "<<s1.name<<" "<<s1.age<<" "<<s1.marks;
	return 0;
}
