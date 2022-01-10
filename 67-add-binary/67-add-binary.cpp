class Solution {
public:
    string addBinary(string a, string b) 
    {
    string ans = "";
    int carry = 0, sum;
        
    if(a=="0" and b == "0")
        return "0";
        
    int i = (int)a.length() - 1, j = (int)b.length() - 1;
        
    while (i >= 0 || j >= 0 || carry) 
    {
        sum = carry;
        if (i >= 0) 
            sum += (a[i] - '0');
        
        if (j >= 0) 
            sum += (b[j] - '0');
        
        ans.push_back((char)('0' + sum % 2));
        
        carry = sum / 2;
        
        i--; 
        
        j--;
    }
        
    reverse(ans.begin(), ans.end());
    
    int index0 = 0;
    
        while(index0 < ans.size() and ans[index0] == '0')
        {
            index0++;
        }
        
    return ans.substr(index0);
        
    }
};