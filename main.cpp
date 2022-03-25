// Copyright (C) 2017 GPL 3 and higher by Ingo Höft,  <Ingo@Hoeft-online.de>
// Redistribution only with this Copyright remark. Last modified: 2022-01-25

#include <string>
#include <string_view>
#include <iostream>

int main() {

    std::string myString{"hello world"};
    // Using iterator on string is valid since C++11
    std::string::iterator str_it{myString.begin() + 5};
    std::cout << std::string(myString.begin(), str_it)
              << " from string"
              << std::endl; // output "hello from string"

    std::string_view myStringView(myString);
    // Using iterator on string_view is valid since C++20
    std::string_view::iterator str_view_it{myStringView.begin() + 5};
    std::cout << std::string_view(myStringView.begin(), str_view_it)
              << " from string_view"
              << std::endl; // output "hello from string_view"

    return 0;
}
