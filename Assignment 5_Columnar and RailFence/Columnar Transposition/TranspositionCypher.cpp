#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cout << "Enter plain text" << endl;
getline(cin, s);
string x;
for (int i = 0; i < s.length(); i++)
if (s[i] != ' ')
x += s[i];
s = x;
int kSize;
cout << "Enter key size" << endl;
cin >> kSize;
vector<int> k(kSize);
int n = s.size();
for (int i = 0; i < kSize; i++)
cin >> k[i];
cout << "\nPlain text is: " << s << endl;
vector<vector<char>> mat(kSize + 1);
int row = 0;
for (int i = 0; i < s.length(); i++)
{
mat[k[row++]].push_back(s[i]);
row = row % kSize;
}
string cipher = "";
for (int i = 0; i <= kSize; i++)
for (int j = 0; j < mat[i].size(); j++)
cipher += mat[i][j];
cout << "\nCipher text is: " << cipher;
return 0;
}
