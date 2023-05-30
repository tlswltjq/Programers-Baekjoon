#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int knight_move[][2] = {
    {2, 1},
    {2, -1},
    {1, 2},
    {1, -2},
    {-2, 1},
    {-2, -1},
    {-1, 2},
    {-1, -2}
};

int main(){
    int case_num;
    cin >>case_num;
    for(int i = 0 ; i < case_num; i++){
        int board_size;
        int knight_location_x, knight_location_y;
        int goal_x, goal_y;

        cin>>board_size;
        cin>>knight_location_x>>knight_location_y;
        cin>>goal_x>>goal_y;

        vector<vector<int> > knight(board_size, vector<int>(board_size, -1));
        vector<vector<bool> > visited(board_size, vector<bool>(board_size, false));
        queue<pair<int, int> >queue;

        queue.push(pair<int, int>(knight_location_x, knight_location_y));
        visited[knight_location_x][knight_location_y] = true;
        knight[knight_location_x][knight_location_y] = 0;
        
        while(!queue.empty()){
           int x= queue.front().first;
           int y= queue.front().second;
           queue.pop();

           if(x == goal_x && y == goal_y){
               cout << knight[x][y] << endl;
           }

           for(int j = 0 ; j < 8; j++){
               int vsted_knight_lo_x = x+knight_move[j][0];
               int vsted_knight_lo_y = y+knight_move[j][1];

               if (vsted_knight_lo_x>=0 && vsted_knight_lo_x<board_size && vsted_knight_lo_y>=0 && vsted_knight_lo_y<board_size&&!visited[vsted_knight_lo_x][vsted_knight_lo_y]){
                   queue.push(pair<int, int>(vsted_knight_lo_x,vsted_knight_lo_y));
                   visited[vsted_knight_lo_x][vsted_knight_lo_y] = true;
                   knight[vsted_knight_lo_x][vsted_knight_lo_y] = knight[x][y]+1;
               }
           }
        }
    }
    return 0;
}