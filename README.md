# plinko

This program is almost like an emulation of the game plinko. The idea is that you are playing plinko, you can drop as many balls down the chute as you want and we want to see which slot the final ball lands in. There are 5 slots for it to end up in, A, B, C, D, and E. Also, there are multiple gates in the chute, and each time a ball passes through a gate, it changes position to either left, right, or center. Give the program two arguments when running it, a 4 letter string made up of L, R, or C, and a number of any size made up of 1s and 0s.

## Usage

:$ make

:$ ./plinko "4 letters" "number"

    EX: ./plinko LRCL 101101
