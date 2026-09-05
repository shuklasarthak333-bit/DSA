class Solution {
public:
    int myAtoi(string s) {
        string t = "";
        int i = 0;

        while(i < s.length() && s[i] == ' ') {
            i++;
        }

        if(i < s.length() && (s[i] == '-' || s[i] == '+')) {
            t += s[i];
            i++;
        }

        while(i < s.length() && s[i] >= '0' && s[i] <= '9') {
            t += s[i];
            i++;
        }

        if(t == "" || t == "+" || t == "-") {
            return 0;
        }
int sign = 1;
i = 0;

if(t[0] == '-') {
    sign = -1;
    i++;
}
else if(t[0] == '+') {
    i++;
}

long long num = 0;

while(i < t.length()) {

    int digit = t[i] - '0';

    if(num > INT_MAX / 10 || 
       (num == INT_MAX / 10 && digit > INT_MAX % 10)) {
        if(sign == 1)
            return INT_MAX;
        else
            return INT_MIN;
    }

    num = num * 10 + digit;
    i++;
}
return sign * num;
    }

};