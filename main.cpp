#include "base91.h"

#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<Base91> base91 = std::make_unique<Base91>();

    std::string_view data{"Hello world !"};

    std::string encoded_91 = base91->encode(data);
    std::string decoded_91 = base91->decode(encoded_91);

    std::cout << "Encoded : " << encoded_91 << "\r\n"
              << "Decoded : " << decoded_91;
}