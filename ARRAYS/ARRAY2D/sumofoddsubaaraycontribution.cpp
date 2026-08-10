int sumOddLengthSubarrays(vector<int>& arr) {
    int n = arr.size();
    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        int left = i + 1;        
        int right = n - i;       
        
        int oddLeft = (left + 1) / 2;
        int oddRight = (right + 1) / 2;
        int evenLeft = left / 2;
        int evenRight = right / 2;

        int oddCount = oddLeft * oddRight + evenLeft * evenRight;
        totalSum += arr[i] * oddCount;
    }

    return totalSum;
}