class Solution {
public:
    string sortedd(string s3){
        sort(s3.begin(),s3.end());
        return s3;
    }
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.length();
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(s1[i] != s2[i]){
                cnt++;
            }
        }
        if(cnt < 3){
            return sortedd(s1) == sortedd(s2);
        }
        return false;
    }
};