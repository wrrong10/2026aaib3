///week04-3.cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(99);
    a.push_back(88);
    a.push_back(77);
    ///在上方 setting-->compiler-->勾選第2個 -std=c++11
    for (int i=0; i<a.size(); i++) cout << a[i] << " ";
    cout << "\n";

   vector<int> a2(5, 7);
   for (int num : a2) cout << num << ' ';
   cout << "\n";

   vector<int> a3 = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0};
   for (int num : a3) cout << num << ' ';
   cout << "\n";
}
