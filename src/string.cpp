#include <seed/string.hpp>


namespace
{
    bool is_ascii_whitespace(char c) noexcept
    {
        return c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f';
    }

}


namespace seed {
    std::string trim(std::string_view sv)
    {
        size_t start = 0;
        size_t end = sv.size();

        while (start < end && is_ascii_whitespace(sv[start])) {
            ++start;
        }

        while (end > start && is_ascii_whitespace(sv[end - 1])) {
            --end;
        }

        return std::string(sv.substr(start, end - start));
    }
}

