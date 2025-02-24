message("Building tokenizer tests")

add_executable(tokenizer_test Token_test.cpp)
target_link_libraries(tokenizer_test PRIVATE gtest_main tokenizer)
gtest_discover_tests(tokenizer_test)
