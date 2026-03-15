#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 2, 4, 4};

    unordered_map<int, int> freqInt;
    for (int x : nums)
    {
        freqInt[x]++; // count each number
    }

    cout << "Integer Frequencies: " << endl;
    for (auto &p : freqInt)
    {
        cout << p.first << " -> " << p.second << "\n";
    }

    return 0;
}