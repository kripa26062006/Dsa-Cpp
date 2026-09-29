int Solution::solve(string b, string a) {
    if (b.size() > a.size()) swap(a, b);  // ensure b = shorter (pattern), a = longer (text)

    int freqA[26] = {0};
    int freqB[26] = {0};
    int ans = 0;
    int n = b.size();   // n = pattern length
    int m = a.size();   // m = text length
    
    for (int i = 0; i < n; i++) {
        freqB[b[i] - 'a']++;
    }
    for (int i = 0; i < n; i++) {
        freqA[a[i] - 'a']++;
    }
    
    // Compare freqA and freqB manually
    bool isMatch = true;
    for (int c = 0; c < 26; c++) {
        if (freqA[c] != freqB[c]) {
            isMatch = false;
            break;
        }
    }
    if (isMatch) ans++;
    
    // Slide the window over 'a' (the text)
    for (int i = n; i < m; i++) {
        freqA[a[i] - 'a']++;         // add new char entering window
        freqA[a[i-n] - 'a']--;       // remove old char leaving window
        
        // compare again
        bool match = true;
        for (int c = 0; c < 26; c++) {
            if (freqA[c] != freqB[c]) {
                match = false;
                break;
            }
        }
        if (match) ans++;
    }
    
    return ans;
}