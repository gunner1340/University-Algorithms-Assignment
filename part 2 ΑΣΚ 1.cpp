#include <iostream>
#include <string>
using namespace std;


int lengthFunction(string &word){

    int curleng = word.length();
    static int leng = 0;
    leng = leng + curleng;

    return leng ;
}

int main() {

    string word;

    do {

        cout<<"Εισαγετε μια λεξη. (Εισαγετε την λεξη 'STOP' για να σταματησει το προγραμμα.): "<<endl;
        cin >> word;

        if (word !="STOP"){
            cout << lengthFunction(word)<<endl;
        }

    } while (word != "STOP");

    return 0;
}
