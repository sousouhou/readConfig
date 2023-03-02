
# Overall
This modules offers a simple way to read the config file (or *.ini file) in C code.
The format of a config file can refer to https://en.wikipedia.org/wiki/INI_file .
You can easily embed the file <configParse.h, configParse.c> in your project to read the config files.
However, something should be kept in mind:
1. It is a simple code, not support: section, nesting section, multi-line.
2. All whitespaces are ignored. "Num=12", "Num =12", "Num = 12", and etc. are all legal.
3. the return type is string. Use atoi(), atof(), and etc. to convert data format manually.
4. If two key has the same name, the foregoing one is read.


# Versions
Current version is 1.0. 


# Author 
S. Song 


# License
This software is released under MIT License.
See LICENSE for full informations.


# Run the example
Bash to the root of the project, and:
$make
$./exe




