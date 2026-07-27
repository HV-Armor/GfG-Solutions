class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        if (arr.size() < 2) return -1;

        int ans = INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > ans)
                ans = arr[i];
        }

        int second = INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != ans)
                second = max(second, arr[i]);
        }

        if (second == INT_MIN) return -1;  // no second largest
        return second;
    }
};