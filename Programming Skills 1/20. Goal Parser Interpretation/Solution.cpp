class Solution {
public:
    string interpret(string command) {
        int sz=command.size();
        string z="";
        for(int i=0;i<sz;i++)
        {
            if(command[i]=='(' && command[i+1]==')')
            {
                z+='o';
                i++;
            }
            else
            {
                if(command[i]!='(' && command[i]!=')')
                {
                    z+=command[i];
                }
            }
        }
        return z;
    }
};