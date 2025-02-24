#include <gtest/gtest.h>
#include <Token.hpp>

TEST(Tokenizer, TokenStringMap) {
    static_assert(std::is_same_v<decltype(Tokenizer::token_to_str(Tokenizer::TokenType::INVALID)),
                                 std::string_view>);

    auto token_str { Tokenizer::token_to_str(Tokenizer::TokenType::LPAREN) };
    EXPECT_TRUE(true);
}
