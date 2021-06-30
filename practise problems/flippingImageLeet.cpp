#include<iostream>
#include<vector>
using namespace::std;
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int m = A.size();
        int n = A[0].size();
        int start = 0, end=n-1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n-1;j++)
                {
                    int temp = A[i][start];
                    A[i][start] = A[i][end];
                    A[i][end] = temp;
                    start++;
                    end--;
                }
            }
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            A[i][j] ^= 0x1;
        }
         return A;
        }
}
int main()
{
    vector<vector<int>> A = {{1,1,0},{1,0,1},{0,0,0}};
    vector<vector<int>> result = flipAndInvertImage(A);
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            cout<<A[i][j];
        }
        cout<<endl;
    }

}
