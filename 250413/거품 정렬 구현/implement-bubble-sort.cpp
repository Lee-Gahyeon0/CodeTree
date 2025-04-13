#include <iostream>
using namespace std;

void bubble_sort(int arr[]);

int n;
int arr[100];

int main()
{
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

void bubble_sort(int arr[]) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

}
