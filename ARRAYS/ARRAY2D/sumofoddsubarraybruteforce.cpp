#include <bits/stdc++.h>
using namespace std;

int sumOddLengthSubarraysBruteForce(vector<int>& arr) {
    int n = arr.size();
    int totalSum = 0;

    for (int i = 0; i < n; i++) {             
        for (int j = i; j < n; j++) {           
            int length = j - i + 1;
            if (length % 2 != 0) {              
                int subSum = 0;
                for (int k = i; k <= j; k++) {  
                    subSum += arr[k];
                }
                totalSum += subSum;
            }
        }
    }

    return totalSum;
}

int main() {
    vector<int> arr = {1, 4, 2, 5, 3};
    cout << sumOddLengthSubarraysBruteForce(arr) << endl;  // expect 58
    return 0;
}