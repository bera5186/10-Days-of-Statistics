
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
  int size, temp, mode;
  float mean = 0, median;
  cin >> size;
  vector<int> a(size);

  for (int i = 0; i < size; i++)
  {
    cin>>a[i];
    mean += a[i];
  }
  mean = mean / size;
  
  sort(a.begin(), a.end());

  if (size % 2 == 0)
  {
    int num1 = (size / 2) - 1;
    int num2 = num1 + 1;
    median = (a[num1] + a[num2]) / 2.0 ;
  }
  else
  {
    median = a[size % 2];
  }

  int max = *max_element(a.begin(), a.end());
  vector<int>freq(max+1, 0);
  for(int i=0;i<size;i++){
    freq[a[i]]++;
  }
  
  mode = 0;
  temp = freq[0];
  for (int i=1; i<max; i++){
    if(freq[i] > temp){
        temp = freq[i];
        mode = i;
    }
  }

  cout<<mean<<"\n";
  printf("%.1f\n", median);
  cout<<mode<<"\n";
  
  return 0;
}


// 234567