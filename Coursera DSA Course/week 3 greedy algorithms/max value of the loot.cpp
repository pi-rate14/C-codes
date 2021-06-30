#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace:: std;

int maxLoot(vector<int> valuesAndWeights, int nOfItems, int wOfSack){
    vector<int> ratio(nOfItems);
    for(int i=0; i<nOfItems; i++){
        ratio[i] = values[i]/weights[i+1];
    }
    int maxRatio = *max_element (ratio[0], ratio.end());
}

int main(){
    int nOfItems, wOfSack;
    cin >> nOfItems;
    cin >> wOfSack;
    vector<int> valueAndWeights(nOfItems*2);
    //vector<int> weights(nOfItems);
    for(int i=0;i<nOfItems*2; i=i+2){
        cin >> valueAndWeights[i];
        cin >> valueAndWeights[i+1];
    }

        //cout<< valueAndWeights[i+1];

    //maxLoot(values, weights, nOfItems, wOfSack);
}
