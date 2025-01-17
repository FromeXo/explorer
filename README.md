# Explorer

A small program to use for opning a path or cwd in the file explorer of the OS.

Kinda useless in windows since their file explorer is call explorer. :P

# Installation

Build yourself or download release.

`c++ ./main.cpp -o ./explorer`

`sudo wget https://github.com/FromeXo/explorer/releases/latest/download/explorer -P /usr/bin/ && sudo chmod +x /usr/bin/explorer && sudo echo "complete -d explorer" >> /etc/bash_completion.d/comp_explorer`

## explorer
Copy this file to `/usr/bin/` or what ever `$PATH` you like.

## comp_explorer
Copy this file to `/etc/bash_completion.d/` for directory path autcompletion in bash.

