#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;  //식빵개수 n, 암호문 개수 m

    string s;
    cin >> s; // 처음 식빵 상태 받기

    list<char> l; //이중연결리스트 선언
    list<char>::iterator it;  // Iterator선언

    for (int i = 0; i < n; i++) { //이중연결리스트에 식빵 초기 상태
        l.push_back(s[i]);
    }

    it = l.end(); //시작에는 모든 빵의 맨 마지막
    for (int i = 0; i<m; i++) {
        char command;
        cin >> command;

        if (command == 'L') { //바로 앞 빵 건너뛰기
            if (it == l.begin()) {//맨앞이면 무시
                continue; 
            }
            it--;
        }

        else if (command == 'R') { //바로 뒤 빵 건너뛰기
            if (it == l.end()) {//맨뒤면 무시
                continue;
            }
            it++;
        }

        else if (command == 'D') {//바로 뒤 빵 제거
            if (it == l.end()) {//맨뒤면 무시
                continue;
            }
            it = l.erase(it);
        }

        else if (command == 'P') { //문자 추가
            char a;
            cin >> a;
            l.insert(it, a);
        }
    }

    for (it = l.begin(); it != l.end(); it++) {
        cout << *it;
    }

    return 0;
}
