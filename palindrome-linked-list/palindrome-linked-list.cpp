/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>stack;
        if (head==NULL)return true;
        ListNode*temp=head;
        while(temp!=NULL){
            stack.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(stack.size()>0 and temp->val==stack.top()){
            stack.pop();
            temp=temp->next;
        }
        if (stack.size()>0)return false;
        return true;
    }
};

// Dry run 
// 2 3 4 5 3 2 1
//     stack [2,3,4,5,3,2,1]
//     it checks 2==1
//     stack.size()>0 return false

