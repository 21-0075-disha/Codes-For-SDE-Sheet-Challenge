bool isValidParenthesis(string expression)
{
    stack<char>st;
    for (char c : expression) { 
        if (c == '(' || c == '{' || c == '[') { 
            st.push(c); 
            }
            else { 
            if (st.empty() || 
                (c == ')' && st.top() != '(') || 
                (c == '}' && st.top() != '{') ||
                (c == ']' && st.top() != '[')) {
                return false; 
            }
            st.pop(); 
        }
    }
    return st.empty(); 
}
