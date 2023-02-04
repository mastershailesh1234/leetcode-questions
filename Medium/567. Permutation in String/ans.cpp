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
    bool checkInclusion(string s1, string s2) {
        vector<int>v(26,0);
        int len1=s1.length();
        int len2=s2.length();
        if(len1>len2){
            return false;
        }
        for(int i=0;i<len1;i++){
            v[s1[i]-'a']++;
        }
        
        int ctr=0,j=0,i=0;
        for(;i<len1;i++){
            v[s2[i]-'a']--;            
        }
        for(;i<len2+1;i++){
            if(check(v)){
                return true;
            }
            if(i==len2){
                break;
            }
            v[s2[j]-'a']++;
            v[s2[i]-'a']--;
            j++;
        }
        return false;
    }
};