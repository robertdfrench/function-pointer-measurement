# function-pointer-measurement
How much do function pointers cost?

### The data
```console
$ make
gcc -o without.exe without.c
echo inline.exe with.exe without.exe | xargs -n1 -t -Ix time ./x
time ./inline.exe
       11.00 real        10.94 user         0.01 sys
time ./with.exe
       14.54 real        14.40 user         0.02 sys
time ./without.exe
       12.08 real        11.99 user         0.02 sys
```

Using function pointers vs manually inlining adds about 3.6s. Not great, but not
terrible.
