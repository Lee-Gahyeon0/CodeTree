#include <iostream>
#include<cmath>
#include <vector>

using namespace std;

void radix_sort(int arr[], int k);

int n;
int arr[100000];

int getDigit(int num, int pos) {
    return (num / static_cast<int>(pow(10, pos))) % 10;
}

int main() {
    cin >> n;

    int M = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > M)          // 최댓값 찾기
            M = arr[i];
    }

    int k = 0;  // 자릿수 구하기
    while (M > 0) {
        k++;
        M /= 10;
    }
   
    radix_sort(arr, k);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

void radix_sort(int arr[], int k) {
    vector<int>buckets[10];

    for (int pos = 0; pos < k; pos++) {
        for (int i = 0; i < 10; i++) {
            buckets[i].clear();
        }


        for (int i = 0; i < n; i++) {
            int digit = getDigit(arr[i], pos);
            buckets[digit].push_back(arr[i]); 
        }


        int idx = 0;
        for (int i = 0; i < 10; i++) {  
            for (int j = 0; j < buckets[i].size(); j++) {  
                arr[idx++] = buckets[i][j];  
            }
        }
    }
}