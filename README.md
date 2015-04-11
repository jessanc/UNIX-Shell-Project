# UNIX-Shell-Project
Unix Shell Project for COP4600

A shell is a program that accepts commands and executes them. In doing so, the shell interacts with the 
Operating System through its System Calls. There are two types of commands any shell should handle: 
(1) General commands which are simply executable programs specified by their qualified names 
    (e.g., /usr/local/bin/findmyfriends*) and 
(2) Built-in commands which are internal to the shell to invoke a specific shell feature or to set internal 
    shell variables.


Built-in Commands

    setenv variable word
    printenv
    unsetenv variable
    cd word directory name
    alias name word
    unalias name
    bye
    
Other Commands
    
    cmd [arg]* [|cmd [arg]*]* [< fn1] [ >[>] fn2 ] [ 2>fn3 || 2>&1 ] [&]
    
Examples of Commands

    setenv PATH .:/usr/bin:/usr/local/bin:~ghi/bin:~/bin
    setenv ARGPATH .:~ghi/bin:~/bin
    cd ./bin
    cd ~/bin
    cd ~sjc/bin
    cd ../misc/old
    cd src/proj/first
    ls project1
    ls "~project1"
    wc -l f1 f2 f3 | sort | page
    command1 arg1 arg2 | command2 | command3 < file_in > file_out 2>&1 &
    alias lo logout
    alias rot13 "tr a-zA-Z n-za-mN-ZA-M"
    4
    rot13 < foo > bar
    ls *.c foo.?
    alias lo jj
    alias jj "ls -al"
    lo
    setenv this .
    setenv lsthis "jj ${this}"
    ${lsthis}
    bye
    setenv LIB ~/bin
    nm ${LIB}/libxc.a
    
    Working Commands:
    cd (all cases)
    ls (all cases)
    setenv
    printenv
    unsetenv
    alias
    unalias
    bye
    
    Commands not working:
    wc
