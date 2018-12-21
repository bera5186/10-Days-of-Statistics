
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm
6 using namespace std;

8 using namespace std;
9 int main()
10 int mean = 0, size, temp, median;
cin>>size;
vector int>a(size);

for(int i=0;i<size; i++)
cin>>temp;
a. push_back (temp);
mean += temp;

mean = mean 2;
sort(a.begin(), a.end());
if(size 2 == 0)
int numl = size/2;
int num2 = numl + 1;
median = a[num] + a[num2])/2;
else{
medium = a[size % 2];

}

return 0;
