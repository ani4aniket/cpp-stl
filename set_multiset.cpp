//
//  set.cpp
//  cpppractice
//
//  Created by Aniket Kumar on 18/12/19.
//  Copyright © 2019 Aniket Kumar. All rights reserved.
//

#include <set>
#include <iostream>

using namespace std;
int main()
{
    set<int> myset;
    myset.insert(3);
    myset.insert(1);
    myset.insert(7);
    
    set<int>::iterator it;
    it = myset.find(7); //O(log(n))
    
    pair<set<int>::iterator, bool> ret;
    ret = myset.insert(3);
    if (ret.second == false)
        it=ret.first; //"it" now points to element inserted
    
    myset.insert(it, 9); //O(log(n)) => O(1)
                            // "it" points to 3
    myset.erase(it);
    myset.erase(7);
    cout<<"Set elements: "<<endl;
    for(int x: myset)
        cout<<x<<" ";

    cout<<"\n";
    multiset<int> mltset;
    mltset.insert(5);
    mltset.insert(7);
    mltset.insert(6);
    mltset.insert(7);
    mltset.insert(4);
    
    cout<<"\nMultiset elements:"<<endl;
    
    for(int x: mltset)
        cout<<x<<" ";
    
    
    
    return 0;
}
