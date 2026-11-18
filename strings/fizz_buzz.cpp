class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> answer(n);
        int i = 1;
        while(i <=  n)
        {
            if(i % 3 == 0 && i % 5 == 0) answer[i - 1] = "FizzBuzz";
            else if(i % 3 == 0) answer[i - 1] = "Fizz";
            else if(i % 5 == 0) answer[i - 1] = "Buzz";
            else answer[i - 1] = to_string(i);
            i++;
        }
        return answer;
    }
};