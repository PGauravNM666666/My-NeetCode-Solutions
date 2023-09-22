class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int first, second;
        
        for(int i = 0; i < tokens.size(); i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                second = s.top();
                s.pop();
                first = s.top();
                s.pop();

                switch(tokens[i][0])
                {
                    case '+': s.push(first + second); break;
                    case '-': s.push(first - second); break;
                    case '*': s.push(first * second); break;
                    case '/': s.push(first / second); break;
                }
                
            }
            else
            {
                s.push(stoi(tokens[i]));
            }
        }

        return s.top();
    }
};