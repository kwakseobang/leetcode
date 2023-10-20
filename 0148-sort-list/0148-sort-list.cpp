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
    //병합정렬 사용
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head; //더 이상 분할되지 않을 시 return
        
        ListNode* newHead = head;
        ListNode* midTail =nullptr; //중간 노드
        ListNode* tail = head; //마지막 노드
        while(tail && tail->next ){
            midTail = newHead;
            newHead = newHead->next;
            tail = tail->next->next;
        }
        midTail->next = nullptr; //중간노드 찾고 끊어주는 작업
        ListNode* left = sortList(head);
        ListNode* right = sortList(newHead);
        // merge(left,right);
        return merge(left,right);
    }
    
    ListNode* merge(ListNode* left,ListNode* right){
        ListNode* temp = new ListNode;
        ListNode* newHead = temp;
        while(left && right){
            if(left->val > right->val){
                temp->next= right;
                right = right->next;
            }
            else {
                temp->next = left;
                left = left->next;
            }
            temp = temp->next;
        }
            
        if(left) temp->next = left;
        else temp->next = right;
        
        return newHead->next;
        
    }
            
};