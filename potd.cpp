class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> startTimes, endTimes;
      
        for (const auto& interval : intervals) {
            startTimes.push_back(interval[0]);
            endTimes.push_back(interval[1]);
        }
        
        
        sort(startTimes.begin(), startTimes.end());
        sort(endTimes.begin(), endTimes.end());
        
        int groups = 0, maxGroups = 0;
        int i = 0, j = 0;
        int n = intervals.size();
        
       
        while (i < n) {
           
            if (startTimes[i] <= endTimes[j]) {
                groups++;
                i++;
            } 
           
            else {
                groups--;
                j++;
            }
          
            maxGroups = max(maxGroups, groups);
        }
        
        return maxGroups;
    }
};
