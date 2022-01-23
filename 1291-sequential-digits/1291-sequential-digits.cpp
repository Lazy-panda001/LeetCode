class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        string str = "123456789";
        int lower_length = to_string(low).size();
        int higher_length = to_string(high).size();
        
        vector<int> res;
        
        for(int i = lower_length ; i<= higher_length; i++)
        {
            for(int j=0; j<10-i; j++)
            {
                int curr_number = stoi(str.substr(j,i)); // (index , length)
                if(curr_number >= low and curr_number <= high)
                {
                    res.push_back(curr_number);
                }
            }
        }
        
        return res;
        
    }
};