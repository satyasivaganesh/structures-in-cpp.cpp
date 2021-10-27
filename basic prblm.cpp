#include <iostream>
using namespace std;
struct student{
    string name="siva";
    int rno=52;
};

int main() {
    struct student s1;
	cout<<s1.name<<s1.rno;
	return 0;
}
