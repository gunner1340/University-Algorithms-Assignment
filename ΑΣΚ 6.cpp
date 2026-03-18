#include <iostream> 
#include <cmath>
using namespace std;
int main() {
    float current_height,starting_height;
    int s;
    cout<<"Δωσε το υψος της μπαλας: ";
    cin>>starting_height;
    current_height=starting_height;
    s=1;
    while(current_height>0.2){
        current_height=starting_height*pow(2.0/3.0,s);
        s=s+1;
        cout<<"Το υψος της μπαλας ειναι: "<<current_height<<endl;
    }
    cout<<"Η μπαλα αναπηδεισε "<<s-1<<" φορες"<<endl;
    return 0;
}
