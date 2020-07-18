/*First line contains number of marbles(N) and target (target_number) that was assigned to NinjaCoder. Second line contains N space separated integers, which represent arrangement of the marbles and value written on that particular marble.
Value on the marbles lies in the range [0, 1000].
Output Format :
You have to print “true”, if the NinjaCoder wins with the given arrangement and you have to print the values of the continuous subsets. If there are more that one continuous subsets, then you have to print the values of first continuous subset. If the Ninjas coder is unable to win, you just have to print “false”.
Sample Input 1 :
10 10
9 1 2 3 4 5 5 16 17 19
Sample Output 1 :
true
9 1*/
#include<bits/stdc++.h>
using namespace std;

int find_target(int n, int t, int ar[])
{
    int sum=0,i,j;
    for(i=0;i<n;i++)
    {
        sum=ar[i];
        for(j=i+1;j<=n;j++)
        {
            if(sum==t)
            {
                if(j==n && i==n-1)
                {
                    cout<<"true"<<endl<<ar[j-1];
                    return 1;
                }
                else
                {
                    cout<<"true"<<endl;
                    for(int k=i;k<=j-1;k++)
                        cout<<ar[k]<<" ";
                return 1;
                }
            }
            if(sum>t || j==n)
                break;
             sum+=ar[j];
        }
    }

  cout<<"false";
    return 0;
}

int main() {

int n,target;
    cin>>n>>target;
int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
find_target(n,target,ar);
    return 0;
}
