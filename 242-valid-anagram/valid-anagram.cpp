class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        int count[26];
        for(char ch:s){
            count[ch-'a']++;
        }
        for(char ch:t){
            if(count[ch-'a']>0)
                count[ch-'a']--;
            else
                return false;
        }
        return true;
    }
};