class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        int columnNumber = 0;
        
        for(char c: columnTitle)
        {
           int currentValue = c - 'A' + 1;

           columnNumber = columnNumber * 26 + currentValue;
        }

        return columnNumber;
    }
};