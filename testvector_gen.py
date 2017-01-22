import sys, numpy

def update_board():
    board_next = [[0 for x in range (8)] for x in range (8)]
    for a in range (len(board)):
        for i in range (len(board[a])):
            n = (board[(a-1)%8][i] + board[(a+1)%8][i] + board[a][(i+1)%8] +
                 board[a][(i-1)%8] + board[(a+1)%8][(i+1)%8] + board[(a-1)%8][(i+1)%8] +
                 board[(a-1)%8][(i-1)%8] + board[(a+1)%8][(i-1)%8])
            if (n == 3 or (board[a][i] and n == 2)):
                board_next[a][i] = 1
                
    return board_next

def print_board():
    for a in range (len(board)):
        for i in range (len(board[a])):
            print board[a][i],
        print ""
    print ""
    
def print_tv():
    for a in range(len(board)):
	sys.stdout.write(hex(1<<a)+", ")
        sys.stdout.write(hex(numpy.packbits(board[a]))),
	if a != len(board) - 1: print ", ",

board = [
[0,0,0,1,1,0,0,0],
[0,0,1,1,0,0,0,0],
[0,0,0,1,0,0,0,0],
[0,0,0,0,0,0,0,0],
[0,0,0,0,0,0,0,0],
[0,0,0,0,0,0,0,0],
[0,0,0,0,0,0,0,0],
[0,0,0,0,0,0,0,0],
]
    
board1 = [
[0,0,0,1,1,0,0,0],
[0,1,0,0,0,0,1,0],
[0,1,0,0,0,0,1,0],
[0,1,0,0,0,0,1,0],
[0,0,1,0,0,1,0,0],
[1,0,1,0,0,1,0,1],
[1,1,0,0,0,0,1,1],
[0,0,0,0,0,0,0,0],
]

iters = 10


print "#define NUM_STEPS "+str(iters)
print "const byte PROGMEM input_vals[] = {"

print "}"

print "const byte PROGMEM output_vals[] = {"
for i in range (iters):
    print_tv()
    board = update_board()
    if i != iters - 1 : print ","
print "\n}"
