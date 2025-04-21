

-Wall: Enables all compiler warnings, which can help catch potential errors and improve code quality.
-Wextra: Enables additional compiler warnings beyond -Wall, providing more thorough code analysis.
-Wswitch:
-std=XXX, what other really useful, but less known compiler flags are there for use in C? 
-Werror policy, as warnings that don't stop the compilation tend to be ignored.

Always use -O or above (-O1, -O2, -Os, etc.). At the default optimization level, gcc goes for compilation speed and doesn't do enough analysis to warn about things like unitialized variables.

-Wformat => Check calls to printf and scanf, etc., to make sure that the arguments supplied have types appropriate to the format string specified...

-Wformat is included in -Wall. For more control over some aspects of format checking, the options -Wformat-y2k, -Wno-format-extra-args, -Wno-format-zero-length, -Wformat-nonliteral, -Wformat-security, and -Wformat=2 are available, but are not included in -Wall.`

-Werror=return-type: Enforce an error when a function doesn't have any return in GCC. It is /we4716 in Visual Studio.

-Werror=implicit-function-declaration: Enforce an error when a function is used without being defined / not included. It is /we4013 in Visual Studio.

-Werror=incompatible-pointer-types: Enforce an error when a pointer's type mismatched with the expected pointer type. It is /we4133 in Visual Studio.



