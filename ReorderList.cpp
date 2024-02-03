#include <bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode * next;
    ListNode(int val){
        this->val=val;
        this->next=nullptr;
    }
};

class Solution {
public:
    ListNode * mid(ListNode * head){
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode * slow=head;
        ListNode * fast=head->next;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode * reverseRecursively(ListNode * head){
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        //smaller problem
        ListNode * UltimateHead=reverseRecursively(head->next);
        //Task that u have to do
        ListNode * CurrentHead=head->next;
        CurrentHead->next=head;
        head->next=nullptr;
        return UltimateHead;
    }
    ListNode * reverse(ListNode * head){
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode * prev=nullptr;
        ListNode * curr=head;
        ListNode * next=nullptr;
        while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return;
        }
        ListNode * midNode=mid(head);
        ListNode * head2=midNode->next;
        midNode->next=nullptr;
        head2=reverse(head2);
        ListNode * curr1=head;
        ListNode * curr2=head2;
        ListNode * next1=nullptr;
        ListNode * next2=nullptr;
        while(curr1!=nullptr && curr2!=nullptr){
            next1=curr1->next;
            next2=curr2->next;
            curr1->next=curr2;
            curr2->next=next1;
            curr1=next1;
            curr2=next2;
        }
    }
    void print(ListNode * head){
        while(head!=nullptr){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;
    }
};
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    Solution s;
    ListNode * head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    s.print(head);
    s.reorderList(head);
    s.print(head);
    return 0;
}