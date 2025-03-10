#include <bits/stdc++.h>
using namespace std;

pair<int, int> findTwoSum(int a[], int n, int target) {
    sort(a, a + n); // Sorting the array for the two-pointer approach
    int l = 0, r = n - 1;
    
    while (l < r) {
        int sum = a[l] + a[r];
        
        if (sum == target) {
            return {a[l], a[r]}; // Return the actual numbers that sum up to target
        } 
        else if (sum < target) {
            l++;
        } 
        else {
            r--;
        }
    }
    
    return {-1, -1}; // Return -1, -1 if no such pair exists
}

int main() {
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int target;
    cin >> target; // Taking target input from the user
    
    pair<int, int> result = findTwoSum(a, n, target);
    
    if (result.first == -1)
        cout << "No pair found\n";
    else
        cout << "Pair found: " << result.first << " " << result.second << endl;
    
    return 0;
}

// time complexity: O(nlogn) due to sorting else O(n) if array is already sorted


// logic

// pair<int, int> findTwoSum(int a[], int n, int target) {
//     sort(a, a + n); // Sorting the array for the two-pointer approach
//     int l = 0, r = n - 1; 
//     while (l < r) {
//         int sum = a[l] + a[r];       
//         if (sum == target) {
//             return {a[l], a[r]}; // Return the actual numbers that sum up to target
//         } 
//         else if (sum < target) {
//             l++;
//         } 
//         else {
//             r--;
//         }
//     }