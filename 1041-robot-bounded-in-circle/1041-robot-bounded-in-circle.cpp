class Solution {
public:
    bool isRobotBounded(string s) {
        vector pos = {0, 0}, dir = {0, 1};
        
        for (size_t i = 0; i < s.length(); i++)
        {
            switch(s[i])
            {
                case 'L':
                    dir = {-dir[1], dir[0]};
                    break;
                case 'R':
                    dir = {dir[1], -dir[0]};
                    break;
                default:
                    pos = {pos[0] + dir[0], pos[1] + dir[1]};
            }
        }
        return  (pos[0] == 0 && pos[1] == 0) || (dir[0] != 0 || dir[1] != 1) ? true : false;
    }
};