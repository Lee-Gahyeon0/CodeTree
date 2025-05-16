#include <iostream> // 기본 입출력을 사용하기 위한 헤더파일
#include <stack> // 스택 자료구조를 사용하기 위한 헤더파일

using namespace std;

int N; //명령어 가짓수 입력을 위한 int형 변수 선언
string command[10000]; //명령어를 입력 받기위한 string형 배열 선언
int value[10000]; // push 명령어에 들어갈 정수 값을 저장하기 위한 int형 배열 선언

int main() {
    cin >> N; // 명령어의 가짓수 입력받기
    stack<int> s; //스택 s선언

    for (int i = 0; i < N; i++) { // 입력 받은 명령의 수 N 만큼 반복
        cin >> command[i]; // 명령어를 입력 받기

        if (command[i] == "push") { // 입력받은 명령어가 push인 경우
            cin >> value[i]; // push할 정수 값 입력 받기
            s.push(value[i]); //입력 받은 값i를 스택에 넣기
        }

        else if (command[i] == "pop") { // 입력받은 명령어가 pop인 경우
            cout << s.top() << endl; // 스택 맨 위 값 출력
            s.pop(); //스택 맨 위의 값 제거
        }

        else if (command[i] == "size") { // 입력받은 명령어가 size인 경우
            cout << s.size() << endl; // 스택에 들어있는 정수의 개수 출력
        }

        else if (command[i] == "empty") { // 입력받은 명령어가 empty인 경우
            cout << s.empty() << endl; // // 스택이 비어 있으면 1, 아니면 0 출력
        }

        else if (command[i] == "top") { // 입력받은 명령어가 top인 경우
            cout << s.top() << endl; // 스택의 맨 위에 있는 값을 출력
        }
    }



    return 0; //프로그램 종료
}
