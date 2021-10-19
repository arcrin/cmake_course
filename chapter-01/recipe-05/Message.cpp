//
// Created by wbai on 10/19/2021.
//
#include "Message.h"

#include <iostream>
#include <string>

std::ostream &Message::printObject(std::ostream &os) {
    os << "This is a message" << std::endl;
    os << message_;
    return os;
}
