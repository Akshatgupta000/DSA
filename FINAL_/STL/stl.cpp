#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Pair
// int main()
// {
//     // pair<string, int> p;
//     // //  two method insert
//     // p = make_pair("Akshat", 20);
//     // cout << p.first << " " << p.second << endl;

//     // three values
//     // pair<string, pair<int, int>> p;
//     // p.first = "Akshat";
//     // p.second.first = 20;
//     // p.second.second = 100;

//     // cout << p.first << " " << p.second.first << " " << p.second.second << endl;

//     return 0;
// }

// List
int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_front(5);
    l.pop_back();

    // cout << l.front() << " " << l.back() << endl;
    // cout << l.size();

    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
}