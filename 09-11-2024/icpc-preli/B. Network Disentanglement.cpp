/*
    Author: Tajwar Saiyeed
    Date: 2024-11-09 15:40:45
    File: B. Network Disentanglement.cpp

    B. Network Disentanglement
CPU: 3.00s

Memory: 2048MB

Though Maryland is a remote area, luckily there are broadband internet connection services. Maryland is presented as a
 geometric plane, where there exist
 routers and
 wire connections (straight line segments) that link pairs of routers located on the
 plane. There are only two internet service providers,
 and
. As these connections are placed on a
 geometric plane, it can happen that any two wires cross or touch each other. As a result, they face problems while providing service when wires of different ISPs cross or touch each other (they can handle when their own wires cross or touch each other). Now, they need your help to solve their problem. Your task is to find the minimum number of wires to remove such that no two wires of different ISPs can cross or touch each other, and you also have to find which wires to remove.

NB: Two wires cross or touch each other when the intersecting point(s) lies on both wires. So it can happen that the two wires lie on the same line. There can be multiple wires between any two routers. There won’t be a wire with both endpoints connected to the same router.

Input Description
The first line will contain
, the number of test cases. Each case will start with two integers
,
, where
 denotes the number of routers and
 represents the number of wire connections in Maryland. Each of the next
 lines will contain two integers:
 and
, denoting the location of the
 router. No two routers are situated in the same place. Each of the next
 lines will contain three integers:
,
, and
, where
, denoting the
 wire link between routers
 and
 in the
 plane, and
 denotes whose wire it is
 for
 for
.

Output Description
For each case, you need to print “Case #T:” in the first line (without quotes), where
 is the test case number. The second line contains an integer denoting the minimum number of wires to remove such that no two wires of different ISPs can cross or touch each other. The third line of each case contains space-separated wire link numbers (1-based) to remove. The third line will be an empty line if you don’t have to remove a wire link.

Samples
Input

2
4 2
-1 -1
-1 1
1 -1
1 1
1 2 1
3 4 1
6 3
-2 0
2 0
-1 -1
-1 1
1 -1
1 1
1 2 1
3 4 2
5 6 2
*/

#include <bits/stdc++.h>
using namespace std;

struct Wire
{
    int u, v, isp;
};

// Function to calculate orientation of ordered triplet (p, q, r)
// 0 -> p, q and r are collinear
// 1 -> Clockwise
// 2 -> Counterclockwise
int orientation(pair<int, int> p, pair<int, int> q, pair<int, int> r)
{
    int val = (q.second - p.second) * (r.first - q.first) - (q.first - p.first) * (r.second - q.second);
    if (val == 0)
        return 0;             // collinear
    return (val > 0) ? 1 : 2; // clock or counterclock wise
}

// Function to check if point q lies on line segment pr
bool onSegment(pair<int, int> p, pair<int, int> q, pair<int, int> r)
{
    return (q.first <= max(p.first, r.first) && q.first >= min(p.first, r.first) &&
            q.second <= max(p.second, r.second) && q.second >= min(p.second, r.second));
}

// Function to check if line segments (p1, q1) and (p2, q2) intersect
bool doIntersect(pair<int, int> p1, pair<int, int> q1, pair<int, int> p2, pair<int, int> q2)
{
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    // General case
    if (o1 != o2 && o3 != o4)
        return true;

    // Special cases
    if (o1 == 0 && onSegment(p1, p2, q1))
        return true;
    if (o2 == 0 && onSegment(p1, q2, q1))
        return true;
    if (o3 == 0 && onSegment(p2, p1, q2))
        return true;
    if (o4 == 0 && onSegment(p2, q1, q2))
        return true;

    return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> routers(n);
    vector<Wire> wires(m);

    for (int i = 0; i < n; i++)
    {
        cin >> routers[i].first >> routers[i].second;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> wires[i].u >> wires[i].v >> wires[i].isp;
        wires[i].u--; // Convert to 0-based index
        wires[i].v--; // Convert to 0-based index
    }

    set<int> toRemove;
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (wires[i].isp != wires[j].isp)
            {
                if (doIntersect(routers[wires[i].u], routers[wires[i].v], routers[wires[j].u], routers[wires[j].v]))
                {
                    toRemove.insert(i + 1); // Store 1-based index
                    toRemove.insert(j + 1); // Store 1-based index
                }
            }
        }
    }

    // Output results
    cout << toRemove.size() << '\n';
    for (int wire : toRemove)
    {
        cout << wire << ' ';
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        cout << "Case #" << t << ":\n";
        solve();
    }

    return 0;
}
