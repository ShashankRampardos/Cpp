class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){// pahlay transpose karangay
            for(int j=i+1;j<m;j++){
               swap(matrix[i][j],matrix[j][i]);

            }

        }
        for(int i=0;i<n;i++){// transpose kay bad reverse karengay har row ko
            reverse(matrix[i].begin(),matrix[i].end());
        }
        // hogaya reverse abh is tarah
        
    }
};
