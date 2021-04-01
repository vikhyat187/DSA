#include<bits/stdc++.h>
using namespace std;


    bool isPathCrossing(string path){
        set<pair<int,int>> visited;

        int x = 0,y = 0;
        for (auto  p:path){
            if (p == 'N')y++;
            else if (p == 'S')y--;
            else if (p == 'E')x++;
            else x--;
            if (visited.find({x,y})  != visited.end())return true;
            else visited.insert({x,y});
        }
        return false;


}