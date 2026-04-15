#include <iostream>
using namespace std;


void starFunction(int number){
    if (number <0){
        number = -number;
    }

    int a1;

    do{
        a1 = number%10;
        for (int i = 1; i <= a1; i++){
            cout << "*";
        }
        cout<<endl;
        number = number/10;
    }
    while (number !=0);

}

int main() {

    int number;
    cout<< "Δωστε ενα αριθμο. "<< endl;
    cin>> number;
    starFunction(number);

    return 0;
}
