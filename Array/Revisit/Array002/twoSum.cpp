#include <iostream>
using namespace std;

int main() {
    int x, n;
    cout << "Enter the target: ";
    cin >> x;
    cout << "Enter the length of array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    bool found = false;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == x) {
                cout << a[i] << " " << a[j] << endl;
                found = true;
            }
        }
    }

    if (!found) cout << "No pair found.\n";
}
