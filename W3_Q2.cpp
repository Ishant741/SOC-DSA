#include<iostream>
using namespace std;

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head; //will go only 1 step
        ListNode* fast = head; // will go 2 steps if not equals to null

        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        while(fast->next!=nullptr){
            fast = fast->next;
            slow = slow->next;
        }

        return slow;
    }
};