class Solution {
public:

    bool helper(int n, unordered_set<int>& mp) {

        int sum = 0;

        while(n > 0) {
            int digit = n % 10;
            n = n / 10;
            sum += digit * digit;
        }

        if(sum == 1)
            return true;

        if(mp.find(sum) != mp.end())
            return false;

        mp.insert(sum);

        return helper(sum, mp);
    }


    bool isHappy(int n) {
        unordered_set<int> mp;
        return helper(n, mp);
    }
};