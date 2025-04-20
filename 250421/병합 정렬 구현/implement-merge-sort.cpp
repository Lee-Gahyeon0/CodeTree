#include <iostream>
using namespace std;

int n;
int arr[100000];
int merged_arr[100000];

void merge(int arr[], int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = low;

    // 두 부분 병합
    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            merged_arr[k] = arr[i];
            k++;
            i++;
        }
        else {
            merged_arr[k] = arr[j];
            k++;
            j++;
        }
    }

    // 왼쪽 배열 남은거
    while (i <= mid) {
        merged_arr[k] = arr[i];
        k++;
        i++;
    }

    // 오른쪽 배열 남은거
    while (j <= high) {
        merged_arr[k] = arr[j];
        k++;
        j++;
    }

    // 원래 배열에 병합 결과 복사
    for (k = low; k <= high; k++) {
        arr[k] = merged_arr[k];
    }
}

void merge_sort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);    // 왼쪽 부분에 대해 병합정렬 진행
        merge_sort(arr, mid + 1, high); // 우측 부분에 대해 병합정렬 진행
        merge(arr, low, mid, high);
    }
}

int main()
{

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
