#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
 up   =>  (x-1 , y)
 down =>  (x+1 , y)
 left =>  (x , y-1)
 right => (x , y+1)
*/

bool isSafe(int x , int y , int n , vector<vector<int>>visited , vector<vector<int>>& m ){

    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && m[x][y] ==1){
        return true;
    }
    else{
        return false;
    }
}
void solve(vector<vector<int>>& m , int n , vector<string>&ans ,int x ,int y , vector<vector<int>> vistied , string path ){

    //base case
    if(x==n-1 && y==n-1 ){
        ans.push_back(path);
        return ;
    }

    vistied[x][y] =1;

    //down
    int newx = x+1;
    int newy = y;
    if(isSafe(newx , newy , n , vistied , m)){
        path.push_back('D');
        solve(m , n ,ans ,  newx , newy , vistied , path);
        path.pop_back();
    }

    //left
    newx = x;
    newy = y-1;
    if(isSafe(newx , newy , n , vistied , m)){
        path.push_back('L');
        solve(m , n ,ans ,  newx , newy , vistied , path);
        path.pop_back();
    }

    //right
    newx = x;
    newy = y+1;
    if(isSafe(newx , newy , n , vistied , m)){
        path.push_back('R');
        solve(m , n ,ans ,  newx , newy , vistied , path);
        path.pop_back();
    }

    //up 
    newx = x-1;
    newy = y;
    if(isSafe(newx , newy , n , vistied , m)){
        path.push_back('U');
        solve(m , n ,ans ,  newx , newy , vistied , path);
        path.pop_back();
    }
    vistied[x][y] = 0;
}

vector<string> ratInMaze(vector<vector<int>>& m) {
    
    vector<string>ans;
    int n = m[0].size();
    if(m[0][0] == 0) return ans;
    int srcx =0;
    int srcy =0;

    vector<vector<int>> vistied = m;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            vistied[i][j]=0;
        }
    }

    string path = "" ;
    solve( m , n ,ans ,  srcx , srcy , vistied , path);
    sort(ans.begin() , ans.end());
    return ans;

        
}

int main(){

    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> paths = ratInMaze(maze);

    for(const string& path : paths) {
        cout << path << endl;
    }

    return 0;
}