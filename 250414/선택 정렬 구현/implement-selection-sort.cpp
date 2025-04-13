#include <iostream>

using namespace std;

void selection_sort(int arr[]);

int n;
int arr[100];

int main() 
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

void selection_sort(int arr[]){
    for (int i = 0; i < n - 1; i++){
        int m = i;
        for (int k = i+1; k < n; k++) {
            if (arr[k] < arr[m])
                m = k;
        }
        int tmp = arr[i];
        arr[i] = arr[m];
        arr[m] = tmp;
    }
}