class Solution {
public:
bool op(string c)
{
    if(c=="*"||c=="/"||c=="+"||c=="-") return true;
    return false;
}
int operation(int a,int b,string c)
{
    if(c=="+") return a+b;
    else if(c=="-") return b-a;
    else if(c=="*") return a*b;
    else return b/a;
}
    int evalRPN(vector<string>& tokens) {
       
        stack<int> s;
        for(int i=0;i<tokens.size();++i)
        {
            string d=tokens[i];
            if(op(d))
            {
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                int res=operation((int)a,(int)b,d);
                s.push(res);
            }
            else
            s.push(stoi(d));
        }

        return s.top();

    }
};