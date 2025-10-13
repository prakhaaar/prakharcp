#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, n;
        cin >> l >> n;

        string s;
        cin >> s;

        vector<int> ans(n);
        for (int i = 0; i < n; ++i) {
            cin >> ans[i];
        }

        string s1;
        cin >> s1;

        
        set<int> a(ans.begin(), ans.end());
        vector<int> b(a.begin(), a.end());
        sort(b.begin(), b.end());

       
        sort(s1.begin(), s1.end());

        
        map<int, char> my_map;
        for (size_t i = 0; i < b.size(); ++i) {
            my_map[b[i]] = s1[i];
        }

        
    for (auto i = my_map.begin(); i != my_map.end(); ++i) {
    int index = i->first;
    char newChar = i->second;
    s[index - 1] = newChar;
   }
    
        

        cout << s << endl;
    }

    return 0;
}
 