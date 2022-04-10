#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isSafe(vector<vector<int>> const &mat, int i, int j) {
    return !(i < 0 || i >= mat.size() || j < 0 || j >= mat[0].size() ||
            mat[i][j] == -1);
}
int findMaximum(vector<vector<int>> const &mat, int i, int j)
{

    if (mat.size() == 0) {
        return 0;
    }
 
    if (!isSafe(mat, i, j)) {
        return 0;
    }
 
    if (i & 1)
    {
        return mat[i][j] + max(findMaximum(mat, i, j - 1),
                            findMaximum(mat, i + 1, j));
    }

    else {
        return mat[i][j] + max(findMaximum(mat, i, j + 1),
                        findMaximum(mat, i + 1, j));
    }
}
 
int main()
{
    vector<vector<int>> mat =
    {
        { 1, 1, -1, 1, 1 },
        { 1, 0, 0, -1, 1 },
        { 1, 1, 1, 1, -1 },
        { -1, -1, 1, 1, 1 },
        { 1, 1, -1, -1, 1 }
    };
 
    cout << "The Maximum value collected is " << findMaximum(mat, 0, 0);
 
    return 0;
}
