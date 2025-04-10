#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n; //입력받을 명령어의 수
    cin >> n; // 명령어 수 입력받기

    vector<int> v; //동적 배열 선언
    string command; 
    int  a;
   

    for (int i = 0; i < n; i++) {
        cin >> command;

        if (command == "push_back") { //pusu_back 명령어 처리
            cin >> a;
            v.push_back(a);
        }
        else if (command == "get") { //get 명령어 처리
            cin >> a;
            cout << v[a-1] << endl;
        }
        else if (command == "size") { //size 명령어 처리
            cout << v.size() << endl;
        }
        else if (command == "pop_back") { //pop_back 명령어 처리
            v.pop_back();
        }
    }

    return 0;
}