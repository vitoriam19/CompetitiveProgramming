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
  int q,d,p;

  while(1){
    cin >> q;
    if(q== 0 ){
      break;
    }
    else{
      cin >> d >> p;
      double days = (double)(-(d*p))/(q-p);
      int pages = days*q;

      if(pages==1){
        cout << pages << " pagina";
      }else{
        cout << pages << " paginas";
      }

    }
    cout << endl;
  }
  return 0;
}