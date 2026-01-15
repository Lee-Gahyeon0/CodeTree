#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

for (int i=1; i<=n*2; i++) {
    if(i%2==0){
      for (int j=0; j<i-(i/2); j++){
        cout << "* ";
       }
          cout << endl;
      }
               
   else{
    for(int j=0; j<n-(i/2); j++){
       cout << "* ";
      }
       cout << endl;
    }
}                                                                                         
       return 0;
}
