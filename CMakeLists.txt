cmake_minimum_required( VERSION 3.8...3.27 )
project( son8test VERSION 0.0.0 LANGUAGES CXX )

set( SON8PROJ son8__${PROJECT_NAME} )

set( testrepo sonogram )
set( testhash db42ad3a3653d243f08f749760c44dd6b54aab0f )

include( FetchContent )
add_subdirectory( source )

enable_testing( )
add_subdirectory( testing )
