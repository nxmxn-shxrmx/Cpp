#include <bits/stdc++.h>
using namespace std;

const int M = 8;

// function to find max product
int maxProduct(int nums[][M], int M)
{
  int max = 0, ans;
  for (int j = 0; j < M; j++)
  {
    for (int k = 0; k < M; k++)
    {


      // check for maximum product
      // in a row.
      if ((k - 3) >= 0)
      {
        ans = nums[j][k] * nums[j][k - 1] *
              nums[j][k - 2] * nums[j][k - 3];

        if (max < ans)
          max = ans;
      }

      // check for maximum product
      // in a column.
      if ((j - 3) >= 0)
      {
        ans = nums[j][k] * nums[j - 1][k] *
              nums[j - 2][k] * nums[j - 3][k];


        if (max < ans)
          max = ans;
      }


      // check the maximum product in
      // diagonal
      if ((j - 3) >= 0 && (k - 3) >= 0)
      {
        ans = nums[j][k] * nums[j - 1][k - 1] *
              nums[j - 2][k - 2] * nums[j - 3][k - 3];


        if (max < ans)
          max = ans;
      }

      // check for maximum product in
      // anti-diagonal
      if ((j - 3) >= 0 && (k - 1) <= 0)
      {
        ans = nums[j][k] * nums[j - 1][k + 1] *
              nums[j - 2][k + 2] * nums[j - 3][k + 3];

        if (max < ans)
          max = ans;
      }
    }
  }

  return max;
}


// Driver code
int main()
{
  int arr[][8] = {{1, 5, 4, 3, 2},
                  {9, 8, 7, 6, 1},
                  {1, 2, 3, 1, 4},
                  {4, 6, 0, 1, 0},
                  {0, 1, 3, 6, 7}};
  cout << "The given input array is: "<<endl;
  for (size_t i = 0; i < 8; i++)
  {
    for (size_t j = 0; j < 8; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << "The maximum product is: " << maxProduct(arr, M);
  return 0;
}
