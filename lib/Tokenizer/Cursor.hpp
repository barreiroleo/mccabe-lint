#pragma once

class Cursor
{
private:
    unsigned int pos {}; // Current abs position.
    unsigned int row {}; // Current row.
    unsigned int bol {}; // Begin of the current line in abs coords.

    /// @brief Calculates the token's column position
    /// @return column position
    [[nodiscard]] constexpr auto col() const -> unsigned int { return pos - bol; }

    /// @brief Advance the cursor given the current position.
    /// - Updates the absolute position in file.
    /// - If cursor is on a `\n` it also updates the `begin of line` and `row`.
    /// @param iter character where the cursor is on
    void advance(const char iter) { (iter == '\n') ? (bol = ++pos, ++row) : ++pos; }
};
