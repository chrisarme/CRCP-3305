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
	shared_ptr<Node> current{ head };
	shared_ptr<Node> previous{ head };
	shared_ptr<Node> temp{ };

	int i = 0;

	// while(ptr->next) also equals if(ptr!=nullptr)
	while (i < index && current->next && index != 0)
	{
		i++;
		previous = current;
		current = current->next;
	}

	if (i > index)
	{
		cerr << "Invalid index!\n";
	}
	else if (index == 0)
	{
		temp = make_shared<Node>(data);
		temp->next = previous;
		head = temp;
	}
	else
	{
		temp = make_shared<Node>(data);
		previous->next = temp;
		temp->next = current;

		// Don't need to directly do head = something because we are using pointers!
	}
}

void List::remove(unsigned index)
{
	shared_ptr<Node> current{ head };
	shared_ptr<Node> previous{ head };

	int i = 0;

	// while(ptr->next) also equals if(ptr!=nullptr)
	while (i < index && current->next && index != 0)
	{
		i++;
		previous = current;
		current = current->next;
	}

	if (i > index)
	{
		cerr << "Invalid index!\n";
	}
	else if (index == 0)
	{
		head = head->next;
	}
	else
	{
		previous->next = current->next;
		current.reset();

		// Don't need to directly do head = something because we are using pointers!
	}
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
