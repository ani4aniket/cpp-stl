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

int main() {
    
    // 1. Insert Iterator
    
    vector<int> vec1={4,5};
    vector<int> vec2={12,14,16,18};
    vector<int>::iterator it= find(vec2.begin(), vec2.end(), 16);
    insert_iterator< vector<int> > i_itr(vec2, it);
    copy(vec1.begin(), vec1.end(), i_itr);
    // Other insert iterators: back_insert_iterator, front_insert_iterator
    for(auto x: vec2)
        cout<<x<<" ";
    
    // 2. Stream Iterator
        //istream_iterator, ostream_iterator
    
    // 3. Reverse Iterator
    cout<<endl;
    reverse_iterator<vector<int>::iterator> ritr;
    for(ritr = vec2.rbegin(); ritr!=vec2.rend(); ritr++)
        cout<<*ritr<<" ";
    
    return 0;
}
