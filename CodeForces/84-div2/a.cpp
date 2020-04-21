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
  while(n >= 10 ){
    resto = n%10;
    n=n/10;
    if(resto == 4 || resto == 7){
      digits++;
    }
  }
  if(n == 4 || n == 7){
      digits++;
  }
  if(digits==4 || digits==7){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}