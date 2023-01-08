// The first solution
class Solution {
public:
    string reverseWords(string s) {
        string z = "";
        string total = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                reverse(z.begin(), z.end());
                total += z + " ";
                z = "";
            } else {
                z += s[i];
            }
        }
        if (z.length() > 0) {
            reverse(z.begin(), z.end());
            total += z + " ";
        }
        return total.substr(0, total.size() - 1);
    }
};


// An optimized solution
class Solution {
public:
    string reverseWords(string s) {
        int length = s.length();
        int i = 0;
        while(i<length)
        {
            int start=i;
            while(i<length && s[i]!=' ')
            {
                i++;
            }
            int l=start,r=i-1;
            while(l<r)
            {
                char temp=s[l];
                s[l]=s[r];
                s[r]=temp;
                l++;
                r--;
            }
            while(i<length && s[i]==' ')
            {
                i++;
            }
        }
        return s;
    }
};