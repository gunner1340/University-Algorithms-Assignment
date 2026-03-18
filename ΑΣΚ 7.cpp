#include <iostream> 
using namespace std;
int main() {
    int a,d;
    if(a==0){
        d=1;
    }
    if(a!=0){
        do{
            a=a/10;
            d=d+1;
        }
        while(a!=0);
    }
    return 0;
}
