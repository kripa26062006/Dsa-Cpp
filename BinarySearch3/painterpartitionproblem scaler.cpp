bool isFeasible(vector<long long int> &C, int A, long long mid) {
    long long s = 0;
    int count = 1;
    for (int i = 0; i < C.size(); i++) {
        s = s + C[i];
        if (s > mid) {
            s = C[i];
            count++;
        }
        if (count > A) {
            return false;
        }
    }
    return true;
}

int paintersPartition(int A, int B, vector<long long int> &C) {
    long long l = 0;
    long long h = 0;
    long long ans = 0;
    for (int i = 0; i < C.size(); i++) {
        h += C[i];
        if (C[i] > l) {
            l = C[i];
        }
    }
    while (l <= h) {
        long long mid = l + (h - l) / 2;
        if (isFeasible(C, A, mid)) {
            ans = mid;
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return (ans * B) % 10000003;
}