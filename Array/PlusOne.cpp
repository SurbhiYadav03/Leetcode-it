class Solution {
  public:
    vector<int> plusOne(vector<int>& digits) {
          int last = digits.size() - 1;
          int i = last;

    if (digits[i] == 9)
    {
        while (digits[i] == 9 && i>0) {
        digits[i] = 0;
        i--;
        }

        if (digits[i] == 9) {
        digits[i]=0;
        digits.resize(digits.size() + 1);
        digits[0]=1;
        }
        else
        digits[i] = digits[i] + 1;
    }
    else
    {
        digits[last] = digits[last] + 1;

    }

    return digits;

    }
  };
