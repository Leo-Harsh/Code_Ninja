/*Given an array of integers, print two integer values:
First, the sum of all numbers which are even as well as whose index are even.
Second, the sum of all numbers which are odd as well as whose index are odd.
Print the two integers space separated. (Arrays is 0-indexed)
Input:
Given an integer denoting the size of array.
Next line will have a line containing ‘n’ space separated integers.
Output:
Two space separated integers denoting even and odd sums respectively.
Sample Input:
5
2 3 5 1 4
Sample Output:
6 4*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,addeven=0,addodd=0,i;
    cin>>n;
    int a[n];
    for(i=1;i<n;i++)
    {cin>>a[i];
      if((i%2==0) &&(a[i]%2)==0 )
      {
               addeven= addeven + a[i];
      }

      else if((i%2!=0) &&(a[i]%2)!=0 )
       {
                  addodd= addodd + a[i];
              }
       }

              cout<<addeven<<endl<<addodd;
}




