#include <iostream>
#include <list> // 이중연결리스트를 사용하기 위한 헤더
#include <string> // 문자열 사용을 위한 헤더

using namespace std;

int main()
{
    int n, m; // 식빵의 개수와 암호문의 개수를 입력받기 위한 int형 변수 선언
    cin >> n >> m;  // 식빵의 개수 n과 레시피 암호문의 개수 m입력 받기

    string s; // 초기 식빵의 상태를 받기위한 string형 변수 선언
    cin >> s; // 초기 식빵의 상태 입력받기

    list<char> l; //이중연결리스트 l선언
    list<char>::iterator it;  // Iterator it선언

    for (int i = 0; i < n; i++) { // 식빵 개수 n 만큼 반복
        l.push_back(s[i]); //이중연결리스트에 식빵 초기 상태
    }

    it = l.end(); //iterator 시작은 모든 빵의 맨 마지막
    for (int i = 0; i<m; i++) { // 암호문의 개수 m만큼 반복
        char command; // 명령어 받기 위한 char형 변수 선언
        cin >> command; // 명령어 받기

        if (command == 'L') { //명령어가 L 이면
            if (it == l.begin()) {
                continue;  
            } // 가리키는 위치가 이미 빵들의 맨 앞이라면 무시힌다.
            it--; // iterator를 앞으로 움직여 바로 앞에 있는 빵을 건너뛴다
        }

        else if (command == 'R') { //명령어가 R 이면
            if (it == l.end()) {
                continue; 
            } // 가리키는 위치가 이미 빵들의 맨 뒤라면 무시힌다.
            it++; // iterator를 뒤로 움직여 바로 뒤에 있는 빵을 건너뛴다
        } 

        else if (command == 'D') { //명령어가 D 이면
            if (it == l.end()) {
                continue;
            } // 가리키는 위치가 이미 빵들의 맨 뒤라면 무시힌다.
            it = l.erase(it); // list l에서 iterator it에 해당하는 원소를 제거한 후, 
        }                       // 제거 이후의 위치를 반환해 바로 뒤의 빵을 제거한다

        else if (command == 'P') { //명령어가 R 이면
            char a; // 추가할 문자를 받기위한 char 형 변수 선언
            cin >> a; // 추가할 문자 입력받기
            l.insert(it, a); // list l의 iterator it에 해당하는 위치에 입력받은 문자 a를 추가
        }
    }

    for (it = l.begin(); it != l.end(); it++) { 
        // terator it의 시작부터 끝까지 오른쪽으로 한칸씩 이동하면서
        cout << *it;  // iterator it에 해당하는 위치에 있는 원소 값을 반환한다
    }
    
    return 0; // 프로그램 종
}
    

