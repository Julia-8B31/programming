# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Programming/lab_4/programming/laba_7/3/out/build/Configure preset using toolchain file/_deps/googletest-src"
  "D:/Programming/lab_4/programming/laba_7/3/out/build/Configure preset using toolchain file/_deps/googletest-build"
  "D:/Programming/lab_4/programming/laba_7/3/out/build/Configure preset using toolchain file/_deps/googletest-subbuild/googletest-populate-prefix"
  "D:/Programming/lab_4/programming/laba_7/3/out/build/Configure preset using toolchain file/_deps/googletest-subbuild/googletest-populate-prefix/tmp"
  "D:/Programming/lab_4/programming/laba_7/3/out/build/Configure preset using toolchain file/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
  "D:/Programming/lab_4/programming/laba_7/3/out/build/Configure preset using toolchain file/_deps/googletest-subbuild/googletest-populate-prefix/src"
  "D:/Programming/lab_4/programming/laba_7/3/out/build/Configure preset using toolchain file/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Programming/lab_4/programming/laba_7/3/out/build/Configure preset using toolchain file/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Programming/lab_4/programming/laba_7/3/out/build/Configure preset using toolchain file/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
