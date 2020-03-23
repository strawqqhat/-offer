class Solution {
public:
    int rectCover(int target) {
        if(target < 1){
            return 0;
        }
        if(target == 1||target == 2){
            return target;
        }
        return rectCover(target-1)+rectCover(target-2);
    }
};