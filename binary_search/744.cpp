class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int lp=0,rp=letters.size()-1,mid;
        while(lp<=rp){
            int mid=(lp+rp)/2;
            if(int(letters[mid])>int(target)){
                rp=mid-1;
            }
            else{
                lp=mid+1;
            }
        }
        return letters[lp % letters.size()];
    }
};