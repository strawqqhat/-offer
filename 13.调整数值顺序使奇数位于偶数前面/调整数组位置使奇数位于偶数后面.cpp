class Solution {
public:
    void reOrderArray(vector<int> &array) {
        if(array.size()==0){
            return ;
        }
        int left = 0;
        int right;
        while(left < array.size()){
            while(left<array.size()&&array[left]%2==1){
                left++;
            }
            right = left+1;
            while(right < array.size()&&array[right]%2==0){
                right++;
            }
            
            if(right < array.size()){
                int temp = array[right];
                for(int i=right-1; i>=left; i--){
                    array[i+1] = array[i];
                }
                array[left++] = temp;
            }else{
                break;
            }
            
        }
    }
};