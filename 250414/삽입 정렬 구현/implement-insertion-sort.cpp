#include <iostream>

#define MAX_N 100

using namespace std;

void insertion_sort(int arr[]);

int n;
int arr[MAX_N];

int main() 
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    insertion_sort(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
   

    return 0;
}

void insertion_sort(int arr[]) {
    for (int i = 0; i < n; i++) {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}