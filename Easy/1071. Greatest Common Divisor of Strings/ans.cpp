#include<iostream.h>
using namespace std;

string gcdOfStrings(string str1, string str2) {
        int i=0;
        string ans="";
        int n=str1.length(),m=str2.length();
        while(i<n&&i<m){
            if(str1[i]==str2[i]){
                string s=str2.substr(0,i+1);
                int num = s.length();
                if(n%num==0&&m%num==0){
                    bool flag1=true,flag2=true;
                    for(int j=0;j<n;j+=num){
                        if(str1.substr(j,num)!=s){
                            flag1=false;
                            break;
                        }
                    }
                    for(int j=0;j<m;j+=num){
                        if(str2.substr(j,num)!=s){
                            flag2=false;
                            break;
                        }
                    }
                    if(flag1&&flag2){
                        ans = s;
                    }
                }
            }
            i++;
        }
        return ans;
    }

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<gcdOfStrings(s1,s2);
}