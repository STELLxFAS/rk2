cmake_minimum_required(VERSION 3.16)
project(BusinessMediator VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_executable(mediator_app business.cpp)
add_executable(test_supply test_supply.cpp)
add_test(NAME SupplyTest COMMAND test_supply)

set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Student")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
include(CPack)
