//
//  main.cpp
//  cpppractice
//
//  Created by Aniket Kumar on 18/12/19.
//  Copyright © 2019 Aniket Kumar. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    // insert code here...
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8);

    vector<int>::iterator it;

    for(vector<int>::iterator itr = vec.begin(); itr!=vec.end(); ++itr)
        cout<<*itr<<" ";
    cout<<"\n"<<"++++++++++"<<endl;

    for(int it: vec)
        cout<<it<<" ";
    cout<<endl;
    
    cout<<"Size of vector: "<<vec.size()<<endl;
    
    vector<int> vec2(vec);
    cout<<"This is copy vector"<<endl;
    for(int it2:vec2)
        cout<<it2<<" ";
    cout<<endl;
    vec.clear();
    cout<<"Vec size: "<<vec.size()<<endl;
    vec2.swap(vec);

    cout<<"After swap"<<endl;
    for(int it: vec)
        cout<<it<<" ";

    
    return 0;
}
