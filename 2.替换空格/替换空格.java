public class Solution {
    public String replaceSpace(StringBuffer str) {
        int count = 0;
        if(str.length()==0)
            return str.toString();
        
    	for(int i=0; i<str.length(); i++){
            if(str.charAt(i) == ' '){
                count++;
            }
        }
        int indexOld = str.length()-1;
        int newLength = str.length()+2*count;
        int indexNew = newLength-1;
        str.setLength(newLength);
        for(;indexOld>=0&&indexOld<newLength; --indexOld){
            if(str.charAt(indexOld) == ' '){
                str.setCharAt(indexNew--, '0');
                str.setCharAt(indexNew--, '2');
                str.setCharAt(indexNew--, '%');
            }else{
                str.setCharAt(indexNew--, str.charAt(indexOld));
            }
        }
        return str.toString();
    }
}