add_library(tokenizer INTERFACE)

target_link_libraries(tokenizer INTERFACE cpp-assertions)
target_include_directories(tokenizer INTERFACE .)

add_subdirectory(tests)
