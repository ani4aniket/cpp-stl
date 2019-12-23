//
//  
//  cpppractice
//
//  Created by Aniket Kumar on 18/12/19.
//  Copyright © 2019 Aniket Kumar. All rights reserved.
//

#include <map>
#include <iostream>

using namespace std;
int main()
{
    map<char, int> mymap;
    mymap.insert(pair<char, int>('a', 100));
    mymap.insert(make_pair('z', 200));
    
    map<char, int>::iterator it = mymap.begin();
    mymap.insert(it, pair<char,int>('b', 300));
    mymap.insert(make_pair('t', 200));
    mymap.insert(make_pair('t', 900)); //will not be inserted
    mymap.insert(make_pair('x', 00));
    it = mymap.find('z'); //O(log(n))
    
    //showing contents
    cout<<"Map elements"<<endl;
    for(it=mymap.begin(); it != mymap.end(); it++)
        cout<<(*it).first<<" => "<<(*it).second<<endl;
    
    cout<<endl;
    
    multimap<char, int> mltmap;
    mltmap.insert(make_pair('h', 2000));
    mltmap.insert(make_pair('a', 3000));
    mltmap.insert(make_pair('a', 3000));
    mltmap.insert(make_pair('c', 2000));
    mltmap.insert(make_pair('a', 2000));
    
    cout<<"MultiMap elements"<<endl;
    for(it=mltmap.begin(); it != mltmap.end(); it++)
        cout<<(*it).first<<" => "<<(*it).second<<endl;
    
    cout<<endl;
    
    
    return 0;
}
