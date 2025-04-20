#include <iostream>

using namespace std;

int n;
int arr[100001];

void  heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2 * i;       // 왼쪽 자식
    int r = 2 * i + 1;  // 오른쪽 자식

    // 왼쪽 자식이 더 크면 largest 업데이트
    if (l <= n && arr[l] > arr[largest]) {
        largest = l;
    }

    // 오른쪽 자식이 더 크면 largest 업데이트
    if (r <= n && arr[r] > arr[largest]) {
        largest = r;
    }

    // largest가 변경되었으면 swap하고, 계속해서 heapify 재귀 호출
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
       
}

void heap_sort(int arr[], int n) {
    for (int i = n / 2; i >= 1; i--) {
        heapify(arr, n, i);
    }

    for (int i = n ; i >= 2; i--) {
        swap(arr[1], arr[i]);
        heapify(arr, i-1, 1);
    }
}

int main() 
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    heap_sort(arr, n);

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
