#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<double> arr(n);

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // ---- Mean ----
    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double mean = sum / n;

    // ---- Median ----
    sort(arr.begin(), arr.end());
    double median;

    if(n % 2 == 0)
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    else
        median = arr[n/2];

    // ---- Mode ----
    map<double, int> freq;
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    double mode = arr[0];

    for(auto it : freq) {
        if(it.second > maxFreq) {
            maxFreq = it.second;
            mode = it.first;
        }
    }

    cout << "\nMean = " << mean;
    cout << "\nMedian = " << median;
    cout << "\nMode = " << mode << endl;

    return 0;
}
