#include <bits/stdc++.h>
using namespace std;

/* Space Optmization */
int editDistance(string str1, string str2) {
  int n = str1.size(), m = str2.size();
  vector<int> prev(m + 1, 0), curr(m + 1, 0);

  for (int j = 0; j <= m; j++)
    prev[j] = j;

  for (int i = 1; i <= n; i++) {
    curr[0] = i;
    for (int j = 1; j <= m; j++) {
      if (str1[i - 1] == str2[j - 1])
        curr[j] = prev[j - 1];
      else
        curr[j] = 1 + min({curr[j - 1], prev[j], prev[j - 1]});
    }
    prev = curr;
  }

  return prev[m];
}
