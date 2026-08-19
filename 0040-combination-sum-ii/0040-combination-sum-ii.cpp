class Solution {
public:
    void backtrack(vector<int>& candidates, int idx, int target, vector<int>& cur, vector<vector<int>>& res) {
        if (target == 0) {
            res.push_back(cur);
            return;
        }
        if (target < 0 || idx >= candidates.size())
            return;
        cur.push_back(candidates[idx]);
        backtrack(candidates, idx + 1, target - candidates[idx], cur, res);
        cur.pop_back();
        int nx = idx + 1;
        while (nx < candidates.size() && candidates[nx] == candidates[idx]) {
            nx++;
        }
        backtrack(candidates, nx, target, cur, res);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> res;
        vector<int> cur;

        backtrack(candidates, 0, target, cur, res);

        return res;
    }
};