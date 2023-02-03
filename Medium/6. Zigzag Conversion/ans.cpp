class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>v(numRows,"");
        int i = 0;
        while(i<s.length()){
            for(int j=0;j<numRows;j++){
                if(i<s.length()){
                    v[j]=v[j]+s[i];
                    i++;
                }
                else
                    break;
            }
            for(int j=numRows-2;j>0;j--){
                if(i<s.length()){
                    v[j]=v[j]+s[i];
                    i++;
                }
                else
                    break;
            }
            
        }
        string ans="";
        for(auto x:v){
            ans+=x;
        }
        return ans;
    }
};