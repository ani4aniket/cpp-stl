//
//  main.cpp
//  cpppractice
//
//  Created by Aniket Kumar on 18/12/19.
//  Copyright © 2019 Aniket Kumar. All rights reserved.
//


#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    unordered_map<char, string> day = {{'S', "Sunday"}, {'M', "Monday"}};
    cout<< day['S']<<endl; // No range check
    cout<< day.at('S')<<endl; // Has range check
    
    day['W'] = "Wednesday";
    day.insert(make_pair('F', "Friday"));
    
    // day.insert(make_pair('M', "MONDAY")); //Fail to modify, it's an unordered_map
    day['M'] = "MONDAY";
    
    unordered_map<char, string>::iterator it;
    for(it=day.begin(); it!=day.end(); it++)
        cout<<(*it).first<<" => "<<(*it).second<<endl;
    

    return 0;
}

