
class Solution {
public:
    int minimumOperations(vector<int>& a) {
        int c=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]%3==1)
            {
              c++;
            }
            else if(a[i]%3==2)
            {
                c++;
            }

        
        }
        return c;
        
    }
};