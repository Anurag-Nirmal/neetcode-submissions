class Solution {
public:
    bool solve(int index, vector<int>& matchsticks, int target, vector<int>& sides) {
        if (index == matchsticks.size())
            return true;

        for (int i = 0; i < 4; i++) {
            if (sides[i] + matchsticks[index] > target)
                continue;

            sides[i] += matchsticks[index];

            if (solve(index + 1, matchsticks, target, sides))
                return true;

            sides[i] -= matchsticks[index];
        }

        return false;
    }

    bool makesquare(vector<int>& matchsticks) {
        int sum = 0;

        for (auto x : matchsticks) {
            sum += x;
        }

        if (sum % 4 != 0)
            return false;

        int target = sum / 4;

        vector<int> sides(4, 0);

        return solve(0, matchsticks, target, sides);
    }
};