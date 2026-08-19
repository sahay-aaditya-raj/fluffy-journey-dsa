class Solution {
public:
    bool checkOperator(char a){
        if(a=='+' || a=='-' || a=='*' || a=='/') return true;
        return false; 
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto t: tokens){
            if(t.size() == 1 && checkOperator(t[0])){
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                int res;
                int op = t[0];
                if(op=='+') res = a+b;
                if(op=='-') res = b-a;
                if(op=='*') res = a*b;
                if(op=='/') res = b/a;
                st.push(res);
            } else {
                st.push(stoi(t));
            }
        }
        return st.top();
    }
};
