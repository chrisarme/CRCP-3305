//
//  main.cpp
//  LinkedList
//
//  Created by Zizhen Chen on 4/26/17.
//  Copyright © 2017 Zizhen Chen. All rights reserved.
//

#include <iostream>
#include "List.h"

using std::ostream;
using std::cout;
using std::endl;

ostream & operator << (ostream &out, const List &str)//insertion operator overloading to support I/O operation
{
    for(unsigned i{};i!=str.size();i++)
        out<<str.get(i);
    return out;
}

int main()
{
    // insert code here...
    cout<<"Empty test: ";
    List emptyString;

    cout<<emptyString.isEmpty()<<endl;
    cout<<"Size test: "<<"Empty String=";
    cout<<emptyString.size()<<", \"abcd\"=";

    List str{"abcd"};

    cout<<str.size()<<endl;

    cout<<"Insert test: ";
    str.insert(2, 'x');
    cout<<str<<endl;

    cout<<"Remove test: ";
    str.remove(0);
    cout<<str<<endl;

	system("PAUSE");
}

