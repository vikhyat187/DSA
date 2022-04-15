/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public void reorderList(ListNode head) {
        if(head == null || head.next == null || head.next.next == null)return;
        
        ListNode lastsecond = head;
        
        while(lastsecond.next.next != null){
            lastsecond = lastsecond.next;
        }
        
        //reached the lastsecond pos
        
        lastsecond.next.next = head.next;
        head.next= lastsecond.next;
        //attached the first to last one
        
        lastsecond.next = null;
        //make this as end 
        reorderList(head.next.next);
    }
}