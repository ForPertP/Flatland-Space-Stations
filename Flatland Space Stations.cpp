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


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    string c_temp_temp;
    getline(cin, c_temp_temp);

    vector<string> c_temp = split_string(c_temp_temp);

    vector<int> c(m);

    for (int i = 0; i < m; i++) {
        int c_item = stoi(c_temp[i]);

        c[i] = c_item;
    }

    int result = flatlandSpaceStations(n, c);

    fout << result << "\n";

    fout.close();

    return 0;
}
