#include <iostream>
#include <string>

using namespace std;

int last_ocurrence(string s, string t){
    int last = -1;
    bool previus_common = true;
    for (int i = 0; i < min(s.length(), t.length()); i++) {
        if (s[i] == t[i] && previus_common) {
            last = i;
        } else{
            previus_common = false;
            break;
        }
    }
    return last+1;
}
string ConcatRemove(string s, string t, int k) {
    int last_common = last_ocurrence(s,t);

    int removals = s.length() - last_common;
    int additions = t.length() - last_common;
    int total_ops = removals + additions;

    if (total_ops <= k) {
        return "yes";
    } else {
        return "no";
    }
}

int main() {
    string s, t;
    int k;

    cin >> s;
    cin >> t;
    cin >> k;

    cout << ConcatRemove(s, t, k) << endl;

    return 0;
}
