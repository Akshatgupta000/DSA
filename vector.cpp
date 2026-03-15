// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {

//     cout << "=== 1. Creating vectors ===\n";
//     vector<int> v1;             // empty vector
//     vector<int> v2 = {1, 2, 3}; // initialized vector
//     vector<int> v3(5, 10);      // size=5, all values=10

//     cout << "v3: ";
//     for (int x : v3)
//         cout << x << " ";
//     cout << "\n\n";

//     cout << "=== 2. push_back() and emplace_back() ===\n";
//     v1.push_back(5);
//     v1.push_back(10);
//     v1.emplace_back(15); // faster
//     for (int x : v1)
//         cout << x << " ";
//     cout << "\n\n";

//     cout << "=== 3. Accessing elements ([], at(), front(), back()) ===\n";
//     cout << "v1[0] = " << v1[0] << endl;
//     cout << "v1.at(1) = " << v1.at(1) << endl;
//     cout << "front = " << v1.front() << endl;
//     cout << "back = " << v1.back() << endl;
//     cout << "\n";

//     cout << "=== 4. Iterators ===\n";
//     cout << "Normal iteration: ";
//     for (auto it = v1.begin(); it != v1.end(); ++it)
//         cout << *it << " ";

//     cout << "\nReverse iteration: ";
//     for (auto it = v1.rbegin(); it != v1.rend(); ++it)
//         cout << *it << " ";
//     cout << "\n\n";

//     cout << "=== 5. insert() ===\n";
//     vector<int> a = {1, 2, 4, 5};
//     a.insert(a.begin() + 2, 3); // insert 3 at index 2
//     for (int x : a)
//         cout << x << " ";
//     cout << "\n\n";

//     cout << "=== 6. erase() ===\n";
//     a.erase(a.begin() + 3); // remove element at index 3
//     for (int x : a)
//         cout << x << " ";
//     cout << "\n\n";

//     cout << "=== 7. erase() range ===\n";
//     vector<int> b = {10, 20, 30, 40, 50};
//     b.erase(b.begin() + 1, b.begin() + 4); // remove {20,30,40}
//     for (int x : b)
//         cout << x << " ";
//     cout << "\n\n";

//     cout << "=== 8. pop_back() ===\n";
//     b.pop_back();
//     for (int x : b)
//         cout << x << " ";
//     cout << "\n\n";

//     cout << "=== 9. clear() ===\n";
//     b.clear();
//     cout << "Size after clear: " << b.size() << "\n\n";

//     cout << "=== 10. size(), capacity(), empty() ===\n";
//     vector<int> c;
//     cout << "Initially: size=" << c.size() << " capacity=" << c.capacity() << "\n";
//     c.push_back(1);
//     c.push_back(2);
//     cout << "After push: size=" << c.size() << " capacity=" << c.capacity() << "\n";
//     cout << "Is empty? " << (c.empty() ? "Yes" : "No") << "\n\n";

//     cout << "=== 11. reserve() and shrink_to_fit() ===\n";
//     vector<int> d;
//     d.reserve(10); // pre-allocate
//     cout << "Capacity after reserve(10): " << d.capacity() << "\n";

//     d.push_back(1);
//     d.push_back(2);

//     d.shrink_to_fit(); // reduce unused memory
//     cout << "Capacity after shrink_to_fit(): " << d.capacity() << "\n\n";

//     cout << "=== 12. resize() ===\n";
//     vector<int> e = {1, 2, 3};
//     e.resize(5, 9); // increase size to 5, fill new with 9
//     for (int x : e)
//         cout << x << " ";
//     cout << "\n";

//     e.resize(2); // shrink to size 2
//     for (int x : e)
//         cout << x << " ";
//     cout << "\n\n";

//     cout << "=== 13. swap() ===\n";
//     vector<int> s1 = {1, 2, 3};
//     vector<int> s2 = {9, 8, 7};

//     s1.swap(s2);
//     cout << "s1: ";
//     for (int x : s1)
//         cout << x << " ";
//     cout << "\ns2: ";
//     for (int x : s2)
//         cout << x << " ";
//     cout << "\n\n";

//     cout << "=== 14. assign() ===\n";
//     vector<int> f;
//     f.assign(5, 100); // 5 elements, all = 100
//     for (int x : f)
//         cout << x << " ";
//     cout << "\n\n";

//     cout << "=== 15. Comparison operators ===\n";
//     vector<int> g1 = {1, 2, 3};
//     vector<int> g2 = {1, 2, 3};
//     vector<int> g3 = {1, 2, 4};

//     cout << "g1 == g2 ? " << (g1 == g2) << "\n";
//     cout << "g1 < g3 ? " << (g1 < g3) << "\n\n";

//     cout << "=== 16. Vector of pairs ===\n";
//     vector<pair<int, int>> vp;
//     vp.push_back({1, 2});
//     vp.emplace_back(3, 4);
//     for (auto &p : vp)
//         cout << "(" << p.first << "," << p.second << ") ";
//     cout << "\n\n";

//     cout << "=== 17. 2D Vector ===\n";
//     vector<vector<int>> matrix(3, vector<int>(3, 0)); // 3x3 filled with 0

//     int value = 1;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             matrix[i][j] = value++;
//         }
//     }

//     for (auto &row : matrix)
//     {
//         for (int x : row)
//             cout << x << " ";
//         cout << "\n";
//     }

//     cout << "\n=== END ===\n";

//     return 0;
// }

// ______________________________________________________________

// remove duplicates from an array using vector