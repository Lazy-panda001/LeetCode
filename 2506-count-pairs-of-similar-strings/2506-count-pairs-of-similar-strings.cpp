class Solution {
public:
    
    
    
    int similarPairs(vector<string>& words) 
    {

        int count_pairs= 0;
         
        vector<string> vec;
    
        for(auto str : words)
        {
            set<char> st;
            
            for(auto ch : str)
            {
                st.insert(ch);
            }
            
            string temp;
            for(auto ch : st)
            {
                temp +=ch;
            }
            
            vec.push_back(temp);
        }
        
        for(int i=0; i<words.size()-1; i++)
        {
            for(int j=i+1; j<words.size(); j++)
            {
                if(vec[i] == vec[j])
                {
                    count_pairs++;
                }
            }
        }
        
        return count_pairs;
    }
};