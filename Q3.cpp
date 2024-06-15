#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int mat[4][4] = {0,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0};

    int rowIndex = -1;
    int maxCount = 0;
    int m = 3;
    int n = 4;
    for (int i = 0; i < m; i++)
    {
        int lo = 0, hi = n - 1;
        int count = 0;
        int firstOccurence = -1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (mat[i][mid] == 1)
            {
                if (mid == 0 || mat[i][mid - 1] != 1)
                {
                    firstOccurence = mid;
                    break;
                }
                else
                    hi = mid - 1;
            }
            else
                lo = mid + 1;
        }
        if (firstOccurence != -1)
            count = ((n - 1) - firstOccurence + 1);
        if (count > maxCount)
        {
            maxCount = count;
            rowIndex = i;
        }
    }
    cout<<rowIndex;
}