class Solution {
public:
    bool isValid(string s) {
        stack<char>stack;
        int n = s.length();
        for(int i = 0;i<n;i++){
            char cur = s[i];
            if(stack.empty()){
                stack.push(cur);
                continue;
            }
            if(cur == ')' && stack.top()=='('){
                stack.pop();
            }
            else if(cur == '}' && stack.top()=='{'){
                stack.pop();
            }
            else if(cur == ']' && stack.top()=='['){
                stack.pop();
            }
            else{
                stack.push(cur);
            }
        }
        if(stack.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};