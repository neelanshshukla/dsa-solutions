class Solution {
public:
    string addBinary(string a, string b) 
    {
        string result = "";

        int i = a.length() - 1;
        int j = b.length() - 1;

        int carry = 0;

        while(i >= 0 || j >= 0 || carry > 0)
        {
            int sum = carry; // sabse pehle carry add karlo

            if(i >= 0)
            {
                sum += a[i] - '0';  // char to integer conversion
                i--;
            }

            if(j >= 0)
            {
                sum += b[j] - '0'; // char to integer conversion
                j--;
            }

            // the remainder becomes the digit
            result.push_back(char('0' + (sum % 2)));  // change integer back to char  and append to result

            carry = sum / 2;  // the quotient becomes the carry

        }

        reverse(result.begin(), result.end()); // we reverse the string as we initially moved from right to left
        return result;
    }
};