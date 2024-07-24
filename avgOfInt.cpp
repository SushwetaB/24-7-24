#include <iostream>
#include <vector>
using namespace std;

double avgOfNum(vector<int> arr, int n) {
    if (n == 0)
        return 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum /(double) n;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array of integers: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = x;
    }
    cout << "The average is " << avgOfNum(arr, n) << endl;
    return 0;
}
