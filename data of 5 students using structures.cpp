#include <iostream>
using namespace std;
struct student{
    int rno;
    string name;
    int age;
};

int main() {
    struct student s[5];
    for(int i=0;i<5;i++){
        cin>>s[i].rno>>s[i].name>>s[i].age;
        
    }
    cout<<s[1].rno<<s[1].name<<s[1].age;
	return 0;
}
