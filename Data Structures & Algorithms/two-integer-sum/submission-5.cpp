#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        vector<pair<int,int>> temp(n);

        for(int i = 0; i < n; i++){
            temp[i] = {nums[i], i};
        }

        sort(temp.begin(), temp.end());

        int i = 0, j = n - 1;

        while(i < j){
            int sum = temp[i].first + temp[j].first;

            if(sum == target){
                int a = temp[i].second;
                int b = temp[j].second;

                if(a < b) return {a, b};
                else return {b, a};
            }
            else if(sum < target){
                i++;
            }
            else{
                j--;
            }
        }

        return {-1, -1};
    }
};