class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        
        int s_0 = 0;
        int s_1 = 0;
        
        for(int i=0; i<n; i++) {
            if(students[i] == 0) {
                s_0++;
            }
            else
            {
                s_1++;
            }
        }
        
        
        for(int i=0; i<n; i++) {
           if(sandwiches[i] == 0) {
               if(s_0 > 0) {
                   s_0--;
               }
               else {
                   break;
               }
           }
           else {
               if(s_1 > 0) {
                   s_1--;
               }
               else {
                   break;
               }
           }
        }
        
        return s_0+s_1;
    }
};