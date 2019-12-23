//
//  main.cpp
//  cpppractice
//
//  Created by Aniket Kumar on 18/12/19.
//  Copyright © 2019 Aniket Kumar. All rights reserved.
//

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<int> mylist = {5,2,9};
    list<int> mylist1;
    mylist.push_back(6);
    mylist.push_front(4);
    
    list<int>::iterator itr = find(mylist.begin(), mylist.end(), 2);

    mylist.insert(itr, 8); //O(1)
    
    itr++;
    mylist.erase(itr); //O(1)
    
    for(int x:mylist)
        cout<<x<<" ";
    
    list<int>::iterator itr_a = find(mylist.begin(), mylist.end(), 8);
    list<int>::iterator itr_b = mylist.end();
    list<int>::iterator itr_index = mylist1.begin();
    
    
    mylist1.splice(itr_index, mylist, itr_a,itr_b); //O(1)
    
    cout<<"\n"<<"Splice example"<<endl;
    for(int x:mylist1)
        cout<<x<<" ";
    
    
    return 0;
}
