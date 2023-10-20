#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Threadlet {
  int length;
};

vector<Threadlet> CutThreadlet(Threadlet threadlet) {
  vector<Threadlet> new_threadlets;
  new_threadlets.push_back({threadlet.length / 2});
  new_threadlets.push_back({threadlet.length / 2});
  return new_threadlets;
}

bool MakeThreadletsEqual(vector<Threadlet>& threadlets) {
  sort(threadlets.rbegin(), threadlets.rend(), [](Threadlet t1, Threadlet t2) {
    return t1.length > t2.length;
  });

  vector<Threadlet> new_threadlets = CutThreadlet(threadlets[0]);
  threadlets.erase(threadlets.begin());
  threadlets.insert(threadlets.begin(), new_threadlets.begin(), new_threadlets.end());

  int length = threadlets[0].length;
  for (Threadlet threadlet : threadlets) {
    if (threadlet.length != length) {
      return false;
    }
  }

  return true;
}

int main() {
  // Get the number of threadlets from the user.
  int num_threadlets;
  cout << "Enter the number of threadlets: ";
  cin >> num_threadlets;

  // Create a vector of threadlets.
  vector<Threadlet> threadlets(num_threadlets);

  // Get the length of each threadlet from the user.
  for (int i = 0; i < num_threadlets; i++) {
    cout << "Enter the length of threadlet " << i + 1 << ": ";
    cin >> threadlets[i].length;
  }

  bool success = MakeThreadletsEqual(threadlets);

  if (success) {
    cout << "Yes" << endl;
  } else {
    cout << "No"<< endl;
  }

  return 0;
}

