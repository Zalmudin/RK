cmake_minimum_required(VERSION 3.14)
project(VisitorPatternEmployee)
set(CMAKE_CXX_STANDARD 17)

add_library(visitor_pattern
    src/visitor_pattern.cpp
    src/EmployeeVisitor.hpp
    src/Employee.hpp
    src/SoftwareEngineer.hpp
    src/SalesPerson.hpp
    src/CustomerSupporter.hpp
    src/IncentiveCalculationVisitor.hpp
    src/PrintInformationVisitor.hpp
    src/Calculate.hpp
)
target_include_directories(visitor_pattern PUBLIC \${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(visitor_demo src/main.cpp)
target_link_libraries(visitor_demo PRIVATE visitor_pattern)

# --- GTest section ---
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)

add_executable(tests tests/test_incentive.cpp)
target_link_libraries(tests PRIVATE visitor_pattern gtest gtest_main)
target_include_directories(tests PRIVATE src)
gtest_discover_tests(tests)

install(TARGETS visitor_demo RUNTIME DESTINATION bin)
include(InstallRequiredSystemLibraries)
set(CPACK_PACKAGE_NAME "visitor_pattern_employee")
set(CPACK_PACKAGE_VENDOR "Zalmudin")
set(CPACK_PACKAGE_CONTACT "Zalmudin@email.com")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Visitor pattern: employee example")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Zalmudin")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libc6 (>= 2.27)")
set(CPACK_RPM_PACKAGE_LICENSE "MIT")
set(CPACK_GENERATOR "DEB")
include(CPack)
