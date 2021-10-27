#include <iostream>
using namespace std;
struct student{
    int rno;
    string name;
    int age;
};

int main() {
    struct student s[15];
    for(int i=0;i<15;i++){
        cin>>s[i].rno>>s[i].name>>s[i].age;
        
    }
    cout<<s[14].rno<<" "<<s[14].name<<" "<<s[14].age;
	return 0;
