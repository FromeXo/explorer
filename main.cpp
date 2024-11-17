#include <filesystem>
#include <cstring>
#include <iostream>

using namespace std;

#define VERSION "1.0.0";

#ifdef _WIN32
    #define OPEN_COMMAND "explorer "
#elif __APPLE__
    #define OPEN_COMMAND "open "
#elif __linux__
    #define OPEN_COMMAND "xdg-open "
#endif

void error_msg(string path, string msg)
{
    cout << "Can\'t open path: " << path << endl;
    cout << msg << endl;
}

int main(int argc, char *argv[])
{
    string target;

    // Are we provided with a path?
    if (argc > 1) {
        target = argv[1];

        if (target[0] == '.') {
            target = filesystem::current_path().string() + target.substr(1);
        }

    }
    else {
        target = filesystem::current_path().string();
    }

    if ( ! filesystem::exists(target) ) {
        error_msg(target, "Path does not exists.");
        return 0;
    }

    if ( ! filesystem::is_directory(target) ) {
        error_msg(target, "Path is not a directory.");
        return 0;
    }

    string cmd = OPEN_COMMAND + target;

    // Execute command.
    system(cmd.c_str());

    return 0;
}