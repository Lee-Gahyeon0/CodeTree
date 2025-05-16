#include <iostream> // 표준 입출력을 위한 헤더파일
#include <string> // string 자료형 사용하기 위한 헤더파일
#include <deque> // 덱 자료구조를 사용하기 위한 헤더파일

using namespace std;

int N; //명령어 가짓수 입력을 위한 int형 변수 선언
string command[10000]; //명령어를 입력 받기위한 string형 배열 선언
int A[10000];  // push 명령어에 들어갈 정수 값을 저장하기 위한 int형 배열 선언

int main() {
    cin >> N; // 명령어의 가짓수 입력받기
    deque<int> s; // 덱 s선언

    for (int i = 0; i < N; i++) {  // 입력 받은 명령의 수 N 만큼 반복
        cin >> command[i]; // 명령어를 입력 받기

        if (command[i] == "push_front") {  // 입력받은 명령어가 push_front인 경우
            cin >> A[i];  // 덱 앞에 넣을 정수 입력 받기
            s.push_front(A[i]); // 덱의 맨 앞에 값을 삽입
        }

        else if (command[i] == "push_back") { // 입력받은 명령어가 push_back일 경우
            cin >> A[i]; // 덱 뒤에 넣을 정수 입력 받기
            s.push_back(A[i]); // 덱 맨 뒤에 값을 삽입
        }

        else if (command[i] == "pop_front") { //입력받은 명령어가 pop_front일 경우
            cout << s.front() << endl; // 덱 맨 앞의 값을 출력
            s.pop_front();// 덱 맨 앞의 값 삭제
        }

        else if (command[i] == "pop_back") { //입력받은 명령어가 pop_back인 경우
            cout << s.back() << endl; // 덱 맨 뒤의 값을 출력
            s.pop_back(); // 덱 맨 뒤의 값 삭제
        }
        else if (command[i] == "size") { //입력받은 명령어가 size인 경우
            cout << s.size() << endl; // 덱에 들어있는 정수의 개수 출력
        }

        else if (command[i] == "empty") { //입력받은 명령어가 empty인 경우
            cout << s.empty() << endl; //덱이 비어있으면 1, 아니라면 0을 출력
        }

        else if (command[i] == "front") { //입력받은 명령어가 front인 경우
            cout << s.front() << endl; // 덱 맨 앞의 값을 출력
        }

        else { //입력받은 명령어가 back인 경우 (주어진 조건 외에 다른 명령이 주어진 경우가 없으므로)
            cout << s.back() << endl; // 덱 맨 뒤의 값을 출력
        }
    }



    return 0; // 프로그램 종료
}
