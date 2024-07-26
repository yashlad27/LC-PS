// Initialize variables to track the horizontal and vertical positions of the robot.
// Iterate through the moves and adjust the position variables accordingly.
// After processing all moves, check if the robot is back at the origin (i.e., both position variables are zero).

class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0, y=0;

        for(char move:moves){
            if(move=='U'){
                y++;
            }else if(move=='D'){
                y--;
            }else if(move=='L'){
                x--;
            }else if(move=='R'){
                x++;
            }
        }
        return x==0 && y==0;
    }
};