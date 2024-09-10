#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int v, n, arr[100001], valor, ans = 0, ansI, ansStart, ansEnd;

int main(){
    cin >> v >> n;

    valor = 200 - v;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; ans == 0 && (i < n - 1); i++) {
        int start = i + 1, end = n - 1;

        while (start != end) {
            int sum = arr[i] + arr[start] + arr[end];

            if (sum == valor) {
                ansI = arr[i];
                ansEnd = arr[end];
                ansStart = arr[start];
                ans = 1;
                break;
            }

            if (sum > valor) {
                end -= 1;
            }

            else {
                start += 1;
            }
        }
    }

    if (ans) {
        cout << "fretegratis\n";
        cout << ansI << " " << ansStart << " " << ansEnd << "\n";
    } else {
        cout << "fretepago\n";
    }

    return 0;
}
