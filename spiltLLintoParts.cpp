#include<bits/stdc++.h>
using namespace std;
 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    int Length(ListNode * head){
        int count=0;
        while(head!=nullptr){
            count++;
            head=head->next;
        }
        return count;
    }
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int n=Length(root);
        ListNode * head=root;
        int Min_Element_In_Each_Part=n/k;
        int extraElements=n%k;

        //COunt tell us we the part we are currently filling
        int count=1;

        vector<ListNode *>ans;
        if(Min_Element_In_Each_Part==0){
            //k>n; //That means every part can at max have 1 elemt only
            for(int i=0;i<k;i++){
                if(head!=nullptr){
                    ListNode * n=head->next;
                    head->next=nullptr;
                    ans.push_back(head);
                    head=n;
                }else{
                    ans.push_back(nullptr);
                }
            }
        }else{
            //k<=n
            while(head!=nullptr){
                ans.push_back(head);
                int x;
                if(extraElements>0){
                    x=1;
                    extraElements--;
                }else{
                    x=0;
                }
                //You have to break the current ll for the current part
                for(int i=1;i<Min_Element_In_Each_Part+x;i++){
                    head=head->next;
                    //You are currently standing at the point from where u want to end the current part
                    ListNode * n=head->next;
                    head->next=nullptr;
                    head=n;
                    count++;
                    //Below Process Just SPeeds up your code
                    if(count==k){
                        ans.push_back(head);
                        break;
                    }
                }
            }
        }
        return ans;    
    }
};
int main(){
    Solution s;
    ListNode * head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    head->next->next->next->next->next=new ListNode(6);
    head->next->next->next->next->next->next=new ListNode(7);
    head->next->next->next->next->next->next->next=new ListNode(8);

    vector<ListNode *> ans=s.splitListToParts(head,3);
    for(int i=0;i<ans.size();i++){
        ListNode * head=ans[i];
        while(head!=nullptr){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;
    }
    return 0;
}