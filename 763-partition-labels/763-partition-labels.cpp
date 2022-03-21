class Solution {
public:
    vector<int> partitionLabels(string str) 
    {
        vector<int> last_index(26,0);
        
        for(int i=0; i<str.size(); i++)
        {
            last_index[str[i] - 'a'] = i;
        }
        
        vector<int> string_length;
        
        int start_index =0, end_index=0;
        
        for(int i=0; i<str.size(); i++)
        {
            end_index = max(end_index , last_index[str[i] - 'a']);
            
            if(i == end_index) // means we got a string, now calculate the length
            {
                int curr_length = i - start_index + 1;
                string_length.push_back(curr_length);
                start_index = i+1;
            }
        }
        return string_length;
        
    }
};