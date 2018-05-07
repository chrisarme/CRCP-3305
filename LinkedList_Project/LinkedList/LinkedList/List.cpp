//
//  List.cpp
//  LinkedList
//
//  Created by Zizhen Chen on 4/26/17.
//  Copyright © 2017 Zizhen Chen. All rights reserved.
//

#include "List.h"
#include <iostream>
#include <cstdlib>
using std::make_shared;
using std::cerr;

void List::insert(unsigned index, char data)
{
    //Please Complete this code...
}

void List::remove(unsigned index)
{
	shared_ptr<Node> ptr{ head };
	unsigned i{};
	while (i < index && ptr->next)
	{
		i++;
		ptr = ptr->next;
	}

	if (i < index)
	{
		cerr << "Invalid index!\n";
		//return '\0';
	}
	else
	{
		
	}

	//return ptr->datum;
}

List::List(const char* str)
{
    if(str)
    {
        unsigned long len{strlen(str)};
		for (unsigned long i{}; i != len; i++)
		{
			add(str[i]);
		}
    }
}

unsigned List::size() const
{
    shared_ptr<Node> ptr{head};
    unsigned length{};

    while(ptr)
    {
        length++;
        ptr=ptr->next;
    }

    return length;
}

bool List::isEmpty() const
{
    return !head;
}

void List::clear()
{
    head=nullptr;
    //head.reset();//This is same as head=nullptr;
}

void List::add(char datum)
{
    if(head)
    {
        shared_ptr<Node> ptr{head};
		while (ptr->next)
		{
			ptr = ptr->next;
		}
        ptr->next=make_shared<Node>(datum);
    }
	else
	{
		head = make_shared<Node>(datum);
	}
}

char List::get(unsigned index) const
{
    shared_ptr<Node> ptr{head};
    unsigned i{};
	while (i < index&&ptr->next)
	{
		i++;
		ptr = ptr->next;
	}

	if (i < index)
	{
		cerr << "Invalid index!\n";
		return '\0';
	}

    return ptr->datum;
}
