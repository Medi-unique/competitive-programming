class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length(),count=0,m=0;
        for(int i=0,j=0; i<n; i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ){//check if elements are vowel
                count++;
            }
            if(i-j+1==k){//limit window size
                 m=max(m,count); 
                if(s[j]=='a'|| s[j]=='e'|| s[j]=='i'|| s[j]=='o'|| s[j]=='u'){//check if elements are vowel
                 count--; 
                } 
                j++;
            }
        }
        return m;
    }
};
