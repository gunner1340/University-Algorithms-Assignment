#include <iostream>
using namespace std;
int main() {
    float a1,a2,a3,a4;
    cout<<"Give 4 numbers"<< endl;
    cin>>a1>>a2>>a3>>a4;
    if(a1>=a2 && a1>=a3 && a1>=a4){
        cout<<"Biggest number is: "<<a1<< endl;
    } else if(a2>=a1 && a2>=a3 && a2>=a4){
        cout<<"Biggest number is: "<<a2<< endl;
    } else if(a3>=a1 && a3>=a2 && a3>=a4){
        cout<<"Biggest number is: "<<a3<< endl;
    } else {
        cout<<"Biggest number is: "<<a4<< endl;
    }
    return 0;
}
