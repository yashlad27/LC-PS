// Check each character: Use a loop to go through each character of the string.
// Convert if uppercase: If a character is between 'A' and 'Z', convert it to lowercase by adding 32 to its ASCII value.

class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
        return s;
    }
};