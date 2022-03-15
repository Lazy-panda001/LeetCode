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
    int getDecimalValue(ListNode* head)
    {
      string val ="";
      while(head)
      {
        val += to_string(head->val);
        head  = head->next;
      }
      
      int ans=0;
      int index= val.size()-1;
      for(auto x:val)
      {
        if(x == '1')
        {
          ans += pow(2,index);
        }
        index--;
      }
      return ans;
      
        
    }
};