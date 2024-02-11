

#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>


using namespace std;

vector<vector<int>> replaceMaxWithColumnMax(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    // Finding the maximum element in each column
    vector<int> columnMax(n, INT_MIN);
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            if (matrix[i][j] > columnMax[j]) {
                columnMax[j] = matrix[i][j];
            }
        }
    }

    // Replacing -1 with the respective maximum element in each column
    vector<vector<int>> answer(matrix);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (answer[i][j] == -1) {
                answer[i][j] = columnMax[j];
            }
        }
    }

    return answer;
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, -1},
        {-1, 5, -1},
        {9, -1, 10}
    };

    vector<vector<int>> answer = replaceMaxWithColumnMax(matrix);

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    cout << "\nModified Matrix:\n";
    printMatrix(answer);

    return 0;
}
