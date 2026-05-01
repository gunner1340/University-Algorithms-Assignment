#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int sum(int a[10][20][5]){
    int s=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            for(int k=0;k<5;k++){
                s+=a[i][j][k];
            }
        }
    }
    return s;
}



int main(){
srand(time(0));
int a[10][20][5];
for(int i=0;i<10;i++){
    for(int j=0;j<20;j++){
        for(int k=0;k<5;k++){
            a[i][j][k]=rand()%101;
        }
    }
}
cout<<"The sum is: "<<sum(a)<<endl;
return 0;
}
