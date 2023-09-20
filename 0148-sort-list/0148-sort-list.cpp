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
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next){
            return head;
        }
        ListNode* midTail = head;
        ListNode* one = head;
        ListNode* two = head;
        while (two && two->next) //mid 위치
        {
            midTail = one;
            one = one->next;
            two = two->next->next;
        }
        midTail->next = nullptr; //중간노드 끊김
        ListNode* left = sortList(head);
        ListNode* right = sortList(one);
        return mergeSort(left,right);
    }
    ListNode* mergeSort(ListNode* left,ListNode* right){
        ListNode* temp = new ListNode;
        ListNode* newHead = temp;
        while (left && right){
            if(left->val <= right->val){
                temp->next = left;
                left = left->next;
            }
            else{
                temp->next = right;
                right = right->next;
            }
            temp = temp->next;
        }
        //비교 끝난 후 남은 연결리스트 정리
        if (left){
            temp->next = left;
            
        }
        else {
            temp -> next = right;

        }
        return newHead->next;
        
            }
};