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
//#define int long long 

const int MAX = 2e5;

using namespace std;

int main(){
  int n, lamp1=0, lamp2=0;
  cin >> n;
  int inter;
  lp(0,n){
    cin >> inter;
    if(inter == 1){
      lamp1 = !lamp1;
    }else{
      lamp1 = !lamp1;
      lamp2 = !lamp2;
    }
  }
  cout << lamp1 << endl << lamp2 << endl;
}