//
// Created by wbai on 10/19/2021.
//

#pragma once

#include <iosfwd>
#include <string>

class Message {
public:
    Message(const std::string &m) : message_(m) {}

    friend std::ostream &operator<<(std::ostream &os, Message &obj){
        return obj.printObject(os);
    }
private:
    std::string message_;
    std::ostream &printObject(std::ostream &os);
};