#include <bits/stdc++.h>
using namespace std;
/*
    Time Complexity = O(N^2)
    Space Complexity = O(log(N))
    
    Where N is the number of elements in the given array/list.
*/

//    check if a distance of x is possible b/w each cow
bool check(int x, int k, vector<int> &stalls)
{
    //    Greedy approach, put each cow in the first place you can.
    int cowsPlaced = 1, lastPos = stalls[0];

    int n = stalls.size();

    for (int i = 1; i < n; i++)
    {
        if ((stalls[i] - lastPos) >= x)
        {
            cowsPlaced = cowsPlaced + 1;
            if (cowsPlaced == k)
            {
                return true;
            }

            //    Assign current position of stall as the lastPos.
            lastPos = stalls[i];
        }
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int pos = 0;

    //    Iterate through all the stalls and try to find out the largest minimum distance.
    for (int i = 0; i < 1000000000; i++)
    {
        if (check(i, k, stalls))
        {
            pos = i;
        }
        else
        {
            //    Break as soon as it is no more possible to extend the minimum distance.
            break;
        }
    }

    return pos;
}

