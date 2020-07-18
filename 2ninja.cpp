/*The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains a single integer value, 'N' representing the 'rows' and 'columns' for the two-dimensional square matrix.

Second line onwards, the next 'N' lines or rows represent the ith row values.

Each of the ith row constitutes 'N' column values separated by a single space.
Output format:
For each test case, print the single integer denoting the sum.
Sample input 1:
1
3
1 2 3
4 5 6
7 8 9
Sample Output 1:
45
Explanation for Sample Output 1:
The boundary elements are 1, 2, 3, 6, 9, 8, 7 and 4.

The first-diagonal elements are 1, 5 and 9.

The second-diagonal elements are 3, 5 and 7.

We just need to add all these numbers making sure that no number is added twice. For example, '1' is both a boundary element and a first-diagonal element similarly, '5' contributes to both the diagonals but they won't be added twice.

Hence, we add up, [1 + 2 + 3 + 6 + 9 + 8 + 7 + 4 + 5] to give 45 as the output.
Sample input 2:
2
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
4
1 2 3 10
4 5 6 11
7 8 9 12
13 14 15 16
Sample Output 2:
273
136*/
#include<bits/stdc++.h>
using namespace std;
int addarray(int a,int *arr[])
{ int total=0;
    for(int i=0;i<a;i++)
    { cout<<"new row"<<endl;
        arr[i]=new int[a];
        for(int j=0;j<a;j++)
        {
            //cout<<"enter value"<<endl;
            cin>>arr[i][j];
             total= total+arr[i][j];
            }
        }
        cout<<total<<endl;

}
int main()
{
    int n,numberofq,total=0;
    cout<<"Number of Query";
    cin>>numberofq;
    for(int k=0;k<numberofq;k++)
    {
        cout<<"Enter size of array Number"<<k+1;
        cin>>n;
        int **arr=new int *[n];
        addarray(n,arr);
        }

}

