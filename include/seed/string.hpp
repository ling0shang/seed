#pragma once


#include <string>
#include <string_view>

namespace seed {


// 去掉字符串两端的 ASCII 空白字符。
// 空白字符集合 ' ', '\t', '\n', '\r', '\v', '\f'

std::string trim(std::string_view sv);

}  // namespace seed