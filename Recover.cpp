class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
            vector<int> ans;
    for(auto itr1 : order){
        for(auto itr2 : friends){
            if (itr1 == itr2)
            {
                ans.emplace_back(itr1);
            }
            
        }
    }
        return ans;
    }
};
