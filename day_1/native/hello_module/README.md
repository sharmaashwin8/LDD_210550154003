hello.c

Makefile

commands
---------

1. ls 

for listing files on the current directory 

2. make 

to execute the source code

3. sudo apt install raspberrypi-kernel-headers

it will install all the kernel headers

4. sudo insmod hello.ko

5. lsmod  

to check our module in our kernel space or not

6. dmesg 

to print our statement (it will show in red if we add kernel alert [KERN_ALERT()] before the statement)

7. sudo rmmod hello

to remove a module

then, dmesg--> it will print "Good Bye"

