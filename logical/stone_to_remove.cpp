class Solution {
public:
    bool canAliceWin(int n) {
        int stones_to_remove = 10;
        bool aliceturn = true;
        while(n >= stones_to_remove)
        {
            n -= stones_to_remove;
            stones_to_remove--;
            aliceturn = !aliceturn;
        }

        return !aliceturn;
    }
};