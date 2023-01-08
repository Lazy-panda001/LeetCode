class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) 
    {
        long long volumn = (long long) length * (long long) width * (long long) height;
        
        int heavy = 0, bulky = 0;
        
        if(length >= 10000 or width >= 10000 or height >= 10000 or volumn >= 1000000000)
        {
            bulky = 1;
        }
        
        if(mass >= 100)
        {
            heavy = 1;
        }
        
        if(bulky and heavy)
        {
            return "Both";
        }
        else if(bulky == 0 and heavy == 0)
        {
            return "Neither";
        }
        
        else if(bulky)
        {
            return "Bulky";
        }
        else
            return "Heavy";
        
    }
};