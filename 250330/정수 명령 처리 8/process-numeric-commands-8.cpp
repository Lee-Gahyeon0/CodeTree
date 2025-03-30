#include <iostream>
#include <list>
using namespace std;

int main()
{
    int n;
    cin >> n; //입력받을 명령의 수

    list<int> s; //이중연결리스트 선언
    

    for (int i = 0; i < n; i++) {
        string command; // 명령 저장변수
        cin >> command;

        if (command == "push_front") {
            int a;
            cin >> a;
            s.push_front(a);
        }

        else if (command == "push_back"){
            int a;
            cin >> a;
            s.push_back(a);
        }

        else if (command == "pop_front"){
            cout << s.front() << endl;
            s.pop_front();
        }

        else if (command == "pop_back"){
            cout << s.back() << endl;
            s.pop_back();
        }

        else if (command == "size") {
            cout << s.size() << endl;
        }

        else if (command == "empty") {
            cout << s.empty() << endl;
        }

        else if (command == "front") {
            cout << s.front() << endl;
        }

        else if (command == "back") {
            cout << s.back() << endl;
        }
    }

    return 0;
}
