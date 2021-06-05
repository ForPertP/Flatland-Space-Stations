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
    if (maxDistance < lastGap)
    {
        maxDistance = lastGap;
    }
    return maxDistance;
    //return (lastGap < maxDistance) ? maxDistance : lastGap;
}
