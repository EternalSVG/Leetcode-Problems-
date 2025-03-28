class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        // Using a for loop, iterate through each string in the input list. 
        for (const string& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());

            // Sort the strings by groups. 
            anagramGroups[sortedStr].push_back(str);
        }

        // Extract the result, which is a vector of the values. 
        vector<vector<string>> result;
        for (auto&group : anagramGroups) {
            result.push_back(group.second);
        }

        return result;
    }
};