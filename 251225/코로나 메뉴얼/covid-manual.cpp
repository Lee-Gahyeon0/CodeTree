#include <iostream>
using namespace std;

int main() {
    char sym[3];
    int temp[3];

    char result[3];
    int count = 0;

    for(int i=0;i<3;i++){
        cin >> sym[i] >> temp[i];
    }

    for(int i=0;i<3;i++){
        if(sym[i] == 'Y'){
            if(temp[i]>=37){
                result[i] ='A';
            }

            else{
                result[i] = 'C';
            }
        }

        else{
            if(temp[i]>=37){
                result[i] = 'B';
            }

        else{
                result[i] = 'D';
            }
        }

        if(result[i]=='A'){
            count++;
        }
    }

    if(count>=2){
        cout << 'E';
    }
    else{
        cout << 'N';
    }

    return 0;
}