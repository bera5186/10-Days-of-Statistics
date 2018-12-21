
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
  int size, temp;
  float mean = 0, median;
  cin >> size;
  vector<int> a(size);

  for (int i = 0; i < size; i++)
  {
    //cin >> temp;
    //a.push_back(temp);
    cin>>a[i];
    mean += a[i];
  }
  mean = mean / size;
  sort(a.begin(), a.end());

  if (size % 2 == 0)
  {
    int num1 = (size / 2) - 1;
    int num2 = num1 + 1;
    cout<<num1<<" "<<num2;
    median = (a[num1] + a[num2]) / 2.0 ;
  }
  else
  {
    median = a[size % 2];
  }
  
  cout<<"\n"<<"mean : "<<mean;
  cout<<"\n"<<"Meadian : ";printf("%.1f", median);
  
  return 0;
}


// 234567