#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    int A[100], B[100];
    bool result=false;
    cin >> n1 >> n2;
    
    // 입력
    for(int i=0;i<n1;i++){
        cin >> A[i]; }
    for(int j=0;j<n2;j++){
        cin >> B[j]; }
    

    // 판별
    for(int i=0;i<=n1-n2;i++){
        bool match = true;
        for(int j=0;j<n2;j++){
            if(i+j>=n1){
                match= false;
                break;
            }

            if(A[i+j]!=B[j]){
                match = false;
                break;
            }
        }

        if (match) { 
        result = true;
        break;
    }
    }

    
    // 결과 
    if(result==true){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}