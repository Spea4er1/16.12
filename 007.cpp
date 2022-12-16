#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
       string n, n1 = "", m, s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
       cin >> n >> m;
       vector <string> ss;
       for (int z = 0; z < 27; z++) { 
             for (int x = 0; x < n.length(); x++)
                    n1 = n1 + s[(s.find(n[x]) + z) % 26]; 
             if (n1.find(m) != -1) {    
                    ss.push_back(n1);
             }
             n1 = "";
       }
       if (ss.size() == 0) cout << "IMPOSSIBLE";
       else
             cout << ss[ss.size() - 1]; 
       return 0;
}