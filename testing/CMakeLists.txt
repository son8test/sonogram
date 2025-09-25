set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_CXX_EXTENSIONS OFF )

link_libraries( son8__mainland son8__sonogram_faceimpl )

add_executable( test-hello hello.cxx )
add_test( NAME test-hello COMMAND test-hello )
