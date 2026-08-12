 class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        
        while(columnNumber > 0) {
            columnNumber = columnNumber - 1;
            
            int remainder = columnNumber % 26;
            
            char letter = (char)('A' + remainder);
            
            result = letter + result;
            
            columnNumber = columnNumber / 26;
        }
        
        return result;
    }
};