#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
    stack<char>s;
    int i;
    for(i=0;i<pattern.length();i++)
    {
        if(!s.empty())
        {
            if(s.top()=='(' && pattern[i]==')')
        s.pop();
        
        else{
            s.push(pattern[i]);
        }
        }
        else{
            s.push(pattern[i]);
        }

    }
    return s.size();
}
