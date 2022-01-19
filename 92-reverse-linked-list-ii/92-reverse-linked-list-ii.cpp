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
    int find_length(ListNode* head)
    {
        int len=0;
        while(head)
        {
            len++;
            head = head->next;
        }
        return len;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        int n = find_length(head);
        
        vector<int> nums(n+1);
        
        ListNode* temp = head;
        
        int k=1;
        while(temp)
        {
            nums[k++]=temp->val;
            temp = temp->next;
        }
        
        while(left<=right)
        {
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
        
    /*  for(auto it:nums)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        */
        ListNode* curr = new ListNode(nums[1]);
        ListNode* new_head = curr;
        ListNode* curr_next = nullptr;
        
        for(int i=2; i<nums.size(); i++)
        {
            curr_next = new ListNode(nums[i]);
            curr->next = curr_next;
            curr = curr->next;
            curr_next = nullptr;   
        }
        
        return new_head;
    }
};