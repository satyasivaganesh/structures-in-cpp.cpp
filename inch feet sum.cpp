#include <iostream>
using namespace std;
struct length{
    int feet;
    int inch;
};

int main() {
    struct length l[2];
    for(int i=0;i<2;i++){
        cin>>l[i].feet>>l[i].inch;
    }
    int f=0,in=0;
    for(int i=0;i<2;i++){
        f=f+l[i].feet;
        in=in+l[i].inch;
        
    }
    if(in>12){
        f=f+in/12;
        in=in%12;
    }
    cout<<f<<" "<<in;
	return 0;
}
