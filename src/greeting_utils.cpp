#include <string>
#include "greeting_utils.h"

namespace GreetingUtils {
    std::string create_message(const std::string& name) {
        std::string msg = "Hello, " + name + "!";
        return msg;
    }

    char* format_as_c_string(const std::string& msg) {
        std::size_t msg_len = msg.length();
        std::size_t buf_len = msg_len + 1;

        char* buf = new char[buf_len];

        for(size_t i = 0; i < msg_len; i++) {
            buf[i] = msg[i];
        }

        buf[buf_len - 1] = '\0';

        return buf;
    }
}
