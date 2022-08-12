#include "iostream"
#include "cmath"
#include "vector"
#include "cstring"
#include "map"
#include "set"
#include "algorithm"
#include "unordered_map"
#define nl "\n"
#define te cin >> t
#define pb push_back
#define pob pop_back
#define st for(int z=1;z<=t;z++)
#define ll long long int
#define pi 2*acos(0.0)
#define llu long long unsigned int
#define vect(type1,name) vector<type1>name
#define full(x) x.begin(),x.end()
#define amx = *max_element(arr,arr+n);
#define amn = *min_element(arr,arr+n);
#define gcd(x,y) (ll)(__gcd(x,y))
#define lcm(x,y) (ll)((x/gcd(x,y))*y)
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

typedef pair<ll,ll>pr;
typedef vector<char>vc;
typedef vector<ll>vi;
typedef vector<string>vs;
typedef map<ll,ll>mp;
typedef map<string,ll>mps;
typedef set<ll>ss;
typedef multiset<ll>mst;
typedef unordered_map<ll,ll>ump;
typedef unordered_map<string,ll>umps;

void hello(){

   ll n,k;
   cin >> n >> k;
   ll arr[n];
   for(ll i=0;i<n;i++)
   cin >> arr[i];
   ll sm1 = 0,sm2 = 0;
   for(ll i=0;i<n;i++){
   if(arr[i]%k)
   sm1 += arr[i];
   else
   sm2 += arr[i]/k;
   }
   ll ans1 = 0;
   if(sm1%k)
   ans1 = sm1/k+1+sm2;
   else
   ans1 = sm1/k+sm2;
   ll ans2 = 0;
   for(ll i=0;i<n;i++){
   if(arr[i]%k)
   ans2 += arr[i]/k+1;
   else
   ans2 += arr[i]/k;
   }
   cout << ans1<<" "<<ans2 << nl;

}

int main(){

   FIO
   ll t;
   te;st
   hello();
   return 0;
}
