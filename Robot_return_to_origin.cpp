class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        for(int i = 0 ; i<moves.size();i++)
        {
            if(moves[i]=='U')
            y++;
            if(moves[i]=='R')
            x++;
            if(moves[i]=='L')
            x--;
            if(moves[i]=='D')
            y--;
        }
        if(x==0 && y == 0 )
        {
            return true;
        }
        return false;
    }
};

// tc -->O(n)
// sc -->O(1)


// ------------ Appraoch 2 : using switch statement:------------
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        for(int i = 0 ; i<moves.size();i++)
        {
            switch(moves[i]){
                case 'U':
                y++;
                break;
                case 'R':
                x++;
                break;
                case 'L':
                x--;
                break;
                case 'D':
                y--;
            }
        }
        if(x==0 && y == 0 )
        {
            return true;
        }
        return false;
    }
};

// tc -->O(n)
// sc -->O(1)
