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
g << "Appearance array : ";
for(int i=0;i<n;i++)
    g << A[i] << " ";
g << "\n";
g << "Counting sorted array : ";
for (int i=0; i<n;i++)
    for (int j=1; j<=A[i];j++)
        g << i << " ";
}
