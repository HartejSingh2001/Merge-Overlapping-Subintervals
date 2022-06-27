class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int> temp;
        vector<vector<int>> merged;
        sort(intervals.begin(),intervals.end());
        temp=intervals[0];
        for(auto it: intervals)
        {
            if(it[0]<=temp[1])
            {
                temp[1]=max(temp[1],it[1]);
            }
            else
            {
                merged.push_back(temp);
                temp=it;
            }
        }
        merged.push_back(temp);
        return merged;
    }
};
