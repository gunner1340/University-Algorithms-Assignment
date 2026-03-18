#include <iostream>
using namespace std;
int main() {
    int price,ammount;
    float cost;
    cout<<"Δωστε την τιμη του προιοντος: ";
    cin>>price;
    cout<<"Δωστε την ποσοτητα τουπροιοντος: ";
    cin>>ammount;
    if(ammount>100){
        cost=price*ammount*0.75;
    }else if(ammount>=80 && ammount<=100){
        cost=price*ammount*0.85;
    }else if(ammount<20){
        cost=price*ammount*1.1;
    }else{
        cost=price*ammount;
    }
    cout<<"Το συνολικο κοστος ειναι: "<<cost<<" ευρω.\n";
    return 0;
}
