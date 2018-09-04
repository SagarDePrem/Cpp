#include<bits/stdc++.h>
std::ifstream f("data.in");
std::ofstream g("data.out");
int A[100];
int main()
{
int n;
f>>n;
for(int i=0;i<n;i++)
{
   int x;
   f>>x;
   ++A[x];
}
for(int i=0;i<n;i++)
    g << A[i] << " ";
}
