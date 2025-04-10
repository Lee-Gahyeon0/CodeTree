#include <iostream>
#include <vector> //동적 배열을 vector를 이용하기 위한 헤더

using namespace std; 

int main() 
{
    int n; //입력받을 명령어의 수
    cin >> n; // 명령어 수 입력받기

    vector<int> v; //동적 배열 선언
    string command; // 명령어를 받기 위한 string형 변수 선언
    int  a; // push_back의 맨 뒤에 넣을 정수 A, get의 k번째 숫자를 받기 위한 int형 변수 선언 
   

    for (int i = 0; i < n; i++) { //입력받은 명령어 수 n 만큼 반복
        cin >> command; // 명령어 입력 받기

        if (command == "push_back") { //pusu_back 명령어를 받으면
            cin >> a; // 맨 뒤에 넣을 정수 A 입력 받기
            v.push_back(a); //맨 뒤에 데이터 a를 추가
        }
        else if (command == "get") { //get 명령어를 받으면
            cin >> a; //몇번째 숫자를 출력할지 입력 받기
            cout << v[a-1] << endl; //index를 통해 데이터 k번째(a-1)조회해 출력
        }
        else if (command == "size") { //size 명령어를 받으면
            cout << v.size() << endl; //현재 vector에 들어있는 데이터의 수를 반환해 출력
        }
        else if (command == "pop_back") { //pop_back 명령어를 받으면
            v.pop_back(); //맨 뒤에 있던 데이터 하나 삭제
        }
    }

    return 0;  // 프로그램 종료
}