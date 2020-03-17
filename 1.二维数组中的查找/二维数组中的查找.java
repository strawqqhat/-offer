public class Solution {
    public boolean Find(int target, int [][] array) {
        int rows = array.length;
        int cols = array[0].length;
        if(rows == 0||cols == 0){
            return false;
        }
        int i = rows-1;
        int j = 0;
        while(i>=0&&j<cols){
            if(array[i][j] > target){
                i--;
            }else if(array[i][j] < target){
                j++;
            }else{
                return true;
            }
        }
        return false;
    }
}