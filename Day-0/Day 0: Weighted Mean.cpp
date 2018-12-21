#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

int main(){
    int size;
    float sum = 0.0, prod =0.0;
    cin>>size;
    vector<int>values(size);
    vector<int>weights(size);

    for(int i=0;i<size; i++){
        cin>>values[i];
    }
    for(int i=0;i<size; i++){
        cin>>weights[i];
        sum += weights[i];
    }

    assert(values.size() == weights.size());

    for(int i=0;i<size;i++){
        prod += weights[i]*values[i];
    }
    printf("%.1f", prod/sum);
    return 0;
}