#include <iostream>
#include <list> //이중연결리스트를 사용하기 위한 헤더
using namespace std;

int main()
{
    int n;// 명령의 수를 입력 받기 위한 int형 변수 선언
    cin >> n; // 명령의 수 입력 받기

    list<int> s; //이중연결리스트 선언

    for (int i = 0; i < n; i++) { // 입력받은 명령의 수 n 만큼 반복
        string command; // 입력받은 명령을 저장하기 위한 sting형 변수 선언
        cin >> command; // 명령 입력받기

        if (command == "push_front") { // 입력받은 명령이 push_front이면
            int a; // 정수 a를 받기위한 변수 선언 
            cin >> a;// 정수 a 받기
            s.push_front(a); //맨 앞에 데이터 a를 추가한다
        }

        else if (command == "push_back"){ // 입력받은 명령이 push_back이면
            int a; //  정수 a를 받기위한 변수 선언 
            cin >> a;// 정수 a 받기
            s.push_back(a); // 맨 뒤에 데이터 a를 추가한다
        }

        else if (command == "pop_front"){// 입력받은 명령이 pop_front이면
            cout << s.front() << endl; // 맨 앞의 데이터를 출력한다
            s.pop_front(); //맨 앞에 있는 데이터를 뺀다(삭제)
        }

        else if (command == "pop_back"){// 입력받은 명령이 pop_back이면
            cout << s.back() << endl; // 맨 뒤의 데이터를 출력한다
            s.pop_back(); // 맨 뒤에 있는 데이터를 뺀다(삭제)
        }

        else if (command == "size") { // 입력받은 명령이 size라면
            cout << s.size() << endl; // 현재 list에 들어있는 데이터의 수를 반환해 출력한다
        }

        else if (command == "empty") { // 입력받은 명령이 empty면
            cout << s.empty() << endl; // 현재 list가 비어있다면 true, 아니라면 false를 반환해 출력한다
        }

        else if (command == "front") { // 입력받은 명령이 front면
            cout << s.front() << endl; // list의 맨 앞에 있는 데이터를 반환해 출력한다
        }

        else if (command == "back") { // 입력받은 명령이 back이면
            cout << s.back() << endl; // list의 맨 뒤에 있는 데이터를 반환해 출력한다
        }
    }

    return 0; // 프로그램을 종료한다
}
