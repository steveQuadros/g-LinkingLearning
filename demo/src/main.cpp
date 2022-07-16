#include <iostream>
#include <mathutils/include/add.hpp>
#include <folly/fibers/async/Async.h>
#include <folly/fibers/async/WaitUtils.h>
#include <string>

using namespace folly;

fibers::async::Async<std::string> test() {
    return "Hi There Steven!";
}

int main()
{
    std::cout << "Hello, world. " << std::endl;
    std::cout << "3 + 4 = " << add(3, 4) << std::endl;
    auto msg = fibers::async::executeOnFiberAndWait([&]() -> fibers::async::Async<std::string> {
        return folly::fibers::async::await(test());
    });
    std::cout << "MSG from ASYNC: " << msg << std::endl;
    return 0;
}