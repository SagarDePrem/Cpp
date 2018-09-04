#include<iostream>
#include<fstream>
std::ifstream f("data.in");         // input file
std::ofstream g("data.out");        // output file
int A[100];         //empty appearance counter of all numbers
int main()
{
    int n;
    f>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        f>>x;       // reads data file by each number2
        ++A[x];     // increment appearance count of that number
    }
    g << "Appearance array : ";
    for(int i=0;i<n;i++)
        g << A[i] << " ";
    g << "\n";
    g << "Counting sorted array : ";
    for (int i=0; i<n;i++)
        for (int j=1; j<=A[i];j++)
            g << i << " ";      // simply prints out the numbers using appearance arrays
}
