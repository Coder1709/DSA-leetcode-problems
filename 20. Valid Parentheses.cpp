20. Valid Parentheses



class Solution {
public:
    bool isValid(string s) {
        stack <char>stack;
        for ( int i = 0 ; i < s.length(); i++){
            char ch = s.at(i);
            if(stack.empty()){
                if ( ch == ')' || ch == '}' || ch == ']'){
                    return false;
                }
                else{
                    stack.push(ch);
                }

            }
            else{
                char ch1 = stack.top();
                if ((ch1=='(' && ch==')') || (ch1=='{' && ch=='}') || (ch1=='[' && ch== ']')){
                    stack.pop();
                }
                else{
                    stack.push(ch);
                }
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
