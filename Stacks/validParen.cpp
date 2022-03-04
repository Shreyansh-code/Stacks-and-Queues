class Solution {
public:
    bool matches(char top, char ch){
        if((ch==')'&& top=='(') || (ch=='}'&& top=='{') || (ch==']'&& top=='['))
            return true;
        else 
            return false;
    }
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            //if openining bracket stack push 
            if(ch=='(' || ch=='{' || ch=='[')
                st.push(ch);
            
            //if closing bracket stack pop
            else{
                if(!st.empty())
                {
                    char top = st.top();
                    if(matches(top, ch)){
                        st.pop();
                    }
                    else{
                       return false ;
                    }
                }
                else{
                    return false;
                }
                
                }                
        }
        if(st.empty()){
            return true;
        }
        else
            return false;
    }
};
