#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_books = 0, current_books = 0, current_time = 0;
    int start = 0;

    for(int end = 0; end < n; end++) {
        current_time += arr[end];
        current_books++;

        while(current_time > t) {
            current_time -= arr[start];
            start++;
            current_books--;
        }

        max_books = max(max_books, current_books);
    }

    cout << max_books << endl;
    return 0;
}