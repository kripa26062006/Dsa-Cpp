int Solution::kthsmallest(const vector<int> &A, int B) {
    vector<int> a = A;
    int n = A.size();
    for (int i = 0; i < B; i++) {
        int min_idx = i;
        int min_value = a[i];
        for (int j = i; j < n; j++) {
            if (a[j] < min_value) {
                min_value = a[j];
                min_idx = j;
            }
        }
        swap(a[i], a[min_idx]);
    }
    return a[B - 1];
}