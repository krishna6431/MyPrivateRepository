/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        stack<char> stk;
        bool flag = true;
        for (int i = 0; i < str.size(); i++)
        {Q
            if (str[i] == '(' or str[i] == '{' or str[i] == '[')
            {
                stk.push(str[i]);
                // cout << "Stack Element: ";
                // PrintStack(stk);
            }
            else
            {
                if (!stk.empty() && stk.top() == '[' && str[i] == ']')
                {
                    stk.pop();
                }
                else if (!stk.empty() && stk.top() == '{' && str[i] == '}')
                {
                    stk.pop();
                }
                else if (!stk.empty() && stk.top() == '(' && str[i] == ')')
                {
                    stk.pop();
                }
                else
                {
                    stk.push(str[i]);
                }
            }
        }
        if (!stk.empty())
            flag = false;
        // cout << str << " " << stk.size() << endl;
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0;
            while (!stk.empty())
            {
                if (stk.top() == '(')
                {
                    cnt1++;
                    stk.pop();
                }
                else if (stk.top() == ')')
                {
                    cnt2++;
                    stk.pop();
                }
                else if (stk.top() == '[')
                {
                    cnt3++;
                    stk.pop();
                }
                else if (stk.top() == ']')
                {
                    cnt4++;
                    stk.pop();
                }
                else if (stk.top() == '{')
                {
                    cnt5++;
                    stk.pop();
                }
                else if (stk.top() == '}')
                {
                    cnt6++;
                    stk.pop();
                }
            }
            // cout << cnt1 << cnt2 << cnt3 << endl;
            if (abs(cnt1 - cnt2) + abs(cnt3 - cnt4) + abs(cnt5 - cnt6) == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO " << abs(cnt1 - cnt2) + abs(cnt3 - cnt4) + abs(cnt5 - cnt6) << endl;
            }
        }
    }
    return 0;
}

//Testcase
// 3
// {{{)))
// {}[[)(]]
// (]{[)
    
// Output:
// NO 6
// YES
// NO 1   
