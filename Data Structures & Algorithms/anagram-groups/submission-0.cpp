class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        vector<vector<string>> result;
        for(int i = 0; i<strs.size(); i++){
            vector<int> count(26,0);

            for(int j = 0; j<strs[i].length();j++){
                count[strs[i].at(j) - 'a']++;
            }

            string key = to_string(count[0]);

            for(int j = 1; j<26; j++){
                key += ',' + to_string(count[j]);
            }
            res[key].push_back(strs[i]);
        }
        for(const auto& pa : res){
            result.push_back(pa.second);
        }
        return result;
    }
};

