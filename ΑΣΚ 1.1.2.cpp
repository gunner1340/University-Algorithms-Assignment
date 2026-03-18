#include <iostream>
#include <vector>
using namespace std;
int main() {
    float max;
    vector<float> a(4);
    cout<<"Enter 4 numbers: "<<endl;
    for(int i=0; i<4; i++){
        cin>>a[i];
    }
    max=a[0];
    for(int i=1; i<4; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"The maximum number is: "<<max<<endl;
    return 0;
}
