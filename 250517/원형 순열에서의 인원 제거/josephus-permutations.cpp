#include <iostream> // 표준 입출력을 위한 헤더파일
#include <queue>  // 큐자료구조를 사용하기 위한 헤더파일

using namespace std;

int n, k; // n: 사람의 수, k: 제거할 순서 간격

int solution(int n, int k) { // 요세푸스 문제를 해결하는 함수 정의
    queue<int> q;  // 사람 번호를 저장할 큐 선언

    for (int i = 1; i <= n; i++) { // 1번부터 n번까지 사람을 큐에 삽입
        q.push(i); // i번 사람을 큐에 넣기
    }

    while (q.size() != 1) { // 큐에 한 명만 남을 때까지 반복
        for (int i = 0; i < k - 1; i++) { // k-1번 만큼 맨 앞 사람을 뒤로 보낸다
            q.push(q.front()); // 큐의 맨 앞 사람을 맨 뒤로 보낸다
            q.pop(); // 맨 앞 사람 제거
        }
        cout << q.front() << " "; // 제거될 k번째 사람 출력
        q.pop(); // k번째 사람 제거
    }
    return q.front(); // 마지막 남은 사람의 번호를 반환
}

int main() {
    cin >> n >> k; // 사람의 수 n, 제거할 간격 k를 입력 받음

    cout << solution(n, k) << endl; // 결과(마지막으로 남은 사람) 출력 

    return 0; // 프로그램 종료
}
