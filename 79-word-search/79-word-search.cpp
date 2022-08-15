class Solution {
public:
    bool dfs(vector<vector<char>>& board,string word,int i,int j,int idx){
        if(idx==word.size())return 1;
        if(i<0||i>=board.size()||j<0||j>=board[0].size()||board[i][j]!=word[idx])return 0;
        board[i][j]='.';
        bool flag=dfs(board,word,i+1,j,idx+1)||dfs(board,word,i,j+1,idx+1)||dfs(board,word,i-1,j,idx+1)||dfs(board,word,i,j-1,idx+1);
        board[i][j]=word[idx];
        return flag;
    }
    bool exist(vector<vector<char>>& board, string word) {
        if(word==" ")return 0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]&&dfs(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};