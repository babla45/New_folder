//2d array traversal using nested for loop
#include<iostream>
using namespace std;

#define nll cout<<"\n";
#define p(x) cout<<x<<"\n";

void solve()
{
    int r=10;
    int c=10;
    int s[r][c];
    
    for(int a=0; a<r; a++)
    for(int b=0; b<c; b++)
    s[a][b]=c*a+b+1;
    
    p("original array: ")
    for(int a=0; a<r; a++)
    {
        for(int b=0; b<c; b++)
        {
            cout<<s[a][b]<<" ";
        }
        nll
    }
    
    ////////////
    nll nll
    p("column corner 1:")
    for(int a=0; a<c; a++)
    {
        for(int b=0; b<r; b++)
        {
            cout<<s[b][a]<<" ";
        }
        nll
    }
    nll nll
    
    
    /////////////
    p("column corner=2:")
    for(int a=c-1; a>=0; a--)
    {
        for(int b=0; b<r; b++)
        {
            cout<<s[b][a]<<" ";
        }
        nll
    }
    nll nll
    
    
    /////////////
    p("column corner=3:")
    for(int a=0; a<c; a++)
    {
        for(int b=r-1; b>=0; b--)
        {
            cout<<s[b][a]<<" ";
        }
        nll
    }
    nll nll
    
    
    /////////////
    p("column corner=4:")
    for(int a=c-1; a>=0; a--)
    {
        for(int b=r-1; b>=0; b--)
        {
            cout<<s[b][a]<<" ";
        }
        nll
    }
    
        
    
    //ROW......ROW.....ROW    
    
      
    ////////////
    nll nll
    p("row corner 1:")
    for(int a=0; a<r; a++)
    {
        for(int b=0; b<c; b++)
        {
            cout<<s[a][b]<<" ";
        }
        nll
    }
    nll nll
    
    
    /////////////
    p("row corner=2:")
    for(int a=0; a<r; a++)
    {
        for(int b=c-1; b>=0; b--)
        {
            cout<<s[a][b]<<" ";
        }
        nll
    }
    nll nll
    
    
    /////////////
    p("row corner=3:")
    for(int a=r-1; a>=0; a--)
    {
        for(int b=0; b<c; b++)
        {
            cout<<s[a][b]<<" ";
        }
        nll
    }
    nll nll
    
    
    /////////////
    p("row corner=4:")
    for(int a=r-1; a>=0; a--)
    {
        for(int b=c-1; b>=0; b--)
        {
            cout<<s[a][b]<<" ";
        }
        nll
    }
}
int main()
{
    solve();
    return 0;
}
