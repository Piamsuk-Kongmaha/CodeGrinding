#include <bits/stdc++.h>

using namespace std;

struct st{
    int id;
    int score;
};

bool sortScore(st a, st b)
{
    if(a.score != b.score)
        return a.score > b.score;
    return (a.id < b.id);
}

bool sortID(st a, st b)
{
    return (a.id < b.id);
}

void checkScore(st s[])
{
    sort(s,s+7,sortScore);
    for(int i = 6; i> 0; i--)
    {
        if(s[i].score != -1)
        {
            if(s[i].score < s[i-1].score)
                s[i].score=-1;
            break;
        }
    }
    sort(s,s+7,sortID);
}
int main()
{
    st s[]={{0,0},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0}};
    string str="";
    while (true){
        cin >> str;
        if(str=="!")break;
        for(int i = 0; i < str.size(); i++)
        {
            if(s[str[i]-'A'].score != -1)
                s[str[i]-'A'].score++;
        }
        checkScore(s);
    }

    sort(s,s+7,sortScore);

    int c= 0;
    for(int i = 0; i < 7; i++)
    {
        if(s[i].score != -1)
            c++;
    }
    cout << c << '\n';
    for(int i = 0; i < 7; i++)
    {
        if(s[i].score != -1) {
            cout << (char)(s[i].id+65) << " " << s[i].score << '\n';
        }
    }
}