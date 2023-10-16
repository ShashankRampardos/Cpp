class Solution {
public:
    void addRec(string &num1, string &num2, int i1, int i2, int carry, string &ans) {
        // base case
        if (i1 < 0 && i2 < 0) {
            if (carry > 0)
                ans = to_string(carry)+ans;// ans badmay islia hay kyuki digits ko front may add karna hay.
            return;
        }

        // processing
        int n = carry;

        if (i1 >= 0)
            n += num1[i1] - '0';

        if (i2 >= 0)
            n += num2[i2] - '0';

        // main addition
        ans = to_string(n % 10) + ans;
        carry = n / 10;

        // recursive call
        addRec(num1, num2, i1 - 1, i2 - 1, carry, ans);
    }

    string addStrings(string &num1, string &num2) {
        string ans = "";
        addRec(num1, num2, num1.size() - 1, num2.size() - 1, 0, ans);

        return ans;
    }
};
