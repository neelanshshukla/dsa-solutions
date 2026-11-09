class Solution {
public:
    string convertToTitle(int columnNumber) 
    {
       string result = "";

       while(columnNumber > 0)
       {
         columnNumber--; // to fix the 26 % 26 error

         int remainder = columnNumber % 26;
         char current_char = 'A' + remainder;

         result = current_char + result;

         columnNumber /= 26;    
       }

       return result;

    }
};