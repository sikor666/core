# info
core dump

# gdb -q segmentation_fault core
```bash
backtrace
print i
print vec[i]
print vec[i-1]
print $1-1
print vec[25]@5
print vec[0]@10
print/x vec[0]@15
print/t vec[200]
print/t vec[0]@10
print &vec[0]+10
x/2d 0x5590453c42d8
x/2x 0x5590453c42d8
print &vec[0]+15187
x/d 0x5590453d2ffc
print &vec[0]+15188
x/d 0x5590453d3000
whatis i
whatis vec
whatis fun_error
```
