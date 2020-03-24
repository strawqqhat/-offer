/*
public class ListNode {
    int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }
}*/
public class Solution {
    public ListNode FindKthToTail(ListNode head,int k) {
        if(head==null||k<=0){
            return null;
        }
        ListNode left = head;
        ListNode right = head;
        while(k>1){
            if(right.next!=null){
                right = right.next;
                k--;
            }else{
                return null;
            }
        }
        while(right.next!=null){
            left = left.next;
            right = right.next;
        }
        return left;
    }
}