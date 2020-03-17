/**
*    public class ListNode {
*        int val;
*        ListNode next = null;
*
*        ListNode(int val) {
*            this.val = val;
*        }
*    }
*
*/
import java.util.ArrayList;
public class Solution {
    public ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
        ArrayList<Integer> res = new ArrayList<>();
        if(listNode!=null){
            res.add(0,listNode.val);
            while(listNode.next!=null){
                res.add(0,listNode.next.val);
                listNode = listNode.next;
            }
        }
        return res;
    }
}