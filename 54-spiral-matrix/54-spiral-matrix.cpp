class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> spiral;
        int rowStart=0;
        int rowEnd=n-1;
        int colStart=0;
        int colEnd=m-1;
        while(rowStart<=rowEnd&&colStart<=colEnd&&colEnd>=0&&rowEnd>=0){
            for(int col=colStart;col<=colEnd;col++){
                spiral.push_back(matrix[rowStart][col]);
            }
            rowStart++;
            for(int row=rowStart;row<=rowEnd;row++){
                spiral.push_back(matrix[row][colEnd]);
            }
            colEnd--;
            for(int col=colEnd;col>=colStart&&rowStart<=rowEnd;col--){
                spiral.push_back(matrix[rowEnd][col]);
            }
            rowEnd--;
            for(int row=rowEnd;row>=rowStart&&colStart<=colEnd;row--){
                spiral.push_back(matrix[row][colStart]);
            }
            colStart++;
        }
        return spiral;
    }
};