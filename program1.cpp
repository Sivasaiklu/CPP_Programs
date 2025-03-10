// sliding window - maximum sum of subarray of size n and window size w

#include <bits/stdc++.h>
using namespace std;

int calMaxSum(int a[], int n, int w)
{
    int s = 0, maxVal = 0;
    for (int i = 0; i < w; i++)
    {
        s += a[i];
    }
    int maxVal = s;
    for (int i = 1; i <= n - w; i++)
    {
        s = s - a[i - 1] + a[i + w - 1];
        maxVal = max(maxVal, s);
    }
    return maxVal;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int w = 4; // window size
    cout << calMaxSum(a, n, w) << endl;
    return 0;
}

// time complexity: O(n)

// logic 

// int s = 0, maxVal = 0;
//     for (int i = 0; i < w; i++)
//     {
//         s += a[i];
//     }
//     int maxVal = s;
//     for (int i = 1; i <= n - w; i++)
//     {
//         s = s - a[i - 1] + a[i + w - 1];
//         maxVal = max(maxVal, s);
//     }
//     return maxVal;