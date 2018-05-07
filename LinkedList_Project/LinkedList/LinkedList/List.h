//
//  List.hpp
//  LinkedList
//
//  Created by Zizhen Chen on 4/26/17.
//  Copyright © 2017 Zizhen Chen. All rights reserved.
//

#pragma once
#include "Node.h"

class List
{
    shared_ptr<Node> head{};//only attribute
public:
    List(const char* str=nullptr);
    unsigned size() const;
    bool isEmpty() const;
    char get(unsigned index) const;
    void clear();
    void add(char datum);//add new datum to the tail
    void insert(unsigned index, char datum);//add new datum to the index location
    void remove(unsigned index);//remove the datum of passed index
};
