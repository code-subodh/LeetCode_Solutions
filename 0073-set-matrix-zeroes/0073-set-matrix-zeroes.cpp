class Solution {
public:
    // Better Solution
    // void setZeroes(vector<vector<int>>& matrix) {
    //     int n = matrix.size();
    //     int m = matrix[0].size();
    //     // int rows[n] = {0};
    //     vector<int> rows(n, 0);
    //     // int cols[m] = {0};
    //     vector<int> cols(m, 0);
    //     for (int i = 0; i < n; i++) {
    //         for (int j = 0; j < m; j++) {
    //             if (matrix[i][j] == 0) {
    //                 rows[i] = 1;
    //                 cols[j] = 1;
    //             }
    //         }
    //     }
    //     for (int i = 0; i < n; i++) {
    //         for (int j = 0; j < m; j++) {
    //             {
    //                 if (rows[i] || cols[j]) {
    //                     matrix[i][j] = 0;
    //                 }
    //             }
    //         }
    //     }
    // }

    void setZeroes(vector<vector<int>>& matrix) {
        // int rows[n] = {0}; => matrix[...][0]
        // int cols[m] = {0}; => matrix[0][...]
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    // mark row to zero
                    matrix[i][0] = 0;
                    // mark row to zero
                    if (j != 0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0; // when j = 0;
                }
            }
        }
        // till here marking done
        // now change to zero

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] != 0) {
                    if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        if (matrix[0][0] == 0) {
            for (int j = 1; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};