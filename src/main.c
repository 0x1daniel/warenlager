// MIT License
//
// Copyright (c) 2018 Daniel Oltmanns
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
#include "main.h"

int main(int argc, char *argv[]) {
    /* Throw error if no command is given */
    if(argc < 2 || argv[1][0] == '-') {
        util_error("No command given. See `warenlager help`.");
        exit(ERROR_CMD);
    }

    /* Parse command */
    if(strcmp(argv[1], "help") == 0) {
        printf(help, info);
    } else if(strcmp(argv[1], "version") == 0) {
        printf("%s\n", info);
    } else if(strcmp(argv[1], "run") == 0) {
        util_error("Not implemented yet.");
    } else {
        util_error("Command not found. See `warenlager help`.");
        exit(ERROR_CMD);
    }
}
