#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the flatlandSpaceStations function below.
int flatlandSpaceStations(int n, vector<int> arr)
{
    std::sort(arr.begin(), arr.end());
    int maxDistance = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        int distance = (arr[i] - arr[i-1]) / 2;
        if (maxDistance < distance)
        {
            maxDistance = distance;
        }
    }

    int lastGap = (n-1) - arr[arr.size() - 1];

    return (maxDistance < lastGap) ? lastGap : maxDistance;
}
