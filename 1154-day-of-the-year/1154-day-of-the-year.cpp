class Solution {
public:
    
    bool is_leap_year(int year)
    {
        if(year % 400 == 0)
        {
            return true;
        }
        if(year % 100 ==0)
            return false;
        if(year % 4 ==0)
            return true;
        return false;
    }
    
    int dayOfYear(string date) 
    {
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));
        
        vector<int> months({31,28,31,30,31,30,31,31,30,31,30,31});
        
        int result_day= day;
        
        if(is_leap_year(year) == true)
        {
            months[1] = 29;
        }
        
        for(int i=0; i<month-1; i++)
        {
            result_day += months[i];
        }
        return result_day;
    }
};