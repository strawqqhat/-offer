/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        ListNode* left = pListHead;
        ListNode* right = pListHead;
        if(pListHead==NULL||k<=0){
            return NULL;
        }
        while(k>1){
            if(right->next!=NULL){
                right = right->next;
                k--;
            }else{
                return NULL;
            }
        }
        while(right->next!=NULL){
            left = left->next;
            right = right->next;
        }
        return left;
    }
};