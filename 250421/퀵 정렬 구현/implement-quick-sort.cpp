#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100000];

// 피벗 선택
int select_pivot(int arr[], int low, int high) {
    int a = arr[low];
    int b = arr[(low + high) / 2];
    int c = arr[high];
    if (high < 3) {
        return high;
    }
    else {
        if ((a <= b && b <= c) || (c <= b && b <= a)) return (low + high) / 2;
        else if ((b <= a && a <= c) || (c <= a && a <= b)) return low;
        else return high;
    }
}

int partition(int arr[], int low, int high) {
    int pivot_index = select_pivot(arr, low, high); // 피벗 인덱스 선택
    int pivot_value = arr[pivot_index];  // 피벗 값
    swap(arr[pivot_index], arr[high]); // 피벗을 배열의 끝으로 이동

    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot_value) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        ;
        int pos = partition(arr, low, high); // 파티션 후 피벗 위치
        quick_sort(arr, low, pos - 1); // 왼쪽 부분 정렬
        quick_sort(arr, pos + 1, high);  // 오른쪽 부분 정렬
    }

    
}



int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
