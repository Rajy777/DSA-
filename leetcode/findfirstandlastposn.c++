class Solution {
public:
    vector<int> searchRange(vector<int>& v, int t) {
        int n = v.size(), p = -1, q = -1;
        int i = 0, j = n - 1;
        
        while(i < n){
            if(v[i] == t){
                p = i;
                break;
            }
            i++;
        }
        while(j >= 0){
            if(v[j] == t){
                q = j;
                break;
            }
            j--;
        }
        
        return {p, q};
    }
};