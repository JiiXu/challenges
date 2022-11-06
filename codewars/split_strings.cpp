#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector< std::string > out = std::vector< std::string >();
    // Go through string in steps of two; we can only wind up on the last character if the string is of odd length
    for (unsigned i = 0; i < s.size(); i += 2) {
      if (i != s.size() - 1) {
        // Not on last character
        out.push_back({s[i], s[i+1]});
      } else {
        // On last character (thus, string length is odd)
        out.push_back({s[i], '_'});
      }
    }

    return out;
}
