//
//  main.cpp
//  cpppractice
//
//  Created by Aniket Kumar on 18/12/19.
//  Copyright © 2019 Aniket Kumar. All rights reserved.
//


// unordered multiset: unordered set that allows duplicated elements
// unordered map: unordered set of pairs
// unordered multimap: unordered map that allows duplicated keys

#include <unordered_set>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    unordered_set<string> myset = {"red", "green", "blue" };
    unordered_set<string>::const_iterator itr = myset.find("green"); // O(1)
    if(itr != myset.end())
        cout<<*itr<<endl;
    myset.insert("yellow"); // O(1)
    
    vector<string> vec = {"purple", "pink"};
    myset.insert(vec.begin(), vec.end());

    cout<<"Unordered set items are:"<<endl;
    for(string x:myset)
        cout<<x<<" ";
    cout<<endl;
    
    // Hash table specific APIs:
    cout<<"load_factor= "<<myset.load_factor()<<endl;
    string x = "red";
    cout<<x<<" is in the bucket #"<<myset.bucket(x)<<endl;
    cout<<"Total bucket #"<<myset.bucket_count()<<endl;
    
    return 0;
}
