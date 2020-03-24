public class Solution {
    public void reOrderArray(int [] array) {
        if(array.length == 0){
            return ;
        }
        int left=0;
        int right;
        int len = array.length;
        while(left<len){
            while(left<len&&array[left]%2==1){
                left++;
            }
            right = left+1;
            while(right<len&&array[right]%2==0){
                right++;
            }
            if(right<len){
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
}