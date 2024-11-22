#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> wavePrint(vector<vector<int>>& matrix) {
        vector<int> result;
        
        int m = matrix.size();
        if (m == 0) return result;  // Empty matrix edge case
        int n = matrix[0].size();
        
        for (int i = 0; i < m; i++) {
            if (i % 2 == 0) {
                // Print left to right for even indexed rows
                for (int j = 0; j < n; j++) {
                    result.push_back(matrix[i][j]);
                }
            } else {
                // Print right to left for odd indexed rows
                for (int j = n - 1; j >= 0; j--) {
                    result.push_back(matrix[i][j]);
                }
            }
        }
        
        return result;
    }
};

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    // Input the matrix
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Create a solution object and call wavePrint
    Solution sol;
    vector<int> result = sol.wavePrint(matrix);

    // Output the wave print result
    cout << "The wave print of the matrix is: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
