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

const int MAX = 2e5;

using namespace std;

int main() {
  int n,instance=0;
  while (si(n) != EOF){
    instance ++;
    vector<int> numbers;
    int num,res = false,sum = 0,ans;
    lp(0,n){
      cin >> num;
      numbers.pb(num);
    }

    lp(0,n){
      if(numbers[i] == sum){
        ans = numbers[i];
        cout << "Instancia " << instance << endl << ans << endl << endl;
        res = true;
        break;
      }
      sum += numbers[i];
    }
    if(res == false){
      cout << "Instancia " << instance << endl << "nao achei" << endl << endl;
    }
  }
}