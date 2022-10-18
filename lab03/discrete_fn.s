.globl f # this allows other files to find the function f

# f takes in two arguments:
# a0 is the value we want to evaluate f at
# a1 is the address of the "output" array (defined above).
# The return value should be stored in a0
f:
    addi a0, a0, 3      # a0 += 3
    slli a0, a0, 2      # a0 <<= 2
    add a1, a1, a0      # a1 = a0 + a1 (address)
    lw a0, 0(a1)        # load word
    # This is how you return from a function. You'll learn more about this later.
    # This should be the last line in your program.
    jr ra  