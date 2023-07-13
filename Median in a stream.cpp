#include <bits/stdc++.h>
using namespace std;

class DataStream {
private:
  priority_queue<int> maxi;
  priority_queue<int, vector<int>, greater<int>> mini;
  int maxs = 0, mins = 0;

public:
  void balance() {
    if (mins > maxs) {
      maxi.push(mini.top());
      maxs++;

      mini.pop();
      mins--;
    }
  }

  void push(int num) {
    maxi.push(num);
    maxs++;

    mini.push(maxi.top());
    mins++;

    maxi.pop();
    maxs--;

    balance();
  }

  int getMedian() {
    if (maxs > mins)
      return maxi.top();
    return (maxi.top() + mini.top()) / 2;
  }
};

vector<int> findMedian(vector<int> &arr, int n) {
	DataStream ds;
	vector<int> ans;

	for(auto num: arr) {
		ds.push(num);
		ans.push_back(ds.getMedian());
	}

	return ans;
}
