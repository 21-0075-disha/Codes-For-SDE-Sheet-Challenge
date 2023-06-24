#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n) {

    unordered_set<int> vis;

    int missing = 0;

    int repeated = 0;

 

    for (int &num : arr) {

        if (vis.count(num)) {

            repeated = num;

        } else {

            vis.insert(num);

        }

    }

 

    for (int num = 1; num <= n; num++) {

        if (vis.count(num) == 0) {

            missing = num;

            break;

        }

    }

 

    return { missing, repeated };

}

 
