//
//  main.cpp
//  cppstl
//
//  Created by Aniket Kumar on 23/12/19.
//  Copyright © 2019 Aniket Kumar. All rights reserved.
//

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    set<int>::iterator itr;
    set<int>::const_iterator citr;
    
    set<int> myset = {2,4,5,1,9};
    auto print = [](const int& n) { cout << " " << n; };
//    for (citr=myset.begin(); citr!=myset.end(); ++citr) {
//        cout<<*citr<<endl;
//    }
    
    
    for_each(myset.cbegin(), myset.cend(), print);
    cout<<endl;
    // advance(itr, 5); // Move itr forward 5 spots
    
    // cout<<distance(itr1, itr2); // Measure the distance between two iterators
    return 0;
}
