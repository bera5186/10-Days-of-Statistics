#include <unordered_map>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    unordered_map<int, int> table;
    table[1] = 0;
    table[2] = 45;
    cout<<"\n";
    for(auto x: table){
        cout<<x.first<<" "<<x.second<<"\n";
    }
    
    return 0;
}