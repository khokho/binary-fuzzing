#!/usr/bin/env sh
AFL_SKIP_CPUFREQ=1 afl-fuzz -Q -i corpus/ -o out -s 123 -- ./fuzz_target/target @@
