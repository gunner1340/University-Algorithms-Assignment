#include <iostream>
using namespace std;
int main() {
    float a1,a2;
    cout<<"Δωστε 2 αριθμους. "<<endl;
    cin>>a1>>a2;
    if((a1==0 && a2!=0) || (a1!=0 && a2==0)){
        cout<<"Λαθος δεδομενα."<<endl;
    } else{
        cout<<"Αθροισμα: "<<a1+a2<<endl<<"Γινομενο: "<<a1*a2<<endl<<"Πηλικο: "<<(a1 / a2)<<endl; //Δεν θα επρεπε να εξετασουμε και αν παει να γινει διαιρεση με το μηδεν? Δεν ειπε κατι η εκφωνηση...
    }
    return 0;
}
