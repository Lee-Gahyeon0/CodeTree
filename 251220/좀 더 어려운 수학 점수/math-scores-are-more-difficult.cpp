#include <iostream>
using namespace std;

int main() {
    int Ma, Ena,Mb,Enb;

    cin >> Ma >> Ena >> Mb >> Enb;
    if(Ma>Mb){
        cout << "A";
    }
    else if(Ma==Mb){
        if(Ena>Enb){
            cout << "A";
        }
        else{
            cout << "B";
        }

    }
    else{
        cout << "B";
    }


    return 0;
}