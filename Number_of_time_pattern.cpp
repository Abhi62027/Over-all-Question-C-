#include <iostream>
using namespace std;
int count(string X, string Y, int m, int n)
{
    if (m == 1 && n == 1) {
        return (X[0] == Y[0]);
    }
    if (m == 0) {
        return 0;
    }

    if (n == 0) {
        return 1;
    }
    if (n > m) {
        return 0;
    }
 
    return ((X[m - 1] == Y[n - 1]) ? count(X, Y, m - 1, n - 1) : 0) +
        count(X, Y, m - 1, n);
}
 
int main()
{
    string X = "subsequence";   // input string
    string Y = "sue";           // pattern
 
    cout << count(X, Y, X.size(), Y.size());
 
    return 0;
}
