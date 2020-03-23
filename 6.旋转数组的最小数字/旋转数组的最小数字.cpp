class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int left = 0;
        int right = rotateArray.size() - 1;
        int mid = 0;
        if(rotateArray.size() == 0){
            return 0;
        }
        while(rotateArray[left] >= rotateArray[right]){
            if(right - left == 1){
                mid = right;
                break;
            }
            mid = left + (right - left)/2;
            if(rotateArray[left] == rotateArray[right] && rotateArray[left] == rotateArray[mid]){
                return MinOrder(rotateArray, left, right);
            }
            if(rotateArray[mid] >= rotateArray[left]){
                left = mid;
            }
            else {
                right = mid;
            }
        }
        return rotateArray[mid];
    }
    
private:
    int MinOrder(vector<int> &nums, int left, int right){
        int min_ = nums[left];
        for(int i = left+1; i<=right; i++){
            if(nums[i] < min_){
                min_ = nums[i];
            }
        }
        return min_;
    }
};

