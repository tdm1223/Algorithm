// PlusOne
// 2021.12.28
// Easy

class Solution
{
public:
    vector<int> plusOne(vector<int>& digits)
    {
        int len = digits.size();
        digits[len - 1] = digits[len - 1] + 1;

        if (digits[len - 1] < 10)
        {
            return digits;
        }

        for (int i = len - 1; i > 0; i--)
        {
            if (digits[i] > 9)
            {
                carry(i, digits);
            }
        }

        if (digits[0] > 9)
        {
            vector<int> newDigits(len + 1, 0);
            newDigits[0] = 1;
            return newDigits;
        }
        return digits;
    }

    void carry(int index, vector<int>& digits)
    {
        digits[index] = 0;
        digits[index - 1] = digits[index - 1] + 1;
    }
};
