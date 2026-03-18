#include <iostream> 
using namespace std;
int main() {
    int a,d;
    if(a==0){
        d=1;
    }
    if(a!=0){
       while(a!=0){
        a=a/10;
        d=d+1;
       }
    }
    return 0;
}
