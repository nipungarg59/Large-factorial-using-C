/********   All Required Header Files ********/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
/***pre processors ***/
#define setbits(x) __builtin_popcount(x)
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define TEST int t;cin>>t;while(t--)
const long long int mod = 1e9+7;
typedef  long long int ll;
ll fexpo(ll a,ll b)
{
    if(b==0)
        return 1LL;
    if(b==1)
        return a;
    if(b==2)
      return a*a;
  if(b%2==0)
      return fexpo(fexpo(a,b/2),2);
  else
      return a*fexpo(fexpo(a,(b-1)/2),2);
}
int ar[10101010];
void solve()
{
  int n;
  cin >> n;
  for(int i = 0 ; i < n ;i ++)
  {
    cin >> ar[i];

  }
  sort(ar,ar+n);
  ll ans = ar[n-1];
  for(int i = n-2 ; i>=0 ;i--)
    {
      if(ar[i] > ar[i+1])
      {
        ar[i] = ar[i+1];
      }
      while(ar[i] >=ar[i+1] && ar[i])
      {
        ar[i] --;
      }
      if(ar[i]>=0)
      ans += ar[i];


    }
    cout << ans << endl;




}
int main()
{
   //  pre();
  //TEST
  solve();
}