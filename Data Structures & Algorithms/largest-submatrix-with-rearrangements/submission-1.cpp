class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> height(m, 0);

        int ans = 0;

        for (int i = 0; i < n; i++) {

            // Calculate heights
            for (int j = 0; j < m; j++) {

                if (matrix[i][j] == 1)
                    height[j]++;
                else
                    height[j] = 0;
            }

            // Make a copy before sorting
            vector<int> temp = height;

            sort(temp.begin(), temp.end(), greater<int>());

            // Calculate area
            for (int j = 0; j < m; j++) {

                int area = temp[j] * (j + 1);

                ans = max(ans, area);
            }
        }

        return ans;
    }
};