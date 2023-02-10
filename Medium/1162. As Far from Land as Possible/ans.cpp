class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    q.push({i,j});
                }
            }
        }
        cout<<q.size()<<endl;
        int res=-1;
        pair<int, int> arr[4] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(auto m:arr){
                int nx=x+m.first;
                int ny=y+m.second;
                res=grid[x][y];
                if(max(nx,ny)<n&&min(ny,nx)>=0){
                    if(grid[nx][ny]==0){
                        q.push({nx,ny});
                        grid[nx][ny]=grid[x][y]+1;
                    }
                }
            }
        }
        if(res>1){
            return res-1;
        }
        else{
            return -1;
        }
    }
};