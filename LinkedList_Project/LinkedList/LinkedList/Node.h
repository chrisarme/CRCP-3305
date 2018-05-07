//
//  Node.hpp
//  LinkedList
//
//  Created by Zizhen Chen on 4/26/17.
//  Copyright © 2017 Zizhen Chen. All rights reserved.
//

#pragma once
#include <memory>
using std::shared_ptr;

class Node
{
    friend class List;
    char datum{};
    shared_ptr<Node> next;
public:
    Node(char datum);
};
