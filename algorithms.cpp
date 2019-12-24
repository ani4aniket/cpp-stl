//
//  main.cpp
//  cppstl
//
//  Created by Aniket Kumar on 23/12/19.
//  Copyright © 2019 Aniket Kumar. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isOdd(int i){
    return i%2;
}

int main() {
    vector<int> vec = {4,2,5,1,3,9};
    vector<int> vec2(3);
    vector<int>::iterator itr = min_element(vec.begin(), vec.end());
    
    sort(vec.begin(), itr);
    
    for(auto x:vec)
        cout<<x<<" ";
    
    cout<<endl;
    
    reverse(itr, vec.end());
    
    for(auto x:vec)
    cout<<x<<" ";
    
    copy(itr, vec.end(), //source
         vec2.begin()); // destination //min 3 space required in vector
    
    cout<<endl;
    
    for(auto x:vec2)
    cout<<x<<" ";
    
    vector<int> vec3;
    
    //copy(itr, vec.end(), back_inserter(vec3)); //Not efficient //Inserting instead of overwriting
    
    cout<<endl;
    
    vec3.insert(vec3.end(), itr, vec.end()); // Efficient and safe
    
    for(auto x: vec3)
        cout<<x<<endl;
    
    vector<int>::iterator itrOdd = find_if(vec.begin(), vec.end(), isOdd);
    cout<<"\n"<<*itrOdd<<endl;

    
    
    
    return 0;
}
