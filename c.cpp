class Solution {
public:
    int minOperations(vector<int>& b) {
        int c = 0;
        int g = 0;

        for (int i = 0; i < b.size(); i++) {
            if (b[i] == g) {   
            g=g==0?1:0;
               c++; 
            }
        }

        return c;
    }
};