/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        if(head!=NULL){
            res.insert(res.begin(), head->val);
            while(head->next!=NULL){
                res.insert(res.begin(), head->next->val);
                head = head->next;
            }
        }
        return res;
    }
};


/*
	递归实现
*/

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(struct ListNode* head) {
        vector<int> value;
        if(head != NULL)
        {
            value.insert(value.begin(),head->val);
            if(head->next != NULL)
            {
                vector<int> tempVec = printListFromTailToHead(head->next);
                if(tempVec.size()>0)
                value.insert(value.begin(),tempVec.begin(),tempVec.end());  
            }         
             
        }
        return value;
    }
};