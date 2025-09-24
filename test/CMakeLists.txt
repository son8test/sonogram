link_libraries( son8__mainland son8__sonogram_faceimpl )

add_executable( test-hello hello.cxx )
add_test( NAME test-hello COMMAND test-hello )
