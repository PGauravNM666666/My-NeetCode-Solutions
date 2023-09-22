class Solution {
   
private:
void backtrack(vector<string>& res, string sint, int openN, int closedN, int n)
{
    if((openN == closedN) && (openN == n))
    {        
        res.push_back(sint);
        return;
    }
    if(openN < n)
    {
        // sint += "(";
        backtrack(res,sint + "(", openN + 1, closedN,n);
    }
    if(closedN < openN)
    {
        // sint += ")";
        backtrack(res,sint + ")",openN, closedN + 1,n);
    }
}

public:
    vector<string> generateParenthesis(int n) 
    {
        vector<string> res;
        backtrack(res,"",0,0, n);
        return res;
    }
};