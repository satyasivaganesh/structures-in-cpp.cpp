#include <iostream>
using namespace std;
struct marks{
    int rollno;
    string name;
    int che;
    int math;
    int phy;
};

int main() {
    struct marks m[5];
    for(int i=0;i<5;i++){
        cin>>m[i].rollno>>m[i].name>>m[i].che>>m[i].math>>m[i].phy;
        
    }
    float per;
    for(int i=0;i<5;i++){
        per=((m[i].che+m[i].math+m[i].phy)/300.0)*100;
        
        
        cout<<m[i].rollno<<" "<<m[i].name<<" "<<per<<"\n";
    }
	return 0;
