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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) 
    {
        vector<vector<int>>mat(m,vector<int>(n,-1));
        
        int minr = 0;
        int maxr = m-1;
        int minc = 0;
        int maxc = n-1;
        
        ListNode* temp = head;
        
        int cnt = 0;
        int tot = m*n;
        
        while(true)
        {
            // top filling
            for(int j=minc, i=minr; j<=maxc and temp != nullptr; j++)
            {
                mat[i][j] = temp->val;
                temp = temp->next;
            }
            
             if(temp == nullptr)
            {
                break;
            }
            
            minr++;
            
           
            // right filling
            for(int i= minr, j=maxc; i<=maxr and temp!= nullptr; i++)
            {
                mat[i][j] = temp->val;
                temp = temp->next;
                
            }
            
            if(temp == nullptr)
            {
                break;
            }
            maxc--;
           
            
            // bottom filling
            for(int j=maxc, i=maxr; j>=minc and temp != nullptr; j--)
            {
                mat[i][j] = temp->val;
                temp = temp->next;
               
            }
           
             if(temp == nullptr)
            {
                break;
            }
            maxr--;
            
            // left filling
            for(int i=maxr, j = minc; i>=minr and temp != nullptr; i--)  
            {
                 mat[i][j] = temp->val;
                temp = temp->next;
            }
            
            if(temp == nullptr)
            {
                break;
            }
            minc++;
        }
        
        return mat;
        
    }
};