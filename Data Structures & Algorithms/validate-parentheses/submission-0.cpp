class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map <char,char> closeopen = { {')' , '('} , {']' , '['} , {'}' , '{'}};

        for(char c : s){
            if(closeopen.count(c)){
                if(!stack.empty() && stack.top() == closeopen[c]){
                    stack.pop();
                }else{
                    return false;
                }
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
