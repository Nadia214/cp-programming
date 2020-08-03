#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    auto it = ls.end();
    auto mt = ls.end();

    int Q;
    scanf("%d", &Q);

    while(Q--)
    {
        int cmd, x;
        scanf("%d", &cmd);
        if(cmd == 0)
        {
            scanf("%d", &x);
            ls.insert(it, x);
            advance(it, -1);
        }
        if(cmd == 1)
        {
            scanf("%d", &x);
            advance(it, x);
        }
        else if(cmd == 2)
        {
            mt = it;
            advance(it, 1);
            ls.erase(mt);
        }

    }
    for(auto v : ls)
    {
        printf("%d\n", v);
    }

    return 0;
}
