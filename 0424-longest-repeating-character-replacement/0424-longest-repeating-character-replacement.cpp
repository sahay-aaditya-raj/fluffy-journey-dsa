class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int i = 0, maxFreq = 0, mx = 0;
        for (int j = 0; j < s.size(); j++) {
            freq[s[j] - 'A']++;
            maxFreq = max(maxFreq, freq[s[j] - 'A']);
            while ((j - i + 1) - maxFreq > k) {
                freq[s[i] - 'A']--;
                i++;
            }

            mx = max(mx, j - i + 1);
        }
        return mx;
    }
};