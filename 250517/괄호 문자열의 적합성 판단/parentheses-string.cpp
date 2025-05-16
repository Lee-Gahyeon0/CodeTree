#include <iostream> // 기본 입출력을 사용하기 위한 헤더파일
#include <string> // 스트링 사용 위한 헤더파일
#include <stack> // 스택 자료구조를 사용하기 위한 헤더파일

using namespace std;

string str; // 괄호 문자열 입력받을 string형 변수  str 선언 

bool solution(string str) { // 괄호 적합성 판단 함수 선언
    stack<string> s; // 괄호의 짝을 맞추기 위해 사용할 스택 선언

    for (int i = 0; i < str.size(); i++) { // 문자열의 길이만큼 반복
        if (str[i] == '(') {  // 현재 문자가 여는 괄호 '('면
            s.push((string)"("); // 스택에 "("를 문자열로 넣기
        }
        else { // 현재 문자가 닫는 괄호 ')'면
            if (s.empty() == true) { // 스택이 비어 있다면 (짝이 맞는 여는 괄호X)
                return false;  // false 반환(올바르지 않은 괄호)
            }
            s.pop(); // 짝이 맞는 여는 괄호가 있으므로 스택에서 제거
        }
    }

    if (s.empty() == false) { // 반복이 끝난 후에도 스택이 비어있지 않다면
        return false; // false 반환(여는 괄호가 남아 있으니까)
    }
    
    return true;// 모든 괄호가 올바르게 짝지어진 경우 true 반환
}

int main() {
    cin >> str; // 문자열 입력 받기

    if (solution(str) == true) { // 괄호 문자열이 올바르면
        cout << "Yes" << endl; // "Yes" 출력
    }
    else { // 괄호 문자열이 올바르지 않으면
        cout << "No" << endl; // "No" 출력
    } 
    
    return 0;
}
