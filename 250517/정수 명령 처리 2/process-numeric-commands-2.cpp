#include <iostream> // 입출력을 사용하기 위한 헤더파일
#include <stack> // 스택 자료구조를 사용하기 위한 헤더파일
#include <queue> // 큐(queue) 자료구조를 사용하기 위한 헤더파일

using namespace std;

int N;  //명령어 가짓수 입력을 위한 int형 변수 선언
string command[10000]; //명령어를 입력 받기위한 string형 배열 선언
int A[10000];  // push 명령어에 들어갈 정수 값을 저장하기 위한 int형 배열 선언

int main() {
    cin >> N;  // 명령어의 가짓수 입력받기
    queue<int> q;  //큐 q선언

    for (int i = 0; i < N; i++) { // 입력 받은 명령의 수 N 만큼 반복
        cin >> command[i];  // 명령어를 입력 받기

        if (command[i] == "push") { // 입력받은 명령어가 push면
            cin >> A[i]; // push할 정수 값 입력 받기
            q.push(A[i]); //입력 받은 값 스택에 넣기
        }

        else if (command[i] == "pop") { // 입력받은 명령어가 pop이면
            cout << q.front() << endl; // 큐 맨앞의 정수를 출력한다
            q.pop(); // 큐 맨 앞의 정수를 뺀다
        }

        else if (command[i] == "size") { // 입력받은 명령어가 size이면
            cout << q.size() << endl; // 큐에 들어있는 정수의 개수를 출력한다.
        }

        else if (command[i] == "empty") { // 입력받은 명령어가 empty이면
            cout << q.empty() << endl; // 큐가 비어 있으면 1, 아니면 0 출력한다
        }

        else if (command[i] == "front") { // 입력받은 명령어가 front이면
            cout << q.front() << endl; // 큐 맨 앞의 정수를 출력한다
        }
    }



    return 0; //프로그램 종료
}
