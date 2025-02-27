#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c,s;
    cin >> c >> s;
    unordered_map<int,int> classes;
    for(int i =0; i < s; i++)
    {
        int room, id;
        cin >> room >> id;
        classes[id] = room;
    }

    queue<int> student;
    queue<int> studentroom[11];
    while(true)
    {
        char cmd;
        cin >> cmd;
        if(cmd == 'X') break;
        else if (cmd == 'E')
        {
            int id ,room;
            cin >> id;
            room = classes[id];
            if(studentroom[room].empty()) student.push(room);
            studentroom[room].push(id);
        }
        else if (cmd == 'D')
        {
            if(!studentroom[student.front()].empty())
            {
                cout << studentroom[student.front()].front() << '\n';
                studentroom[student.front()].pop();
                if(studentroom[student.front()].empty())
                {
                    student.pop();
                }
            }else cout << "empty" << '\n';
        }
    }
    cout << "0";  
}