//
// Created by yuxi on 19-1-13.
//

/*
 *
 * 《信息学竞赛一本通－提高版》全部ＡＣ解答及解释
 *
 * 第一部分　基础算法
 * 第一章　贪心算法
 * 例题１　活动安排
 *
 */

#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

struct node{
  int st;
  int ed;
}a[1005];

bool Cmp(node x, node y){
  return x.ed < y.ed;
}

int ActivityArrangement(node* a, int n){
  sort(a, a+n+1, Cmp);
  int t = a[1].ed;
  int ans = 1;
  for(int i=2; i<=n; i++) {
    if (a[i].st >= t) {
      ans++;
      t = a[i].ed;
    }
  }
  return ans;
}


int main(){
  // open filestream
//  fstream inFile;
//  string FilePath = "/home/yuxi/Work/githubrepo/myrepo/YiBenTong/Section1Chapter1_GreedyAlgorithm/data/example1.in";
//  inFile.open(FilePath);

  int n;
  cin >> n;
//  inFile >> n;
  for(int i=0; i<=n; i++)
    cin >> a[i].st >> a[i].ed ;
//    inFile >> a[i].st >> a[i].ed ;
  int ans = ActivityArrangement(a, n);
  cout << ans << endl;
  return 0;
}