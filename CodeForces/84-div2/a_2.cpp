#include <bits/stdc++.h>
#define lp(init,var) for(int i=init;i<var;i++)
#define pri(a) printf("%d\n",a)
#define prld(a) printf("%ld\n",a)
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d %d",&a,&b)
#define sl(a) scanf("%lld",&a)
#define sll(a, b) scanf("%lld %lld",&a,&b)
 
#define mp make_pair
#define BUFF ios::sync_with_stdio(false);cin.tie(NULL)
#define pb push_back
#define f first
#define s second
#define INF 0x3f3f3f3f 
#define LINF 0x3f3f3f3f3f3f3f3fl
#define endl '\n'
#define int long long 

const int MAX = 2e5;

using namespace std;

signed main(){
  int n;

  cin >> n;
  int resto,digits=0;
  int restoResult;
  while(n >= 10 ){
    resto = n%10;
    n=n/10;
    if(resto == 1 || resto == 2){
      digits++;
    }
  }
  if(n == 1 || n == 2){
      digits++;
  }
  restoResult = digits%10;
  digits = digits/10;

  if(restoResult == 1 || restoResult==2 ||
   digits==1 | digits==2){
     cout << "YES" << endl;
   }
  else{
    cout << "NO" << endl;
  }
}