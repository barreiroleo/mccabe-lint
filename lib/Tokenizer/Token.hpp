#pragma once

#include <Assert.hpp>

namespace Tokenizer {

enum class TokenType : std::uint8_t {
    // clang-format off
    // Single-character paired tokens. ( ) { } [ ] < >
    LPAREN, RPAREN,
    LBRACE, RBRACE,
    LBRACKET, RBRACKET,
    LANGLE, RANGLE,

    // Single-character tokens. - + / * = , . : ; #
    MINUS, PLUS, SLASH, STAR, EQUAL,
    COMMA, DOT, COLON, SEMICOLON, HASHTAG,

    // Literals.
    IDENTIFIER, STRING, NUMBER, KEYWORD,

    EoF, INVALID,
    // clang-format on
};

/// @brief Convert a token enumeration to its string equivalent.
/// @param token TokenType enumeration
constexpr auto token_to_str(TokenType token) -> std::string_view {
    using namespace std::string_view_literals;
    switch (token) {
    case TokenType::LPAREN: return "LPAREN"sv;
    case TokenType::RPAREN: return "RPAREN"sv;
    case TokenType::LBRACE: return "LBRACE"sv;
    case TokenType::RBRACE: return "RBRACE"sv;
    case TokenType::LBRACKET: return "LBRACKET"sv;
    case TokenType::RBRACKET: return "RBRACKET"sv;
    case TokenType::LANGLE: return "LANGLE"sv;
    case TokenType::RANGLE: return "RANGLE"sv;
    case TokenType::MINUS: return "MINUS"sv;
    case TokenType::PLUS: return "PLUS"sv;
    case TokenType::SLASH: return "SLASH"sv;
    case TokenType::STAR: return "STAR"sv;
    case TokenType::EQUAL: return "EQUAL"sv;
    case TokenType::COMMA: return "COMMA"sv;
    case TokenType::DOT: return "DOT"sv;
    case TokenType::COLON: return "COLON"sv;
    case TokenType::SEMICOLON: return "SEMICOLON"sv;
    case TokenType::HASHTAG: return "HASHTAG"sv;
    case TokenType::IDENTIFIER: return "IDENTIFIER"sv;
    case TokenType::STRING: return "STRING"sv;
    case TokenType::NUMBER: return "NUMBER"sv;
    case TokenType::KEYWORD: return "KEYWORD"sv;
    case TokenType::EoF: return "EoF"sv;
    case TokenType::INVALID: return "INVALID"sv;
    default: ASSERT(false, "Unhandled token type {}", static_cast<int>(token));
    }
    return "UNKNOWN"sv;
}

} // namespace Tokenizer
