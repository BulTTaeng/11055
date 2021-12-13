#include <iostream>
#include <vector>

using namespace std;

int dp[1001];
vector<int> num;

int main() {
  int N , input;
  cin >> N;

  for(int i =0; i<N; i++){
    cin >> input;
    num.push_back(input);
  }

  dp[0] = num[0]; 
  int temp;

  for(int i =1; i<N; i++){
    dp[i] = num[i];
    for(int j = 0; j<i; j++){
      
      if(num[j] < num[i]){
        temp = dp[j] + num[i];
        if(temp > dp[i]){
          dp[i] = temp;
        }
      }

    } //end j
  }//end i

  int ans = 0;

  for(int i =0; i<N; i++){
    if(ans < dp[i]){
      ans = dp[i];
    }
  }
  cout << ans;
  return 0;
}