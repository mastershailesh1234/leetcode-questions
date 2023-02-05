class Solution {
public:
    bool check(vector<int>v){
        for(auto x:v){
            if(x!=0){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int len1=s.length();
        int len2=p.length();
        if(len2>len1){
            return {};
        }
        vector<int>v(26,0),ans;
        for(int i=0;i<len2;i++){
            v[p[i]-'a']++;
        }
        int j=0,i=0;
        for(;i<len2;i++){
            v[s[i]-'a']--;
        }
        for(;i<len1+1;i++){
            if(check(v)){
                ans.push_back(j);
            }
            if(i==len1){
                break;
            }
            v[s[j]-'a']++;
            v[s[i]-'a']--;
            j++;
        }
        return ans;
    }
};