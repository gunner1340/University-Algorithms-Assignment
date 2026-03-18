#include <iostream>
#include <vector>
using namespace std;
int main() {
    float max1,max2;
    vector<float> a(3);
    max1=0;
    max2=0;
    cout<<"Δωστε τους βαθμους 3 εργασιων: ";
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    if(a[0]<0 || a[1]<0 || a[2]<0){
        cout<<"Οι βαθμοι δεν μπορουν να ειναι αρνητικοι"<<endl;
        return 0;
    }else{
        for(int j=0;j<3;j++){
            if(a[j]>max1){
             max2=max1;
             max1=a[j];
            }else if(a[j]>max2){
                 max2=a[j];
            }
        }        
    }
    cout<<max1<<max2<<endl;
    cout<<"Ο μεσος ορος των 2 μεγαλυτερων βαθμων ειναι: "<<(max1+max2)/2<<endl;
    return 0;
}





