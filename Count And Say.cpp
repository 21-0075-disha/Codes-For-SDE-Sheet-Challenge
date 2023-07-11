#include <bits/stdc++.h> 
string writeAsYouSpeak(int n) 
{
    string str = "1";
    for(int x = 1; x < n; x++)
    {
        string str2 = "";
        int m = str.size();
        for(int i = 0; i < m; i++)
        {
            int cnt = 1;
            while(i < m and str[i+1] == str[i])
            {
                cnt++;
                i++;
            }
            char ch = '0' + cnt;
            str2 = (str2 + ch);
            str2 = str2 + str[i];
        }
        str = str2;
    }
    return str;
}
